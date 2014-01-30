/***************************************************************************
 *   Copyright (C) 2013 by Sergey N Chursanov                              *
 *                                                                         *
 *   email: masakra@mail.ru                                                *
 *   jabber: masakra@jabber.ru                                             *
 *                                                                         *
 *   Permission is hereby granted, free of charge, to any person obtaining *
 *   a copy of this software and associated documentation files (the       *
 *   "Software"), to deal in the Software without restriction, including   *
 *   without limitation the rights to use, copy, modify, merge, publish,   *
 *   distribute, sublicense, and/or sell copies of the Software, and to    *
 *   permit persons to whom the Software is furnished to do so, subject to *
 *   the following conditions:                                             *
 *                                                                         *
 *   The above copyright notice and this permission notice shall be        *
 *   included in all copies or substantial portions of the Software.       *
 *                                                                         *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       *
 *   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    *
 *   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. *
 *   IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR     *
 *   OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, *
 *   ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR *
 *   OTHER DEALINGS IN THE SOFTWARE.                                       *
 ***************************************************************************/

/*! \class ArincData
 *
 */

#ifndef ARINCDATA_H
#define ARINCDATA_H

#define STR_BUF_SIZE 16	///< \sa toStdString() const

#include "Arinc.h"
#include <Geo>

class ArincData
{
	public:
		enum Type {
			Invalid,
			Int,
			Double,
			String,
			Coords
		};

	private:
		Arinc::Field m_field;	// запрошенное поле

		Type m_type;

		union {
			int m_int;
			double m_double;
			std::string * m_string;
			class Coordinates * m_coordinates;
		};

		void clearPointer();

	public:
		ArincData();

		ArincData( Arinc::Field field, int i );

		ArincData( Arinc::Field field, double d );

		ArincData( Arinc::Field field, const std::string & str );

		ArincData( Arinc::Field field, const Coordinates & coords );

		ArincData( const ArincData & other );		// copy constructor

		virtual ~ArincData();

		Arinc::Field field() const;

		Type fieldType() const;

		// установщики

		void setString( const std::string & str );

		ArincData & operator=( const std::string & str );

		// получатели значений

		int toInt() const;

		double toDouble() const;

		std::string toStdString() const;

		Coordinates toCoordinates() const;

		/*
		\\	static
		*/

		static Latitude latitude( const std::string & str );

		static Longitude longitude( const std::string & str );

		static Coordinates coordinates( const std::string & coords_str );

		static Coordinates coordinates( const std::string & lon_str, const std::string & lat_str );

		static Type fieldType( Arinc::Field field );
};

#endif

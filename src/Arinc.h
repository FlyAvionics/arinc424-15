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

/*! \class Arinc
 *
 * \brief 
 */

#ifndef ARINC_H
#define ARINC_H

#include <QLatin1String>

class ArincObjectInterface;

class Arinc
{
	private:

		/*
		\\	static
		*/


	public:
		/*! \enum Subsection
		 *
		 * \brief Подсекции ARINC
		 */
		enum Subsection {
			// раздел D. Навигационные средства
			D,		///< навигационные средства ОВЧ
			DB,		///< навигационные средства ОПРС
			// раздел E. Маршрут
			EA,		///< ППМ - промежуточная точка маршрута
			EM,		///< маркер авиатрассы раздела
			EP,		///< схемы полёта в зоне ожидания
			ER,		///< воздушные трассы
			EU,		///< ограничения воздушных трасс
			EV,		///< средства связи
			// раздел P. Аэродромы
			PA,		///< контрольные точки аэродромов
			PB,		///< районы входа
			PC,		///< контрольные точки аэроузла
			PD,		///< стандартная схема вылета по приборам (ВЫХОД)
			PE,		///< схемы стандартного маршрута прибытия (ВХОД)
			PF,		///< схемы захода на посадку
			PG,		///< ВПП - взлётно-посадочная полоса
			PI,		///< курсовой радиомаяк
			PL,		///< микроволновая система посадки
			PM,		///< маркеры курсового маяка
			PS,		///< минимальная высота сектора
			PV,		///< средства связи раздела
			PN,		///< ОПРС аэроузла
			// раздел R. Трассы авиакомпаний
			R,		///< трассы
			// раздел U. Ограниченное воздушное пространство
			UC,		///< контролируемое воздушное пространство
			UR,		///< ограниченное воздушное пространство
			UF,		///< ФИР/УИР
			// раздел T. Таблицы
			TC,		///< таблицы крейсерских эшелонов
			TG,		///< таблица географических координат
			AS,		///< минимальная безопасная высота полёта вне маршрута (MORA)
			HA,		///< вертодромы
			HV,		///< средство связи вертодрома
			ET,		///< предпочтительные маршруты
			EO,		///< препятствия на маршруте
			Unknown,
		};

		/*
		\\	static
		*/

		const ArincObjectInterface & operator[]( Subsection ss ) const;

		ArincObjectInterface & operator[]( Subsection ss );
};

#endif

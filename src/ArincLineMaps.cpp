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

#include "ArincLineMaps.h"


ArincLineMaps::ArincLineMaps()
{
	// D
	m_map[ Arinc::D ][ Arinc::Airport ].span( 10, 2, 6, 4 );
	m_map[ Arinc::D ][ Arinc::Ident ].span( 19, 2, 13, 4 );
	m_map[ Arinc::D ][ Arinc::Frequency ].span( 22, 5 );//3, 25, 2 );
	m_map[ Arinc::D ][ Arinc::NavClass ].span( 27, 5 );
	m_map[ Arinc::D ][ Arinc::Dme ].span( 51, 4 );
	m_map[ Arinc::D ][ Arinc::Merit ].span( 84 );
	m_map[ Arinc::D ][ Arinc::Datum ].span( 84 );
	m_map[ Arinc::D ][ Arinc::Name ].span( 93, 30 );
	m_map[ Arinc::D ][ Arinc::Coordinates ].span( 32, 19 );
	m_map[ Arinc::D ][ Arinc::Exceed ].span( 79, 5 );
	m_map[ Arinc::D ][ Arinc::Bias ].span( 85, 2 );
	m_map[ Arinc::D ][ Arinc::FreqPrd ].span( 87, 3 );
	m_map[ Arinc::D ][ Arinc::DmeCoordinates ].span( 55, 19 );
	m_map[ Arinc::D ][ Arinc::MagDev ].span( 74, 5 );
	//DB
	//m_map[ Arinc::DB ][ Arinc::Airport ].span( 6, 4 );		// оно есть, но всегда пустое
	m_map[ Arinc::DB ][ Arinc::Ident ].span( 19, 2, 13, 4 );
	m_map[ Arinc::DB ][ Arinc::Frequency ].span( 22, 5 );
	m_map[ Arinc::DB ][ Arinc::NavClass ].span( 27, 5 );
	m_map[ Arinc::DB ][ Arinc::Coordinates ].span( 32, 19 );
	m_map[ Arinc::DB ][ Arinc::MagDev ].span( 74, 5 );
	m_map[ Arinc::DB ][ Arinc::Datum ].span( 90, 3 );
	m_map[ Arinc::DB ][ Arinc::Name ].span( 93, 30 );
	//EA
	m_map[ Arinc::EA ][ Arinc::Ident ].span( 19, 2, 13, 5 );
	m_map[ Arinc::EA ][ Arinc::WaypointType ].span( 26, 3 );
	m_map[ Arinc::EA ][ Arinc::WaypointUsage ].span( 29, 2 );
	m_map[ Arinc::EA ][ Arinc::Coordinates ].span( 32, 19 );
	m_map[ Arinc::EA ][ Arinc::MagDev ].span( 74, 5 );
	m_map[ Arinc::EA ][ Arinc::Datum ].span( 84, 3 );
	m_map[ Arinc::EA ][ Arinc::WaypointFormat ].span( 95, 3 );
	m_map[ Arinc::EA ][ Arinc::Name ].span( 98, 5 );
	//E
	//EP
	m_map[ Arinc::EP ][ Arinc::Region ].span( 10, 2, 6, 4 );
	m_map[ Arinc::EP ][ Arinc::Duplicate ].span( 27, 2 );
	m_map[ Arinc::EP ][ Arinc::Fix ].span( 36, 2, 34, 2, 29, 5 );
	m_map[ Arinc::EP ][ Arinc::CourseIb ].span( 39, 4 );
	m_map[ Arinc::EP ][ Arinc::Turn ].span( 43 );
	m_map[ Arinc::EP ][ Arinc::Distance ].span( 44, 3 );
	m_map[ Arinc::EP ][ Arinc::Time ].span( 47, 2 );
	m_map[ Arinc::EP ][ Arinc::AltitMin ].span( 49, 5 );
	m_map[ Arinc::EP ][ Arinc::AltitMax ].span( 54, 5 );
	m_map[ Arinc::EP ][ Arinc::Speed ].span( 59, 3 );
	m_map[ Arinc::EP ][ Arinc::Comment ].span( 98, 25 );
	//ER
	m_map[ Arinc::ER ][ Arinc::Ident ].span( 13, 6, Arinc::Way );
	m_map[ Arinc::ER ][ Arinc::Order ].span( 25, 4 );
	m_map[ Arinc::ER ][ Arinc::Fix ].span( 36, 2, 34, 2, 29, 5 );
	m_map[ Arinc::ER ][ Arinc::WaypointDescription ].span( 39, 4 );
	m_map[ Arinc::ER ][ Arinc::Border ].span( 43 );
	m_map[ Arinc::ER ][ Arinc::RouteType ].span( 44 );
	m_map[ Arinc::ER ][ Arinc::Level ].span( 45 );
	m_map[ Arinc::ER ][ Arinc::Direction ].span( 46 );
	m_map[ Arinc::ER ][ Arinc::CruisingTable ].span( 47, 2 );
	m_map[ Arinc::ER ][ Arinc::EuIndicator ].span( 49 );
	m_map[ Arinc::ER ][ Arinc::RecdNav ].span( 54, 2, 50, 4 );
	m_map[ Arinc::ER ][ Arinc::Rnp ].span( 56, 3 );
	m_map[ Arinc::ER ][ Arinc::Theta ].span( 62, 4 );
	m_map[ Arinc::ER ][ Arinc::CourseOb ].span( 70, 4 );
	m_map[ Arinc::ER ][ Arinc::DistanceTime ].span( 74, 4 );
	m_map[ Arinc::ER ][ Arinc::CourseIb ].span( 78, 4 );
	m_map[ Arinc::ER ][ Arinc::AltitMin ].span( 83, 5 );
	m_map[ Arinc::ER ][ Arinc::AltitMin2 ].span( 88, 5 );
	m_map[ Arinc::ER ][ Arinc::AltitMax ].span( 93, 5 );
	//EU
	//EV
	m_map[ Arinc::EV ][ Arinc::Ident ].span( 6, 4 );
	m_map[ Arinc::EV ][ Arinc::Address ].span( 10, 4 );
	m_map[ Arinc::EV ][ Arinc::Indicator ].span( 14 );
	m_map[ Arinc::EV ][ Arinc::Name ].span( 18, 25 );
	m_map[ Arinc::EV ][ Arinc::CommType ].span( 43, 3 );
	m_map[ Arinc::EV ][ Arinc::Frequency ].span( 46, 7 );
	m_map[ Arinc::EV ][ Arinc::GuardTransmit ].span( 53 );
	m_map[ Arinc::EV ][ Arinc::FrequencyUnit ].span( 54 );
	m_map[ Arinc::EV ][ Arinc::Service ].span( 56, 3 );
	m_map[ Arinc::EV ][ Arinc::Radar ].span( 59 );
	m_map[ Arinc::EV ][ Arinc::Modulation ].span( 60 );
	m_map[ Arinc::EV ][ Arinc::SignalEmission ].span( 61 );
	m_map[ Arinc::EV ][ Arinc::Coordinates ].span( 62, 19 );
	m_map[ Arinc::EV ][ Arinc::MagDev ].span( 81, 5 );
	m_map[ Arinc::EV ][ Arinc::Exceed ].span( 86, 5 );
	m_map[ Arinc::EV ][ Arinc::H24 ].span( 91 );
	m_map[ Arinc::EV ][ Arinc::AltitDescription ].span( 92 );
	m_map[ Arinc::EV ][ Arinc::AltitMax ].span( 93, 5 );	// Alt1
	m_map[ Arinc::EV ][ Arinc::AltitMin ].span( 98, 5 );	// Alt2
	m_map[ Arinc::EV ][ Arinc::RemoteFacility ].span( 109, 2, 107, 2, 104, 4 );
	//PA
	m_map[ Arinc::PA ][ Arinc::Ident ].span( 10, 2, 6, 4 );
	m_map[ Arinc::PA ][ Arinc::Iata ].span( 13, 3 );
	m_map[ Arinc::PA ][ Arinc::AltitMin ].span( 22, 5 );	// высота ограничения скорости
	m_map[ Arinc::PA ][ Arinc::RunwayDistance ].span( 27, 3 );
	m_map[ Arinc::PA ][ Arinc::Ifr ].span( 30 );
	m_map[ Arinc::PA ][ Arinc::Coordinates ].span( 32, 19 );
	m_map[ Arinc::PA ][ Arinc::MagDev ].span( 51, 5 );
	m_map[ Arinc::PA ][ Arinc::Exceed ].span( 56, 5 );
	m_map[ Arinc::PA ][ Arinc::SpeedLimit ].span( 61, 3 );
	m_map[ Arinc::PA ][ Arinc::RecdNav ].span( 68, 2, 64, 4 );
	m_map[ Arinc::PA ][ Arinc::AltitTransition ].span( 70, 5 );
	m_map[ Arinc::PA ][ Arinc::LevelTransition ].span( 75, 5 );
	m_map[ Arinc::PA ][ Arinc::PublicMilitary ].span( 80 );
	m_map[ Arinc::PA ][ Arinc::TimeZone ].span( 81, 3 );
	m_map[ Arinc::PA ][ Arinc::TimeDayLight ].span( 84 );
	m_map[ Arinc::PA ][ Arinc::MagneticTrue ].span( 85 );
	m_map[ Arinc::PA ][ Arinc::Datum ].span( 86, 3 );
	m_map[ Arinc::PA ][ Arinc::Name ].span( 93, 30 );
	//PC
	m_map[ Arinc::PC ][ Arinc::Airport ].span( 10, 2, 6, 4 );
	m_map[ Arinc::PC ][ Arinc::Ident ].span( 19, 2, 13, 5 );
	m_map[ Arinc::PC ][ Arinc::WaypointType ].span( 26, 3 );
	m_map[ Arinc::PC ][ Arinc::WaypointUsage ].span( 29, 2 );
	m_map[ Arinc::PC ][ Arinc::Coordinates ].span( 32, 19 );
	m_map[ Arinc::PC ][ Arinc::MagDev ].span( 74, 5 );
	m_map[ Arinc::PC ][ Arinc::Datum ].span( 84, 3 );
	m_map[ Arinc::PC ][ Arinc::WaypointFormat ].span( 95, 3 );
	m_map[ Arinc::PC ][ Arinc::Name ].span( 98, 25 );
	//PD
	m_map[ Arinc::PD ][ Arinc::Airport ].span( 10, 2, 6, 4, Arinc::Way );
	m_map[ Arinc::PD ][ Arinc::Ident ].span( 13, 6, Arinc::Way );
	m_map[ Arinc::PD ][ Arinc::RouteType ].span( 19, 1, Arinc::Way );
	m_map[ Arinc::PD ][ Arinc::Transition ].span( 20, 5, Arinc::Way );
	m_map[ Arinc::PD ][ Arinc::Order ].span( 26, 3 );
	m_map[ Arinc::PD ][ Arinc::Fix ].span( 36, 2, 34, 2, 29, 5 );
	m_map[ Arinc::PD ][ Arinc::WaypointDescription ].span( 39, 4 );
	m_map[ Arinc::PD ][ Arinc::Turn ].span( 43 );
	m_map[ Arinc::PD ][ Arinc::PathAndTermination ].span( 47, 2 );
	m_map[ Arinc::PD ][ Arinc::TurnDirectionValid ].span( 49 );
	m_map[ Arinc::PD ][ Arinc::ArcRadius ].span( 56, 6 );
	m_map[ Arinc::PD ][ Arinc::Theta ].span( 62, 4 );
	m_map[ Arinc::PD ][ Arinc::Rho ].span( 66, 4 );
	m_map[ Arinc::PD ][ Arinc::CourseOb ].span( 70, 4 );
	m_map[ Arinc::PD ][ Arinc::DistanceTime ].span( 74, 4 );
	m_map[ Arinc::PD ][ Arinc::RecdNav ].span( 78, 2, 54, 2, 50, 4 );
	m_map[ Arinc::PD ][ Arinc::AltitDescription ].span( 82 );
	m_map[ Arinc::PD ][ Arinc::Atc ].span( 83 );
	m_map[ Arinc::PD ][ Arinc::AltitMax ].span( 84, 5 );	// Alt_1
	m_map[ Arinc::PD ][ Arinc::AltitMin ].span( 89, 5 );	// Alt_2
	m_map[ Arinc::PD ][ Arinc::AltitTransition ].span( 94, 5 );
	m_map[ Arinc::PD ][ Arinc::SpeedLimit ].span( 99, 3 );
	m_map[ Arinc::PD ][ Arinc::Angle ].span( 102, 4 );
	m_map[ Arinc::PD ][ Arinc::FixCenter ].span( 114, 2, 112, 2, 106, 6, Arinc::Way );
	// PE
	m_map[ Arinc::PE ][ Arinc::Airport ].span( 10, 2, 6, 4, Arinc::Way );
	m_map[ Arinc::PE ][ Arinc::Ident ].span( 13, 6, Arinc::Way );
	m_map[ Arinc::PE ][ Arinc::RouteType ].span( 19, 1, Arinc::Way );
	m_map[ Arinc::PE ][ Arinc::Transition ].span( 20, 5, Arinc::Way );
	m_map[ Arinc::PE ][ Arinc::Order ].span( 26, 3 );
	m_map[ Arinc::PE ][ Arinc::Fix ].span( 36, 2, 34, 2, 29, 5 );
	m_map[ Arinc::PE ][ Arinc::WaypointDescription ].span( 39, 4 );
	m_map[ Arinc::PE ][ Arinc::Turn ].span( 43 );
	m_map[ Arinc::PE ][ Arinc::TurnDirectionValid ].span( 49 );
	m_map[ Arinc::PE ][ Arinc::PathAndTermination ].span( 47, 2 );
	m_map[ Arinc::PE ][ Arinc::ArcRadius ].span( 56, 6 );
	m_map[ Arinc::PE ][ Arinc::Theta ].span( 62, 4 );
	m_map[ Arinc::PE ][ Arinc::Rho ].span( 66, 4 );
	m_map[ Arinc::PE ][ Arinc::CourseOb ].span( 70, 4 );
	m_map[ Arinc::PE ][ Arinc::DistanceTime ].span( 74, 4 );
	m_map[ Arinc::PE ][ Arinc::RecdNav ].span( 78, 2, 54, 2, 50, 4 );
	m_map[ Arinc::PE ][ Arinc::AltitDescription ].span( 82 );
	m_map[ Arinc::PE ][ Arinc::Atc ].span( 83 );
	m_map[ Arinc::PE ][ Arinc::AltitMax ].span( 84, 5 );	// Alt_1
	m_map[ Arinc::PE ][ Arinc::AltitMin ].span( 89, 5 );	// Alt_2
	m_map[ Arinc::PE ][ Arinc::AltitTransition ].span( 94, 5 );
	m_map[ Arinc::PE ][ Arinc::SpeedLimit ].span( 99, 3 );
	m_map[ Arinc::PE ][ Arinc::Angle ].span( 102, 4 );
	m_map[ Arinc::PE ][ Arinc::FixCenter ].span( 114, 2, 112, 2, 106, 5, Arinc::Way );
	// PF
	m_map[ Arinc::PF ][ Arinc::Airport ].span( 10, 2, 6, 4, Arinc::Way );
	m_map[ Arinc::PF ][ Arinc::Ident ].span( 13, 6, Arinc::Way );
	m_map[ Arinc::PF ][ Arinc::RouteType ].span( 19, 1, Arinc::Way );
	m_map[ Arinc::PF ][ Arinc::Transition ].span( 20, 5, Arinc::Way );
	m_map[ Arinc::PF ][ Arinc::Order ].span( 26, 3 );
	m_map[ Arinc::PF ][ Arinc::Fix ].span( 36, 2, 34, 2, 29, 5 );
	m_map[ Arinc::PF ][ Arinc::WaypointDescription ].span( 39, 4 );
	m_map[ Arinc::PF ][ Arinc::Turn ].span( 43 );
	m_map[ Arinc::PF ][ Arinc::TurnDirectionValid ].span( 49 );
	m_map[ Arinc::PF ][ Arinc::PathAndTermination ].span( 47, 2 );
	m_map[ Arinc::PF ][ Arinc::ArcRadius ].span( 56, 6 );
	m_map[ Arinc::PF ][ Arinc::Theta ].span( 62, 4 );
	m_map[ Arinc::PF ][ Arinc::Rho ].span( 66, 4 );
	m_map[ Arinc::PF ][ Arinc::CourseOb ].span( 70, 4 );
	m_map[ Arinc::PF ][ Arinc::DistanceTime ].span( 74, 4 );
	m_map[ Arinc::PF ][ Arinc::RecdNav ].span( 78, 2, 54, 2, 50, 4 );
	m_map[ Arinc::PF ][ Arinc::AltitDescription ].span( 82 );
	m_map[ Arinc::PF ][ Arinc::Atc ].span( 83 );
	m_map[ Arinc::PF ][ Arinc::AltitMax ].span( 84, 5 );	// Alt_1
	m_map[ Arinc::PF ][ Arinc::AltitMin ].span( 89, 5 );	// Alt_2
	m_map[ Arinc::PF ][ Arinc::AltitTransition ].span( 94, 5 );
	m_map[ Arinc::PF ][ Arinc::SpeedLimit ].span( 99, 3 );
	m_map[ Arinc::PF ][ Arinc::Angle ].span( 102, 4 );
	m_map[ Arinc::PF ][ Arinc::FixCenter ].span( 114, 2, 112, 2, 106, 5, Arinc::Way );
	// PG
	m_map[ Arinc::PG ][ Arinc::Airport ].span( 10, 2, 6, 4 );
	m_map[ Arinc::PG ][ Arinc::Ident ].span( 13, 5 );
	m_map[ Arinc::PG ][ Arinc::RunwayDistance ].span( 22, 5 );
	m_map[ Arinc::PG ][ Arinc::Bearing ].span( 27, 4 );
	m_map[ Arinc::PG ][ Arinc::Coordinates ].span( 32, 19 );
	m_map[ Arinc::PG ][ Arinc::RunwayGradient ].span( 51, 5 );
	m_map[ Arinc::PG ][ Arinc::Elevation ].span( 66, 5 );	// Landing Threshold Elevation
	m_map[ Arinc::PG ][ Arinc::Displacement ].span( 71, 4 );
	m_map[ Arinc::PG ][ Arinc::CrossingHeight ].span( 75, 2 );	// Threshold Crossing Height
	m_map[ Arinc::PG ][ Arinc::Width ].span( 77, 3 );		// 
	m_map[ Arinc::PG ][ Arinc::Ident1 ].span( 85, 1, 81, 4 );
	m_map[ Arinc::PG ][ Arinc::Stopway ].span( 86, 4 );
	m_map[ Arinc::PG ][ Arinc::Ident2 ].span( 94, 1, 90, 4 );
	m_map[ Arinc::PG ][ Arinc::Name ].span( 101, 22 );
	// PI
	m_map[ Arinc::PI ][ Arinc::Airport ].span( 10, 2, 6, 4 );
	m_map[ Arinc::PI ][ Arinc::Ident ].span( 17, 1, 13, 4 );		// как Ident1 и Ident2
	m_map[ Arinc::PI ][ Arinc::Frequency ].span( 22, 5 );
	m_map[ Arinc::PI ][ Arinc::Runway ].span( 27, 5 );
	m_map[ Arinc::PI ][ Arinc::Coordinates ].span( 32, 19 );
	m_map[ Arinc::PI ][ Arinc::Bearing ].span( 51, 4 );
	m_map[ Arinc::PI ][ Arinc::GsCoordinates ].span( 55, 19 );
	m_map[ Arinc::PI ][ Arinc::LocalizerPosition ].span( 74, 4 );
	m_map[ Arinc::PI ][ Arinc::LocalizerReference ].span( 78 );
	m_map[ Arinc::PI ][ Arinc::GsPosition ].span( 79, 4 );
	m_map[ Arinc::PI ][ Arinc::Width ].span( 83, 4 );	// Localizer width 5.51
	m_map[ Arinc::PI ][ Arinc::Angle ].span( 87, 3 );	// Glide Slope angle
	m_map[ Arinc::PI ][ Arinc::MagDev ].span( 90, 5 );
	m_map[ Arinc::PI ][ Arinc::CrossingHeight ].span( 95, 2 );
	m_map[ Arinc::PI ][ Arinc::Elevation ].span( 97, 5 );











	/*
	// Volume Header
	m_map[ Arinc::VolumeHeader ][ Arinc::LabelNumber ].span( 3 );
	m_map[ Arinc::VolumeHeader ][ Arinc::VolumeNumber ].span( 4, 6 );
	m_map[ Arinc::VolumeHeader ][ Arinc::DataFrom ].span( 37, 14 );
	m_map[ Arinc::VolumeHeader ][ Arinc::Tracks ].span( 51, 2 );
	*/
}

ArincLineMap &
ArincLineMaps::operator[]( Arinc::Subsection ss )
{
	return m_map[ ss ];
}

const ArincLineMap &
ArincLineMaps::operator[]( Arinc::Subsection ss ) const
{
	return m_map[ ss ];
}


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

#include "Arinc.h"


const char *
Arinc::subsectionName( Subsection ss ) // static
{
	static const char * names[] = {
		"Неизвестно",
		"Координатная сетка для минимальных высот вне маршрута (MORA)",
		"Навигационное средство ОВЧ",
		"Навигационное средство ОПРС"
		"Промежуточный пункт маршрута (ППМ)",
		"Маркерный маяк",
		"Схема полёта в зоне ожидания",
		"Воздушная трасса",
		"Предпочтительный маршрут",
		"Ограничение на авиатрассе",
		"Средство связи на трассе",
		"Контрольная точка вертодрома",
		"Средство связи вертодрома",
		"Контрольная точка аэродрома",
		"Район входа аэродрома",
		"Точка маршрута в районе аэродрома",
		"Стандартная схемы вылета по приборам (ВЫХОД)",
		"Стандартная схема захода на посадку (ВХОД)",
		"Схема захода на посадку",
		"Взлётно-посадочная полоса (ВПП)",
		"Курсовой или глиссадный радиомаяк",
		"Микроволновая система посадки",
		"Курсовой маркерный маяк",
		"ОПРС аэроузла",
		"Минимальная безопасная абсолютная высота (MSA)",
		"Средство связи аэродрома",
		"Маршрут авиакомпании",
		"Крейсерский эшелон",
		"Географические координаты",
		"Контролируемое ВД",
		"ФИР/УИР",
		"Ограниченное ВД"
	};

	if ( ss > EO )
		return 0;
	else
		return names[ ss - Unknown ];
}

const char *
Arinc::subsectionAbbr( Subsection ss )
{
	static const char * abbr[] = {
		"Unknown",
		"AS",
		"D ",
		"DB",
		"EA",
		"EM",
		"EP",
		"ER",
		"EU",
		"EV",
		"PA",
		"PB",
		"PC",
		"PD",
		"PE",
		"PF",
		"PG",
		"PI",
		"PL",
		"PM",
		"PS",
		"PV",
		"PN",
		"R ",
		"UC",
		"UR",
		"UF",
		"TC",
		"TG",
		"HA",
		"HV",
		"ET",
		"EO"
	};

	if ( ss > EO )
		return 0;
	else
		return abbr[ ss - Unknown ];
}

const char *
Arinc::fieldName( Field field )
{
	static const char * names[] = {
		0,					// Undefined

		"address",			// Address
		"airport",			// Airport
		"altitdesc",		// AltitDescription - описание высоты
		"altitmax",			// AltitMax
		"altitmin",			// AltitMin
		"altitmin2",		// AltitMin2
		"altittrans",		// AltitTrans
		"angle",			// Angle - вертикальный угол 5.70
		"arcrad",			// ArcRadius - радиус дуги или окружности
		"atc",				// Atc - Air Traffic Control (УВД) 5.81
		"bias",
		"border",			// Border - код границы 5.18
		"comm",				// Comment
		"commtype",			// CommType - тип станции связи
		"coordinates",		// Coordinates
		"courseib",			// CourseIb
		"courseob",			// CourseOb
		"crstbl",			// CruisingTable - таблица крейсерских эшелонов 5.134
		"cycle",			// Cycle
		"datum",			// Datum
		"direction",		// Direction - ограничение по направлению 5.115
		"distance",			// Distance
		"disttime",			// DistanceTime - расстояние или время
		"dme",				// Dme
		"dmecoordinates",	// DmeCoordinates
		"duplicate",		// Duplicate
		"encoding",
		"eu",				// EuIndicator
		"exceed",
		"fix",				// Fix
		"fixcenter",		// FixCenter - центральная контрольная точка 5.144
		"frequency",		// Frequency	numeric( 6,2 )
		"frequnit",			// FrequencyUnit - диапазон частот
		"freqprd",
		"gt",				// GuardTransmit - приём/передача
		"h24",				// H24 - круглосуточно Y/N
		"iata",				// Iata - код IATA
		"ident",			// Ident
		"ifr",				// Ifr - instrument flight rules
		"indicator",		// Indicator
		"level",			// Level - эшелон
		"leveltrans",		// LevelTransition - эшелон перехода
		"magdev",			// MagDev		numeric( 4,1 )
		"magtrue",			// MagneticTrue индикатор
		"merit",			// Merit
		"modulation",		// Modulation - модуляция
		"name",				// Name
		"navclass",			// NavClass
		"ord",				// Order
		"paritycheck",
		"pathterm",			// PathAndTermination
		"pubmil",			// PublicMilitary индикатор
		"radar",			// Radar
		"recdnav",			// RecdNav - рекомендуемое навигационное средство
		"region",			// Region
		"remfac",			// Remote facility
		"rho",				// Rho 5.25
		"rnp",				// Required Navigation Performance
		"routetype",		// RouteType - тип маршрута
		"rwdistance",		// RunwayDistance - наибольшая длина ВПП
		"service",			// Service - индикатор службы связи
		"sigem",			// SignalEmission - описание ВЧ сигнала
		"speed",			// Speed
		"speedlim",			// SpeedLimit - ограничение скорости
		"theta",			// Theta 5.24
		"time",				// Time
		"timeday",			// TimeDayLignt
		"timezone",			// TimeZone
		"transition",		// Transition - идентификатор перехода 5.11
		"turn",				// Turn
		"turnvalid",		// TurnDirectionValid - необходимость разворота в заданном направлении 5.22
		"wpdesc",			// WaypointDescription
		"wpformat",			// WaypointFormat
		"wptype",			// WaypointType
		"wpusage",			// WaypointUsage
		"zone"				// Zone
	};

	return names[ field ];
}


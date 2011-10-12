/*
 * This file is part of PRO CFW.

 * PRO CFW is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * PRO CFW is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with PRO CFW. If not, see <http://www.gnu.org/licenses/ .
 */

#include "common.h"

const char *g_messages_de[] = {
	"Standard",
	"Deaktivieren",
	"Aktivieren",
	"Normal",
	"M33 Treiber",
	"Sony NP9660",
	"Inferno",
	"CPU TAKT XMB  ",
	"CPU TAKT GAME ",
	"USB GER�T      ",
	"UMD ISO MODUS  ",
	"ISO VIDEO MOUNT",
	"RECOVERY MEN�  ->",
	"GER�T ABSCHALTEN",
	"GER�T PAUSIEREN",
	"GER�T NEU STARTEN",
	"VSH NEU STARTEN",
	"ZUR�CK",
	"PRO VSH MEN�",
	"Flash",
	"UMD Disc",
	"Memory Stick",
	"Nichts",
};

u8 message_test_de[NELEMS(g_messages_de) == MSG_END ? 0 : -1];
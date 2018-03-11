/* vim:expandtab:ts=2 sw=2:
*/
/*  Grafx2 - The Ultimate 256-color bitmap paint program

    Copyright 2018 Thomas Bernard
    Copyright 1996-2001 Sunset Design (Guillaume Dorme & Karl Maritaud)

    Grafx2 is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; version 2
    of the License.

    Grafx2 is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Grafx2; if not, see <http://www.gnu.org/licenses/>
*/

///@file fileformats.h
/// Saving and loading different picture formats.

#ifndef FILEFORMATS_H_INCLUDED
#define FILEFORMATS_H_INCLUDED

#include "loadsave.h"

// -- PKM -------------------------------------------------------------------
void Test_PKM(T_IO_Context *);
void Load_PKM(T_IO_Context *);
void Save_PKM(T_IO_Context *);

// -- IFF -------------------------------------------------------------------
void Test_LBM(T_IO_Context *);
void Test_PBM(T_IO_Context *);
void Test_ACBM(T_IO_Context *);
void Load_IFF(T_IO_Context *);
void Save_IFF(T_IO_Context *);

// -- GIF -------------------------------------------------------------------
void Test_GIF(T_IO_Context *);
void Load_GIF(T_IO_Context *);
void Save_GIF(T_IO_Context *);

// -- PCX -------------------------------------------------------------------
void Test_PCX(T_IO_Context *);
void Load_PCX(T_IO_Context *);
void Save_PCX(T_IO_Context *);

// -- BMP -------------------------------------------------------------------
void Test_BMP(T_IO_Context *);
void Load_BMP(T_IO_Context *);
void Save_BMP(T_IO_Context *);

// -- IMG -------------------------------------------------------------------
void Test_IMG(T_IO_Context *);
void Load_IMG(T_IO_Context *);
void Save_IMG(T_IO_Context *);

// -- SCx -------------------------------------------------------------------
void Test_SCx(T_IO_Context *);
void Load_SCx(T_IO_Context *);
void Save_SCx(T_IO_Context *);

// -- CEL -------------------------------------------------------------------
void Test_CEL(T_IO_Context *);
void Load_CEL(T_IO_Context *);
void Save_CEL(T_IO_Context *);

// -- KCF -------------------------------------------------------------------
void Test_KCF(T_IO_Context *);
void Load_KCF(T_IO_Context *);
void Save_KCF(T_IO_Context *);

// -- PAL -------------------------------------------------------------------
void Test_PAL(T_IO_Context *);
void Load_PAL(T_IO_Context *);
void Save_PAL(T_IO_Context *);

// -- GPL -------------------------------------------------------------------
void Test_GPL(T_IO_Context *);
void Load_GPL(T_IO_Context *);
void Save_GPL(T_IO_Context *);

// -- PI1 -------------------------------------------------------------------
void Test_PI1(T_IO_Context *);
void Load_PI1(T_IO_Context *);
void Save_PI1(T_IO_Context *);

// -- PC1 -------------------------------------------------------------------
void Test_PC1(T_IO_Context *);
void Load_PC1(T_IO_Context *);
void Save_PC1(T_IO_Context *);

// -- NEO -------------------------------------------------------------------
void Test_NEO(T_IO_Context *);
void Load_NEO(T_IO_Context *);
void Save_NEO(T_IO_Context *);

// -- C64 -------------------------------------------------------------------
void Test_C64(T_IO_Context *);
void Load_C64(T_IO_Context *);
void Save_C64(T_IO_Context *);

// -- SCR (Amstrad CPC)
void Save_SCR(T_IO_Context *);

// -- CM5 (Amstrad CPC)
void Test_CM5(T_IO_Context *);
void Load_CM5(T_IO_Context *);
void Save_CM5(T_IO_Context *);

// -- PPH (Amstrad CPC)
void Test_PPH(T_IO_Context *);
void Load_PPH(T_IO_Context *);
void Save_PPH(T_IO_Context *);

// -- XPM (X PixMap)
// Loading is done through SDL_Image
void Save_XPM(T_IO_Context*);

// -- ICO (Windows ICO)
void Test_ICO(T_IO_Context *);
void Load_ICO(T_IO_Context *);
void Save_ICO(T_IO_Context *);

// -- PNG -------------------------------------------------------------------
#ifndef __no_pnglib__
void Test_PNG(T_IO_Context *);
void Load_PNG(T_IO_Context *);
void Save_PNG(T_IO_Context *);
#endif

// -- INFO (Amiga ICONS) ----------------------------------------------------
void Test_INFO(T_IO_Context *);
void Load_INFO(T_IO_Context *);

#endif

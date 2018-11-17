/* vim:expandtab:ts=2 sw=2:
*/
/*  Grafx2 - The Ultimate 256-color bitmap paint program

    Copyright 2008 Adrien Destugues

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

///@file oldies.h
/// functions relative to old computers (Commodore 64, Thomsons MO/TO, Amstrad CPC, ZX Spectrum, etc.)

/** @defgroup c64 Commodore 64
 * Some C64 video mode related functions
 * @{
 */
/**
 * Save a 3 layer picture to C64 FLI format
 *
 * @param bitmap a 8000 byte buffer to store bitmap data
 * @param screen_ram a 8192 byte buffer to store the 8 screen RAMs
 * @param color_ram a 1000 byte buffer to store the color RAM
 * @param background a 200 byte buffer to store the background colors
 * @return 0 for success, 1 if the picture is less than 3 layers, 2 if the picture dimensions are not 160x200
 */
int C64_FLI(byte *bitmap, byte *screen_ram, byte *color_ram, byte *background);

int C64_FLI_enforcer(void);

/** @}*/

/** @defgroup decb DECB binary format
 *
 * The DECB binary format was used on 6809 based machines :
 * Tandy CoCo, Dragon 32/64 and Thomson MO/TO.
 *
 * DECB stand for Disk Extended Color Basic and was a version
 * of the Microsoft BASIC-69 (their basic for Motorola 6809)
 * @{
 */
/**
 * Add a chunk to a DECB binary file
 *
 * @param f open file
 * @param size size of the memory chunk
 * @param address load address of the memory chunk
 * @param data data to add in memory chunk
 * @return true for success
 */
int DECB_BIN_Add_Chunk(FILE * f, word size, word address, const byte * data);

/**
 * Add a chunk to a DECB binary file
 *
 * @param f open file
 * @param address run address of the binary file (LOADM,,R)
 * @return true for success
 */
int DECB_BIN_Add_End(FILE * f, word address);


/**
 * Check if the file is in the DECB Binary format
 *
 * @param f open file
 * @return 1 if the file is in DECB Binary format, or else 0
 */
int DECB_Check_binary_file(FILE * f);
/** @}*/

/** @defgroup moto Thomson MO/TO
 * The Thomson MO/TO computer range was based on a Motorola 6809 CPU
 * and equiped with Microsoft Basic called Basic 1.0 for the first
 * versions and then Basic 128 or Basic 512 which included a DOS
 * and more features.
 *
 * The range includes :
 * - TO7
 * - MO5/MO5E
 * - TO7/70
 * - TO9
 * - MO6/MO5NR
 * - TO8/TO8D
 * - TO9
 * - Olivetti Prodest PC128 (a Thomson MO6 clone)
 * @{
 */

/**
 * to define a specific machine in the Thomson MO/TO range of machines
 */
enum MOTO_Machine_Type {
  MACHINE_TO7,    ///< original TO7 with 8 colors
  MACHINE_TO770,  ///< the TO7-70 had 16 colors
  MACHINE_MO5,
  MACHINE_MO6,    ///<
  MACHINE_TO9,
  MACHINE_TO8     ///< TO8, TO8D and TO9+ are equivalent
};

/**
 * Graphic modes available in BASIC 128/512 with CONSOLE,,,,X instruction
 */
enum MOTO_Graphic_Mode {
  MOTO_MODE_40col = 0,  ///< 320x200 16 colors with constraints
  MOTO_MODE_80col = 1,  ///< 640x200 2 colors
  MOTO_MODE_bm4 = 2,    ///< 320x200 4 colors without constraint
  MOTO_MODE_bm16 = 3,   ///< 160x200 16 colors without constraint
};

/**
 * Checks if the file is a Thomson binary file (SAVEM/LOADM format)
 *
 * @param f a file open for reading
 * @return 0 if this is not a binary file
 * @return >0 if this is a binary file :
 * @return 1 no further details found
 * @return 2 This is likely a MAP file (SAVEP/LOADP format)
 * @return 3 This is likely a TO autoloading picture
 * @return 4 This is likely a MO5/MO6 autoloading picture
 */
int MOTO_Check_binary_file(FILE * f);

/**
 * Convert a RGB value to Thomson BGR value with gamma correction.
 */
word MOTO_gamma_correct_RGB_to_MOTO(const T_Components * color);

/**
 * Convert a Thomson BGR value to RGB values with gamma correction.
 */
void MOTO_gamma_correct_MOTO_to_RGB(T_Components * color, word bgr);
/** @}*/

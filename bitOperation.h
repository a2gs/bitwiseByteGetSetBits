/* Andre Augusto Giannotti Scota (a2gs)                              
 * andre.scota@gmail.com
 *
 * Set/Get bit operations
 *
 * Public Domain
 *
 */

/* bitOperation.h
 *
 *  Who     | When       | What
 *  --------+------------+----------------------------
 *   a2gs   | 01/01/2002 | Creation
 *          |            |
 */

#ifndef __A2GS_TOOLBOX_BITOP_H__
#define __A2GS_TOOLBOX_BITOP_H__


/* *** INCLUDES *** */
#include <limits.h>


/* *** DEFINES *** */
/* Set the state of a given bit into a BYTE_t variable.
 * __byte_ - BYTE_t variable
 * __n_ - Bit position (into byte, from 1 to 8 at left to right)
 */
#define A2GS_TOOLBOX_SETBIT(__byte_, __n_) (__byte_ |= ((A2GS_TOOLBOX_BYTE_t) 1) << CHAR_BIT - __n_)

/* Get the state of a given bit into a BYTE_t variable.
 * __byte_ - BYTE_t variable
 * __n_ - Bit position (into byte, from 1 to 8 at left to right)
 */
#define A2GS_TOOLBOX_GETBIT(__byte_, __n_) ((__byte_ & ((A2GS_TOOLBOX_BYTE_t) 1) << CHAR_BIT - __n_) ? 1 : 0)


/* *** DATA TYPES *** */
/* Default Byte type */
typedef unsigned char A2GS_TOOLBOX_BYTE_t;


/* *** INTERFACES / PROTOTYPES *** */


/* *** EXAMPLE *** */
#if 0

#include <stdio.h>

int main(int argc, char *argv[])
{
	A2GS_TOOLBOX_BYTE_t i = 0;

	A2GS_TOOLBOX_SETBIT(i, 1); A2GS_TOOLBOX_SETBIT(i, 3);
	A2GS_TOOLBOX_SETBIT(i, 7); A2GS_TOOLBOX_SETBIT(i, 5);

	printf("\n[%d] [%d] [%d] [%d] [%d] [%d] [%d] [%d] - [%d]\n",
	       A2GS_TOOLBOX_GETBIT(i,1), A2GS_TOOLBOX_GETBIT(i,2), A2GS_TOOLBOX_GETBIT(i,3),
	       A2GS_TOOLBOX_GETBIT(i,4), A2GS_TOOLBOX_GETBIT(i,5), A2GS_TOOLBOX_GETBIT(i,6),
	       A2GS_TOOLBOX_GETBIT(i,7), A2GS_TOOLBOX_GETBIT(i,8), i);

	return(1);
}
#endif

#endif

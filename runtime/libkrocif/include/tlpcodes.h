/*
 *	tlpcodes.h -- top-level interface generated by tranx86 for the run-time/interface
 *	Copyright (C) 2006 Fred Barnes <frmb@kent.ac.uk>
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation; either version 2 of the License, or
 *	(at your option) any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program; if not, write to the Free Software
 *	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __TLPCODES_H
#define __TLPCODES_H

/* top-level process definitions, as generated by tranx86 */
#define TLP_NULL		0x00
#define TLP_KYB			0x01
#define TLP_SCR			0x02
#define TLP_KYBSCR		0x03
#define TLP_ERR			0x04
#define TLP_KYBERR		0x05
#define TLP_SCRERR		0x06
#define TLP_KYBSCRERR		0x07
#define TLP_FSTS		0x41
#define TLP_FSTSMEM		0x42
#define TLP_FSTSSIZEDMEM	0x43
#define TLP_SHAREDKYB		0x08
#define TLP_SHAREDSCR		0x10
#define TLP_SHAREDERR		0x20
#define TLP_SHAREDMASK		0x38

#define TLP_FORK_BARRIER	0x100
#define TLP_FORK_NOWAIT		0x200
#define TLP_EXT_NOWAIT		0x400
#define TLP_MPP_BARRIER		0x800
#define TLP_PRINT_MEMSTATS	0x1000
#define TLP_CTTD		0x2000

#define TLP_EFLAGMASK		0x3f00


#endif	/* !__TLPCODES_H */


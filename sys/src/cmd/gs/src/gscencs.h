/*
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

/* Copyright (C) 2002 Aladdin Enterprises.  All rights reserved.
  
  This software is provided AS-IS with no warranty, either express or
  implied.
  
  This software is distributed under license and may not be copied,
  modified or distributed except as expressly authorized under the terms
  of the license contained in the file LICENSE in this distribution.
  
  For more information about licensing, please refer to
  http://www.ghostscript.com/licensing/. For information on
  commercial licensing, go to http://www.artifex.com/licensing/ or
  contact Artifex Software, Inc., 101 Lucas Valley Road #110,
  San Rafael, CA  94903, U.S.A., +1(415)492-9861.
*/

/* $Id: gscencs.h,v 1.5 2003/10/23 09:49:31 igor Exp $ */
/* Compact C representation of built-in encodings */

#ifndef gscencs_INCLUDED
#  define gscencs_INCLUDED

#include "stdpre.h"
#include "gstypes.h"
#include "gsccode.h"

/*
 * This file defines an interface to a compact C representation of the
 * built-in encodings.  This representation is currently used only by
 * pdfwrite, but the PostScript interpreter could in principle use it too.
 *
 * This representation uses its own private numbering system for glyphs.
 * gs_c_known_encode returns one of these private glyph numbers;
 * gs_c_glyph_name converts a private glyph number to a string.
 * For more information about glyph numbering, see gsccode.h.
 *
 * The data file for this representation, gscedata.c, is generated by a
 * PostScript program, encs2c.ps.  If the representation changes, this file
 * (src/gscencs.h), gscencs.c, and lib/encs2c.ps must be kept consistent.
 */

/*
 * Define the minimum gs_glyph value for glyphs in these encodings.
 * gs_glyph values from this value through gs_min_cid_glyph - 1 are reserved.
 */
extern const gs_glyph gs_c_min_std_encoding_glyph;

/*
 * Encode a character in a known encoding.  The only use for glyph numbers
 * returned by this procedure is to pass them to gs_c_glyph_name.
 */
gs_glyph gs_c_known_encode(gs_char chr, int encoding_index);

/*
 * Decode a gs_c_glyph_name glyph with a known encoding.
 */
gs_char gs_c_decode(gs_glyph glyph, int ei);

/*
 * Convert a glyph number returned by gs_c_known_encode to a string.
 */
int gs_c_glyph_name(gs_glyph glyph, gs_const_string *pstr);

/*
 * Test whether a string is one that was returned by gs_c_glyph_name.
 */
bool gs_is_c_glyph_name(const byte *str, uint len);

/*
 * Return the glyph number corresponding to a string (the inverse of
 * gs_c_glyph_name), or GS_NO_GLYPH if the glyph name is not known.
 */
gs_glyph gs_c_name_glyph(const byte *str, uint len);

#endif /* gscencs_INCLUDED */

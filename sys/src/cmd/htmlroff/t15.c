/*
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

#include "a.h"

/*
 * 15. Output line numbering.
 */

void
t15init(void)
{
	addreq(L("nm"), r_warn, -1);
	addreq(L("nn"), r_warn, -1);
}


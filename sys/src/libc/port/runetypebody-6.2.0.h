/*
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

/* generated automatically by mkrunetype.c in Go from UnicodeData-6.2.0.txt
 *  with s/rbsearch/_runebsearch/g
 */

static Rune __isspacer[] = {
	0x0009, 0x000d,
	0x0020, 0x0020,
	0x0085, 0x0085,
	0x00a0, 0x00a0,
	0x1680, 0x1680,
	0x180e, 0x180e,
	0x2000, 0x200a,
	0x2028, 0x2029,
	0x202f, 0x202f,
	0x205f, 0x205f,
	0x3000, 0x3000,
	0xfeff, 0xfeff,
};

int
isspacerune(Rune c)
{
	Rune *p;

	p = _runebsearch(c, __isspacer, nelem(__isspacer)/2, 2);
	if(p && c >= p[0] && c <= p[1])
		return 1;
	return 0;
}

static Rune __isdigitr[] = {
	0x0030, 0x0039,
	0x0660, 0x0669,
	0x06f0, 0x06f9,
	0x07c0, 0x07c9,
	0x0966, 0x096f,
	0x09e6, 0x09ef,
	0x0a66, 0x0a6f,
	0x0ae6, 0x0aef,
	0x0b66, 0x0b6f,
	0x0be6, 0x0bef,
	0x0c66, 0x0c6f,
	0x0ce6, 0x0cef,
	0x0d66, 0x0d6f,
	0x0e50, 0x0e59,
	0x0ed0, 0x0ed9,
	0x0f20, 0x0f29,
	0x1040, 0x1049,
	0x1090, 0x1099,
	0x17e0, 0x17e9,
	0x1810, 0x1819,
	0x1946, 0x194f,
	0x19d0, 0x19d9,
	0x1a80, 0x1a89,
	0x1a90, 0x1a99,
	0x1b50, 0x1b59,
	0x1bb0, 0x1bb9,
	0x1c40, 0x1c49,
	0x1c50, 0x1c59,
	0xa620, 0xa629,
	0xa8d0, 0xa8d9,
	0xa900, 0xa909,
	0xa9d0, 0xa9d9,
	0xaa50, 0xaa59,
	0xabf0, 0xabf9,
	0xff10, 0xff19,
	0x104a0, 0x104a9,
	0x11066, 0x1106f,
	0x110f0, 0x110f9,
	0x11136, 0x1113f,
	0x111d0, 0x111d9,
	0x116c0, 0x116c9,
	0x1d7ce, 0x1d7ff,
};

int
isdigitrune(Rune c)
{
	Rune *p;

	p = _runebsearch(c, __isdigitr, nelem(__isdigitr)/2, 2);
	if(p && c >= p[0] && c <= p[1])
		return 1;
	return 0;
}

static Rune __isalphar[] = {
	0x0041, 0x005a,
	0x0061, 0x007a,
	0x00c0, 0x00d6,
	0x00d8, 0x00f6,
	0x00f8, 0x02c1,
	0x02c6, 0x02d1,
	0x02e0, 0x02e4,
	0x0370, 0x0374,
	0x0376, 0x0377,
	0x037a, 0x037d,
	0x0388, 0x038a,
	0x038e, 0x03a1,
	0x03a3, 0x03f5,
	0x03f7, 0x0481,
	0x048a, 0x0527,
	0x0531, 0x0556,
	0x0561, 0x0587,
	0x05d0, 0x05ea,
	0x05f0, 0x05f2,
	0x0620, 0x064a,
	0x066e, 0x066f,
	0x0671, 0x06d3,
	0x06e5, 0x06e6,
	0x06ee, 0x06ef,
	0x06fa, 0x06fc,
	0x0712, 0x072f,
	0x074d, 0x07a5,
	0x07ca, 0x07ea,
	0x07f4, 0x07f5,
	0x0800, 0x0815,
	0x0840, 0x0858,
	0x08a2, 0x08ac,
	0x0904, 0x0939,
	0x0958, 0x0961,
	0x0971, 0x0977,
	0x0979, 0x097f,
	0x0985, 0x098c,
	0x098f, 0x0990,
	0x0993, 0x09a8,
	0x09aa, 0x09b0,
	0x09b6, 0x09b9,
	0x09dc, 0x09dd,
	0x09df, 0x09e1,
	0x09f0, 0x09f1,
	0x0a05, 0x0a0a,
	0x0a0f, 0x0a10,
	0x0a13, 0x0a28,
	0x0a2a, 0x0a30,
	0x0a32, 0x0a33,
	0x0a35, 0x0a36,
	0x0a38, 0x0a39,
	0x0a59, 0x0a5c,
	0x0a72, 0x0a74,
	0x0a85, 0x0a8d,
	0x0a8f, 0x0a91,
	0x0a93, 0x0aa8,
	0x0aaa, 0x0ab0,
	0x0ab2, 0x0ab3,
	0x0ab5, 0x0ab9,
	0x0ae0, 0x0ae1,
	0x0b05, 0x0b0c,
	0x0b0f, 0x0b10,
	0x0b13, 0x0b28,
	0x0b2a, 0x0b30,
	0x0b32, 0x0b33,
	0x0b35, 0x0b39,
	0x0b5c, 0x0b5d,
	0x0b5f, 0x0b61,
	0x0b85, 0x0b8a,
	0x0b8e, 0x0b90,
	0x0b92, 0x0b95,
	0x0b99, 0x0b9a,
	0x0b9e, 0x0b9f,
	0x0ba3, 0x0ba4,
	0x0ba8, 0x0baa,
	0x0bae, 0x0bb9,
	0x0c05, 0x0c0c,
	0x0c0e, 0x0c10,
	0x0c12, 0x0c28,
	0x0c2a, 0x0c33,
	0x0c35, 0x0c39,
	0x0c58, 0x0c59,
	0x0c60, 0x0c61,
	0x0c85, 0x0c8c,
	0x0c8e, 0x0c90,
	0x0c92, 0x0ca8,
	0x0caa, 0x0cb3,
	0x0cb5, 0x0cb9,
	0x0ce0, 0x0ce1,
	0x0cf1, 0x0cf2,
	0x0d05, 0x0d0c,
	0x0d0e, 0x0d10,
	0x0d12, 0x0d3a,
	0x0d60, 0x0d61,
	0x0d7a, 0x0d7f,
	0x0d85, 0x0d96,
	0x0d9a, 0x0db1,
	0x0db3, 0x0dbb,
	0x0dc0, 0x0dc6,
	0x0e01, 0x0e30,
	0x0e32, 0x0e33,
	0x0e40, 0x0e46,
	0x0e81, 0x0e82,
	0x0e87, 0x0e88,
	0x0e94, 0x0e97,
	0x0e99, 0x0e9f,
	0x0ea1, 0x0ea3,
	0x0eaa, 0x0eab,
	0x0ead, 0x0eb0,
	0x0eb2, 0x0eb3,
	0x0ec0, 0x0ec4,
	0x0edc, 0x0edf,
	0x0f40, 0x0f47,
	0x0f49, 0x0f6c,
	0x0f88, 0x0f8c,
	0x1000, 0x102a,
	0x1050, 0x1055,
	0x105a, 0x105d,
	0x1065, 0x1066,
	0x106e, 0x1070,
	0x1075, 0x1081,
	0x10a0, 0x10c5,
	0x10d0, 0x10fa,
	0x10fc, 0x1248,
	0x124a, 0x124d,
	0x1250, 0x1256,
	0x125a, 0x125d,
	0x1260, 0x1288,
	0x128a, 0x128d,
	0x1290, 0x12b0,
	0x12b2, 0x12b5,
	0x12b8, 0x12be,
	0x12c2, 0x12c5,
	0x12c8, 0x12d6,
	0x12d8, 0x1310,
	0x1312, 0x1315,
	0x1318, 0x135a,
	0x1380, 0x138f,
	0x13a0, 0x13f4,
	0x1401, 0x166c,
	0x166f, 0x167f,
	0x1681, 0x169a,
	0x16a0, 0x16ea,
	0x1700, 0x170c,
	0x170e, 0x1711,
	0x1720, 0x1731,
	0x1740, 0x1751,
	0x1760, 0x176c,
	0x176e, 0x1770,
	0x1780, 0x17b3,
	0x1820, 0x1877,
	0x1880, 0x18a8,
	0x18b0, 0x18f5,
	0x1900, 0x191c,
	0x1950, 0x196d,
	0x1970, 0x1974,
	0x1980, 0x19ab,
	0x19c1, 0x19c7,
	0x1a00, 0x1a16,
	0x1a20, 0x1a54,
	0x1b05, 0x1b33,
	0x1b45, 0x1b4b,
	0x1b83, 0x1ba0,
	0x1bae, 0x1baf,
	0x1bba, 0x1be5,
	0x1c00, 0x1c23,
	0x1c4d, 0x1c4f,
	0x1c5a, 0x1c7d,
	0x1ce9, 0x1cec,
	0x1cee, 0x1cf1,
	0x1cf5, 0x1cf6,
	0x1d00, 0x1dbf,
	0x1e00, 0x1f15,
	0x1f18, 0x1f1d,
	0x1f20, 0x1f45,
	0x1f48, 0x1f4d,
	0x1f50, 0x1f57,
	0x1f5f, 0x1f7d,
	0x1f80, 0x1fb4,
	0x1fb6, 0x1fbc,
	0x1fc2, 0x1fc4,
	0x1fc6, 0x1fcc,
	0x1fd0, 0x1fd3,
	0x1fd6, 0x1fdb,
	0x1fe0, 0x1fec,
	0x1ff2, 0x1ff4,
	0x1ff6, 0x1ffc,
	0x2090, 0x209c,
	0x210a, 0x2113,
	0x2119, 0x211d,
	0x212a, 0x212d,
	0x212f, 0x2139,
	0x213c, 0x213f,
	0x2145, 0x2149,
	0x2183, 0x2184,
	0x2c00, 0x2c2e,
	0x2c30, 0x2c5e,
	0x2c60, 0x2ce4,
	0x2ceb, 0x2cee,
	0x2cf2, 0x2cf3,
	0x2d00, 0x2d25,
	0x2d30, 0x2d67,
	0x2d80, 0x2d96,
	0x2da0, 0x2da6,
	0x2da8, 0x2dae,
	0x2db0, 0x2db6,
	0x2db8, 0x2dbe,
	0x2dc0, 0x2dc6,
	0x2dc8, 0x2dce,
	0x2dd0, 0x2dd6,
	0x2dd8, 0x2dde,
	0x3005, 0x3006,
	0x3031, 0x3035,
	0x303b, 0x303c,
	0x3041, 0x3096,
	0x309d, 0x309f,
	0x30a1, 0x30fa,
	0x30fc, 0x30ff,
	0x3105, 0x312d,
	0x3131, 0x318e,
	0x31a0, 0x31ba,
	0x31f0, 0x31ff,
	0x3400, 0x4db5,
	0x4e00, 0x9fcc,
	0xa000, 0xa48c,
	0xa4d0, 0xa4fd,
	0xa500, 0xa60c,
	0xa610, 0xa61f,
	0xa62a, 0xa62b,
	0xa640, 0xa66e,
	0xa67f, 0xa697,
	0xa6a0, 0xa6e5,
	0xa717, 0xa71f,
	0xa722, 0xa788,
	0xa78b, 0xa78e,
	0xa790, 0xa793,
	0xa7a0, 0xa7aa,
	0xa7f8, 0xa801,
	0xa803, 0xa805,
	0xa807, 0xa80a,
	0xa80c, 0xa822,
	0xa840, 0xa873,
	0xa882, 0xa8b3,
	0xa8f2, 0xa8f7,
	0xa90a, 0xa925,
	0xa930, 0xa946,
	0xa960, 0xa97c,
	0xa984, 0xa9b2,
	0xaa00, 0xaa28,
	0xaa40, 0xaa42,
	0xaa44, 0xaa4b,
	0xaa60, 0xaa76,
	0xaa80, 0xaaaf,
	0xaab5, 0xaab6,
	0xaab9, 0xaabd,
	0xaadb, 0xaadd,
	0xaae0, 0xaaea,
	0xaaf2, 0xaaf4,
	0xab01, 0xab06,
	0xab09, 0xab0e,
	0xab11, 0xab16,
	0xab20, 0xab26,
	0xab28, 0xab2e,
	0xabc0, 0xabe2,
	0xac00, 0xd7a3,
	0xd7b0, 0xd7c6,
	0xd7cb, 0xd7fb,
	0xf900, 0xfa6d,
	0xfa70, 0xfad9,
	0xfb00, 0xfb06,
	0xfb13, 0xfb17,
	0xfb1f, 0xfb28,
	0xfb2a, 0xfb36,
	0xfb38, 0xfb3c,
	0xfb40, 0xfb41,
	0xfb43, 0xfb44,
	0xfb46, 0xfbb1,
	0xfbd3, 0xfd3d,
	0xfd50, 0xfd8f,
	0xfd92, 0xfdc7,
	0xfdf0, 0xfdfb,
	0xfe70, 0xfe74,
	0xfe76, 0xfefc,
	0xff21, 0xff3a,
	0xff41, 0xff5a,
	0xff66, 0xffbe,
	0xffc2, 0xffc7,
	0xffca, 0xffcf,
	0xffd2, 0xffd7,
	0xffda, 0xffdc,
	0x10000, 0x1000b,
	0x1000d, 0x10026,
	0x10028, 0x1003a,
	0x1003c, 0x1003d,
	0x1003f, 0x1004d,
	0x10050, 0x1005d,
	0x10080, 0x100fa,
	0x10280, 0x1029c,
	0x102a0, 0x102d0,
	0x10300, 0x1031e,
	0x10330, 0x10340,
	0x10342, 0x10349,
	0x10380, 0x1039d,
	0x103a0, 0x103c3,
	0x103c8, 0x103cf,
	0x10400, 0x1049d,
	0x10800, 0x10805,
	0x1080a, 0x10835,
	0x10837, 0x10838,
	0x1083f, 0x10855,
	0x10900, 0x10915,
	0x10920, 0x10939,
	0x10980, 0x109b7,
	0x109be, 0x109bf,
	0x10a10, 0x10a13,
	0x10a15, 0x10a17,
	0x10a19, 0x10a33,
	0x10a60, 0x10a7c,
	0x10b00, 0x10b35,
	0x10b40, 0x10b55,
	0x10b60, 0x10b72,
	0x10c00, 0x10c48,
	0x11003, 0x11037,
	0x11083, 0x110af,
	0x110d0, 0x110e8,
	0x11103, 0x11126,
	0x11183, 0x111b2,
	0x111c1, 0x111c4,
	0x11680, 0x116aa,
	0x12000, 0x1236e,
	0x13000, 0x1342e,
	0x16800, 0x16a38,
	0x16f00, 0x16f44,
	0x16f93, 0x16f9f,
	0x1b000, 0x1b001,
	0x1d400, 0x1d454,
	0x1d456, 0x1d49c,
	0x1d49e, 0x1d49f,
	0x1d4a5, 0x1d4a6,
	0x1d4a9, 0x1d4ac,
	0x1d4ae, 0x1d4b9,
	0x1d4bd, 0x1d4c3,
	0x1d4c5, 0x1d505,
	0x1d507, 0x1d50a,
	0x1d50d, 0x1d514,
	0x1d516, 0x1d51c,
	0x1d51e, 0x1d539,
	0x1d53b, 0x1d53e,
	0x1d540, 0x1d544,
	0x1d54a, 0x1d550,
	0x1d552, 0x1d6a5,
	0x1d6a8, 0x1d6c0,
	0x1d6c2, 0x1d6da,
	0x1d6dc, 0x1d6fa,
	0x1d6fc, 0x1d714,
	0x1d716, 0x1d734,
	0x1d736, 0x1d74e,
	0x1d750, 0x1d76e,
	0x1d770, 0x1d788,
	0x1d78a, 0x1d7a8,
	0x1d7aa, 0x1d7c2,
	0x1d7c4, 0x1d7cb,
	0x1ee00, 0x1ee03,
	0x1ee05, 0x1ee1f,
	0x1ee21, 0x1ee22,
	0x1ee29, 0x1ee32,
	0x1ee34, 0x1ee37,
	0x1ee4d, 0x1ee4f,
	0x1ee51, 0x1ee52,
	0x1ee61, 0x1ee62,
	0x1ee67, 0x1ee6a,
	0x1ee6c, 0x1ee72,
	0x1ee74, 0x1ee77,
	0x1ee79, 0x1ee7c,
	0x1ee80, 0x1ee89,
	0x1ee8b, 0x1ee9b,
	0x1eea1, 0x1eea3,
	0x1eea5, 0x1eea9,
	0x1eeab, 0x1eebb,
	0x20000, 0x2a6d6,
	0x2a700, 0x2b734,
	0x2b740, 0x2b81d,
	0x2f800, 0x2fa1d,
};

static Rune __isalphas[] = {
	0x00aa,
	0x00b5,
	0x00ba,
	0x02ec,
	0x02ee,
	0x0386,
	0x038c,
	0x0559,
	0x06d5,
	0x06ff,
	0x0710,
	0x07b1,
	0x07fa,
	0x081a,
	0x0824,
	0x0828,
	0x08a0,
	0x093d,
	0x0950,
	0x09b2,
	0x09bd,
	0x09ce,
	0x0a5e,
	0x0abd,
	0x0ad0,
	0x0b3d,
	0x0b71,
	0x0b83,
	0x0b9c,
	0x0bd0,
	0x0c3d,
	0x0cbd,
	0x0cde,
	0x0d3d,
	0x0d4e,
	0x0dbd,
	0x0e84,
	0x0e8a,
	0x0e8d,
	0x0ea5,
	0x0ea7,
	0x0ebd,
	0x0ec6,
	0x0f00,
	0x103f,
	0x1061,
	0x108e,
	0x10c7,
	0x10cd,
	0x1258,
	0x12c0,
	0x17d7,
	0x17dc,
	0x18aa,
	0x1aa7,
	0x1f59,
	0x1f5b,
	0x1f5d,
	0x1fbe,
	0x2071,
	0x207f,
	0x2102,
	0x2107,
	0x2115,
	0x2124,
	0x2126,
	0x2128,
	0x214e,
	0x2d27,
	0x2d2d,
	0x2d6f,
	0x2e2f,
	0xa8fb,
	0xa9cf,
	0xaa7a,
	0xaab1,
	0xaac0,
	0xaac2,
	0xfb1d,
	0xfb3e,
	0x10808,
	0x1083c,
	0x10a00,
	0x16f50,
	0x1d4a2,
	0x1d4bb,
	0x1d546,
	0x1ee24,
	0x1ee27,
	0x1ee39,
	0x1ee3b,
	0x1ee42,
	0x1ee47,
	0x1ee49,
	0x1ee4b,
	0x1ee54,
	0x1ee57,
	0x1ee59,
	0x1ee5b,
	0x1ee5d,
	0x1ee5f,
	0x1ee64,
	0x1ee7e,
};

int
isalpharune(Rune c)
{
	Rune *p;

	p = _runebsearch(c, __isalphar, nelem(__isalphar)/2, 2);
	if(p && c >= p[0] && c <= p[1])
		return 1;
	p = _runebsearch(c, __isalphas, nelem(__isalphas), 1);
	if(p && c == p[0])
		return 1;
	return 0;
}

static Rune __isupperr[] = {
	0x0041, 0x005a,
	0x00c0, 0x00d6,
	0x00d8, 0x00de,
	0x0178, 0x0179,
	0x0181, 0x0182,
	0x0186, 0x0187,
	0x0189, 0x018b,
	0x018e, 0x0191,
	0x0193, 0x0194,
	0x0196, 0x0198,
	0x019c, 0x019d,
	0x019f, 0x01a0,
	0x01a6, 0x01a7,
	0x01ae, 0x01af,
	0x01b1, 0x01b3,
	0x01b7, 0x01b8,
	0x01f6, 0x01f8,
	0x023a, 0x023b,
	0x023d, 0x023e,
	0x0243, 0x0246,
	0x0388, 0x038a,
	0x038e, 0x038f,
	0x0391, 0x03a1,
	0x03a3, 0x03ab,
	0x03d2, 0x03d4,
	0x03f9, 0x03fa,
	0x03fd, 0x042f,
	0x04c0, 0x04c1,
	0x0531, 0x0556,
	0x10a0, 0x10c5,
	0x1f08, 0x1f0f,
	0x1f18, 0x1f1d,
	0x1f28, 0x1f2f,
	0x1f38, 0x1f3f,
	0x1f48, 0x1f4d,
	0x1f68, 0x1f6f,
	0x1f88, 0x1f8f,
	0x1f98, 0x1f9f,
	0x1fa8, 0x1faf,
	0x1fb8, 0x1fbc,
	0x1fc8, 0x1fcc,
	0x1fd8, 0x1fdb,
	0x1fe8, 0x1fec,
	0x1ff8, 0x1ffc,
	0x210b, 0x210d,
	0x2110, 0x2112,
	0x2119, 0x211d,
	0x212a, 0x212d,
	0x2130, 0x2133,
	0x213e, 0x213f,
	0x2160, 0x216f,
	0x24b6, 0x24cf,
	0x2c00, 0x2c2e,
	0x2c62, 0x2c64,
	0x2c6d, 0x2c70,
	0x2c7e, 0x2c80,
	0xa77d, 0xa77e,
	0xff21, 0xff3a,
	0x10400, 0x10427,
	0x1d400, 0x1d419,
	0x1d434, 0x1d44d,
	0x1d468, 0x1d481,
	0x1d49e, 0x1d49f,
	0x1d4a5, 0x1d4a6,
	0x1d4a9, 0x1d4ac,
	0x1d4ae, 0x1d4b5,
	0x1d4d0, 0x1d4e9,
	0x1d504, 0x1d505,
	0x1d507, 0x1d50a,
	0x1d50d, 0x1d514,
	0x1d516, 0x1d51c,
	0x1d538, 0x1d539,
	0x1d53b, 0x1d53e,
	0x1d540, 0x1d544,
	0x1d54a, 0x1d550,
	0x1d56c, 0x1d585,
	0x1d5a0, 0x1d5b9,
	0x1d5d4, 0x1d5ed,
	0x1d608, 0x1d621,
	0x1d63c, 0x1d655,
	0x1d670, 0x1d689,
	0x1d6a8, 0x1d6c0,
	0x1d6e2, 0x1d6fa,
	0x1d71c, 0x1d734,
	0x1d756, 0x1d76e,
	0x1d790, 0x1d7a8,
};

static Rune __isupperp[] = {
	0x0100, 0x0136,
	0x0139, 0x0147,
	0x014a, 0x0176,
	0x017b, 0x017d,
	0x01a2, 0x01a4,
	0x01cd, 0x01db,
	0x01de, 0x01ee,
	0x01fa, 0x0232,
	0x0248, 0x024e,
	0x0370, 0x0372,
	0x03d8, 0x03ee,
	0x0460, 0x0480,
	0x048a, 0x04be,
	0x04c3, 0x04cd,
	0x04d0, 0x0526,
	0x1e00, 0x1e94,
	0x1e9e, 0x1efe,
	0x1f59, 0x1f5f,
	0x2124, 0x2128,
	0x2c67, 0x2c6b,
	0x2c82, 0x2ce2,
	0x2ceb, 0x2ced,
	0xa640, 0xa66c,
	0xa680, 0xa696,
	0xa722, 0xa72e,
	0xa732, 0xa76e,
	0xa779, 0xa77b,
	0xa780, 0xa786,
	0xa78b, 0xa78d,
	0xa790, 0xa792,
	0xa7a0, 0xa7aa,
};

static Rune __isuppers[] = {
	0x0184,
	0x01a9,
	0x01ac,
	0x01b5,
	0x01bc,
	0x01c4,
	0x01c7,
	0x01ca,
	0x01f1,
	0x01f4,
	0x0241,
	0x0376,
	0x0386,
	0x038c,
	0x03cf,
	0x03f4,
	0x03f7,
	0x10c7,
	0x10cd,
	0x2102,
	0x2107,
	0x2115,
	0x2145,
	0x2183,
	0x2c60,
	0x2c72,
	0x2c75,
	0x2cf2,
	0x1d49c,
	0x1d4a2,
	0x1d546,
	0x1d7ca,
};

int
isupperrune(Rune c)
{
	Rune *p;

	p = _runebsearch(c, __isupperr, nelem(__isupperr)/2, 2);
	if(p && c >= p[0] && c <= p[1])
		return 1;
	p = _runebsearch(c, __isupperp, nelem(__isupperp)/2, 2);
	if(p && c >= p[0] && c <= p[1] && !((c - p[0]) & 1))
		return 1;
	p = _runebsearch(c, __isuppers, nelem(__isuppers), 1);
	if(p && c == p[0])
		return 1;
	return 0;
}

static Rune __islowerr[] = {
	0x0061, 0x007a,
	0x00df, 0x00f6,
	0x00f8, 0x00ff,
	0x0137, 0x0138,
	0x0148, 0x0149,
	0x017e, 0x0180,
	0x018c, 0x018d,
	0x0199, 0x019b,
	0x01aa, 0x01ab,
	0x01b9, 0x01ba,
	0x01bd, 0x01bf,
	0x01dc, 0x01dd,
	0x01ef, 0x01f0,
	0x0233, 0x0239,
	0x023f, 0x0240,
	0x024f, 0x0293,
	0x0295, 0x02af,
	0x037b, 0x037d,
	0x03ac, 0x03ce,
	0x03d0, 0x03d1,
	0x03d5, 0x03d7,
	0x03ef, 0x03f3,
	0x03fb, 0x03fc,
	0x0430, 0x045f,
	0x04ce, 0x04cf,
	0x0561, 0x0587,
	0x1d00, 0x1d2b,
	0x1d6b, 0x1d77,
	0x1d79, 0x1d9a,
	0x1e95, 0x1e9d,
	0x1eff, 0x1f07,
	0x1f10, 0x1f15,
	0x1f20, 0x1f27,
	0x1f30, 0x1f37,
	0x1f40, 0x1f45,
	0x1f50, 0x1f57,
	0x1f60, 0x1f67,
	0x1f70, 0x1f7d,
	0x1f80, 0x1f87,
	0x1f90, 0x1f97,
	0x1fa0, 0x1fa7,
	0x1fb0, 0x1fb4,
	0x1fb6, 0x1fb7,
	0x1fc2, 0x1fc4,
	0x1fc6, 0x1fc7,
	0x1fd0, 0x1fd3,
	0x1fd6, 0x1fd7,
	0x1fe0, 0x1fe7,
	0x1ff2, 0x1ff4,
	0x1ff6, 0x1ff7,
	0x210e, 0x210f,
	0x213c, 0x213d,
	0x2146, 0x2149,
	0x2170, 0x217f,
	0x24d0, 0x24e9,
	0x2c30, 0x2c5e,
	0x2c65, 0x2c66,
	0x2c73, 0x2c74,
	0x2c76, 0x2c7b,
	0x2ce3, 0x2ce4,
	0x2d00, 0x2d25,
	0xa72f, 0xa731,
	0xa771, 0xa778,
	0xfb00, 0xfb06,
	0xfb13, 0xfb17,
	0xff41, 0xff5a,
	0x10428, 0x1044f,
	0x1d41a, 0x1d433,
	0x1d44e, 0x1d454,
	0x1d456, 0x1d467,
	0x1d482, 0x1d49b,
	0x1d4b6, 0x1d4b9,
	0x1d4bd, 0x1d4c3,
	0x1d4c5, 0x1d4cf,
	0x1d4ea, 0x1d503,
	0x1d51e, 0x1d537,
	0x1d552, 0x1d56b,
	0x1d586, 0x1d59f,
	0x1d5ba, 0x1d5d3,
	0x1d5ee, 0x1d607,
	0x1d622, 0x1d63b,
	0x1d656, 0x1d66f,
	0x1d68a, 0x1d6a5,
	0x1d6c2, 0x1d6da,
	0x1d6dc, 0x1d6e1,
	0x1d6fc, 0x1d714,
	0x1d716, 0x1d71b,
	0x1d736, 0x1d74e,
	0x1d750, 0x1d755,
	0x1d770, 0x1d788,
	0x1d78a, 0x1d78f,
	0x1d7aa, 0x1d7c2,
	0x1d7c4, 0x1d7c9,
};

static Rune __islowerp[] = {
	0x0101, 0x0135,
	0x013a, 0x0146,
	0x014b, 0x0177,
	0x017a, 0x017c,
	0x0183, 0x0185,
	0x01a1, 0x01a5,
	0x01b4, 0x01b6,
	0x01cc, 0x01da,
	0x01df, 0x01ed,
	0x01f3, 0x01f5,
	0x01f9, 0x0231,
	0x0247, 0x024d,
	0x0371, 0x0373,
	0x03d9, 0x03ed,
	0x0461, 0x0481,
	0x048b, 0x04bf,
	0x04c2, 0x04cc,
	0x04d1, 0x0527,
	0x1e01, 0x1e93,
	0x1e9f, 0x1efd,
	0x2c68, 0x2c6c,
	0x2c81, 0x2ce1,
	0x2cec, 0x2cee,
	0xa641, 0xa66d,
	0xa681, 0xa697,
	0xa723, 0xa72d,
	0xa733, 0xa76f,
	0xa77a, 0xa77c,
	0xa77f, 0xa787,
	0xa78c, 0xa78e,
	0xa791, 0xa793,
	0xa7a1, 0xa7a9,
};

static Rune __islowers[] = {
	0x00b5,
	0x0188,
	0x0192,
	0x0195,
	0x019e,
	0x01a8,
	0x01ad,
	0x01b0,
	0x01c6,
	0x01c9,
	0x023c,
	0x0242,
	0x0377,
	0x0390,
	0x03f5,
	0x03f8,
	0x1fbe,
	0x210a,
	0x2113,
	0x212f,
	0x2134,
	0x2139,
	0x214e,
	0x2184,
	0x2c61,
	0x2c71,
	0x2cf3,
	0x2d27,
	0x2d2d,
	0xa7fa,
	0x1d4bb,
	0x1d7cb,
};

int
islowerrune(Rune c)
{
	Rune *p;

	p = _runebsearch(c, __islowerr, nelem(__islowerr)/2, 2);
	if(p && c >= p[0] && c <= p[1])
		return 1;
	p = _runebsearch(c, __islowerp, nelem(__islowerp)/2, 2);
	if(p && c >= p[0] && c <= p[1] && !((c - p[0]) & 1))
		return 1;
	p = _runebsearch(c, __islowers, nelem(__islowers), 1);
	if(p && c == p[0])
		return 1;
	return 0;
}

static Rune __istitler[] = {
	0x0041, 0x005a,
	0x00c0, 0x00d6,
	0x00d8, 0x00de,
	0x0178, 0x0179,
	0x0181, 0x0182,
	0x0186, 0x0187,
	0x0189, 0x018b,
	0x018e, 0x0191,
	0x0193, 0x0194,
	0x0196, 0x0198,
	0x019c, 0x019d,
	0x019f, 0x01a0,
	0x01a6, 0x01a7,
	0x01ae, 0x01af,
	0x01b1, 0x01b3,
	0x01b7, 0x01b8,
	0x01f6, 0x01f8,
	0x023a, 0x023b,
	0x023d, 0x023e,
	0x0243, 0x0246,
	0x0388, 0x038a,
	0x038e, 0x038f,
	0x0391, 0x03a1,
	0x03a3, 0x03ab,
	0x03f9, 0x03fa,
	0x03fd, 0x042f,
	0x04c0, 0x04c1,
	0x0531, 0x0556,
	0x10a0, 0x10c5,
	0x1f08, 0x1f0f,
	0x1f18, 0x1f1d,
	0x1f28, 0x1f2f,
	0x1f38, 0x1f3f,
	0x1f48, 0x1f4d,
	0x1f68, 0x1f6f,
	0x1f88, 0x1f8f,
	0x1f98, 0x1f9f,
	0x1fa8, 0x1faf,
	0x1fb8, 0x1fbc,
	0x1fc8, 0x1fcc,
	0x1fd8, 0x1fdb,
	0x1fe8, 0x1fec,
	0x1ff8, 0x1ffc,
	0x2160, 0x216f,
	0x24b6, 0x24cf,
	0x2c00, 0x2c2e,
	0x2c62, 0x2c64,
	0x2c6d, 0x2c70,
	0x2c7e, 0x2c80,
	0xa77d, 0xa77e,
	0xff21, 0xff3a,
	0x10400, 0x10427,
};

static Rune __istitlep[] = {
	0x0100, 0x012e,
	0x0132, 0x0136,
	0x0139, 0x0147,
	0x014a, 0x0176,
	0x017b, 0x017d,
	0x01a2, 0x01a4,
	0x01cb, 0x01db,
	0x01de, 0x01ee,
	0x01f2, 0x01f4,
	0x01fa, 0x0232,
	0x0248, 0x024e,
	0x0370, 0x0372,
	0x03d8, 0x03ee,
	0x0460, 0x0480,
	0x048a, 0x04be,
	0x04c3, 0x04cd,
	0x04d0, 0x0526,
	0x1e00, 0x1e94,
	0x1ea0, 0x1efe,
	0x1f59, 0x1f5f,
	0x2c67, 0x2c6b,
	0x2c82, 0x2ce2,
	0x2ceb, 0x2ced,
	0xa640, 0xa66c,
	0xa680, 0xa696,
	0xa722, 0xa72e,
	0xa732, 0xa76e,
	0xa779, 0xa77b,
	0xa780, 0xa786,
	0xa78b, 0xa78d,
	0xa790, 0xa792,
	0xa7a0, 0xa7aa,
};

static Rune __istitles[] = {
	0x0184,
	0x01a9,
	0x01ac,
	0x01b5,
	0x01bc,
	0x01c5,
	0x01c8,
	0x0241,
	0x0376,
	0x0386,
	0x038c,
	0x03cf,
	0x03f7,
	0x10c7,
	0x10cd,
	0x2132,
	0x2183,
	0x2c60,
	0x2c72,
	0x2c75,
	0x2cf2,
};

int
istitlerune(Rune c)
{
	Rune *p;

	p = _runebsearch(c, __istitler, nelem(__istitler)/2, 2);
	if(p && c >= p[0] && c <= p[1])
		return 1;
	p = _runebsearch(c, __istitlep, nelem(__istitlep)/2, 2);
	if(p && c >= p[0] && c <= p[1] && !((c - p[0]) & 1))
		return 1;
	p = _runebsearch(c, __istitles, nelem(__istitles), 1);
	if(p && c == p[0])
		return 1;
	return 0;
}

static Rune __toupperr[] = {
	0x0061, 0x007a, 1048544,
	0x00e0, 0x00f6, 1048544,
	0x00f8, 0x00fe, 1048544,
	0x023f, 0x0240, 1059391,
	0x0256, 0x0257, 1048371,
	0x028a, 0x028b, 1048359,
	0x037b, 0x037d, 1048706,
	0x03ad, 0x03af, 1048539,
	0x03b1, 0x03c1, 1048544,
	0x03c3, 0x03cb, 1048544,
	0x03cd, 0x03ce, 1048513,
	0x0430, 0x044f, 1048544,
	0x0450, 0x045f, 1048496,
	0x0561, 0x0586, 1048528,
	0x1f00, 0x1f07, 1048584,
	0x1f10, 0x1f15, 1048584,
	0x1f20, 0x1f27, 1048584,
	0x1f30, 0x1f37, 1048584,
	0x1f40, 0x1f45, 1048584,
	0x1f60, 0x1f67, 1048584,
	0x1f70, 0x1f71, 1048650,
	0x1f72, 0x1f75, 1048662,
	0x1f76, 0x1f77, 1048676,
	0x1f78, 0x1f79, 1048704,
	0x1f7a, 0x1f7b, 1048688,
	0x1f7c, 0x1f7d, 1048702,
	0x1f80, 0x1f87, 1048584,
	0x1f90, 0x1f97, 1048584,
	0x1fa0, 0x1fa7, 1048584,
	0x1fb0, 0x1fb1, 1048584,
	0x1fd0, 0x1fd1, 1048584,
	0x1fe0, 0x1fe1, 1048584,
	0x2170, 0x217f, 1048560,
	0x24d0, 0x24e9, 1048550,
	0x2c30, 0x2c5e, 1048528,
	0x2d00, 0x2d25, 1041312,
	0xff41, 0xff5a, 1048544,
	0x10428, 0x1044f, 1048536,
};

static Rune __toupperp[] = {
	0x0101, 0x012f, 1048575,
	0x0133, 0x0137, 1048575,
	0x013a, 0x0148, 1048575,
	0x014b, 0x0177, 1048575,
	0x017a, 0x017e, 1048575,
	0x0183, 0x0185, 1048575,
	0x01a1, 0x01a5, 1048575,
	0x01b4, 0x01b6, 1048575,
	0x01ce, 0x01dc, 1048575,
	0x01df, 0x01ef, 1048575,
	0x01f9, 0x021f, 1048575,
	0x0223, 0x0233, 1048575,
	0x0247, 0x024f, 1048575,
	0x0371, 0x0373, 1048575,
	0x03d9, 0x03ef, 1048575,
	0x0461, 0x0481, 1048575,
	0x048b, 0x04bf, 1048575,
	0x04c2, 0x04ce, 1048575,
	0x04d1, 0x0527, 1048575,
	0x1e01, 0x1e95, 1048575,
	0x1ea1, 0x1eff, 1048575,
	0x1f51, 0x1f57, 1048584,
	0x2c68, 0x2c6c, 1048575,
	0x2c81, 0x2ce3, 1048575,
	0x2cec, 0x2cee, 1048575,
	0xa641, 0xa66d, 1048575,
	0xa681, 0xa697, 1048575,
	0xa723, 0xa72f, 1048575,
	0xa733, 0xa76f, 1048575,
	0xa77a, 0xa77c, 1048575,
	0xa77f, 0xa787, 1048575,
	0xa791, 0xa793, 1048575,
	0xa7a1, 0xa7a9, 1048575,
};

static Rune __touppers[] = {
	0x00b5, 1049319,
	0x00ff, 1048697,
	0x0131, 1048344,
	0x017f, 1048276,
	0x0180, 1048771,
	0x0188, 1048575,
	0x018c, 1048575,
	0x0192, 1048575,
	0x0195, 1048673,
	0x0199, 1048575,
	0x019a, 1048739,
	0x019e, 1048706,
	0x01a8, 1048575,
	0x01ad, 1048575,
	0x01b0, 1048575,
	0x01b9, 1048575,
	0x01bd, 1048575,
	0x01bf, 1048632,
	0x01c5, 1048575,
	0x01c6, 1048574,
	0x01c8, 1048575,
	0x01c9, 1048574,
	0x01cb, 1048575,
	0x01cc, 1048574,
	0x01dd, 1048497,
	0x01f2, 1048575,
	0x01f3, 1048574,
	0x01f5, 1048575,
	0x023c, 1048575,
	0x0242, 1048575,
	0x0250, 1059359,
	0x0251, 1059356,
	0x0252, 1059358,
	0x0253, 1048366,
	0x0254, 1048370,
	0x0259, 1048374,
	0x025b, 1048373,
	0x0260, 1048371,
	0x0263, 1048369,
	0x0265, 1090856,
	0x0266, 1090884,
	0x0268, 1048367,
	0x0269, 1048365,
	0x026b, 1059319,
	0x026f, 1048365,
	0x0271, 1059325,
	0x0272, 1048363,
	0x0275, 1048362,
	0x027d, 1059303,
	0x0280, 1048358,
	0x0283, 1048358,
	0x0288, 1048358,
	0x0289, 1048507,
	0x028c, 1048505,
	0x0292, 1048357,
	0x0345, 1048660,
	0x0377, 1048575,
	0x03ac, 1048538,
	0x03c2, 1048545,
	0x03cc, 1048512,
	0x03d0, 1048514,
	0x03d1, 1048519,
	0x03d5, 1048529,
	0x03d6, 1048522,
	0x03d7, 1048568,
	0x03f0, 1048490,
	0x03f1, 1048496,
	0x03f2, 1048583,
	0x03f5, 1048480,
	0x03f8, 1048575,
	0x03fb, 1048575,
	0x04cf, 1048561,
	0x1d79, 1083908,
	0x1d7d, 1052390,
	0x1e9b, 1048517,
	0x1fb3, 1048585,
	0x1fbe, 1041371,
	0x1fc3, 1048585,
	0x1fe5, 1048583,
	0x1ff3, 1048585,
	0x214e, 1048548,
	0x2184, 1048575,
	0x2c61, 1048575,
	0x2c65, 1037781,
	0x2c66, 1037784,
	0x2c73, 1048575,
	0x2c76, 1048575,
	0x2cf3, 1048575,
	0x2d27, 1041312,
	0x2d2d, 1041312,
	0xa78c, 1048575,
};

Rune
toupperrune(Rune c)
{
	Rune *p;

	p = _runebsearch(c, __toupperr, nelem(__toupperr)/3, 3);
	if(p && c >= p[0] && c <= p[1])
		return c + p[2] - 1048576;
	p = _runebsearch(c, __toupperp, nelem(__toupperp)/3, 3);
	if(p && c >= p[0] && c <= p[1] && !((c - p[0]) & 1))
		return c + p[2] - 1048576;
	p = _runebsearch(c, __touppers, nelem(__touppers)/2, 2);
	if(p && c == p[0])
		return c + p[1] - 1048576;
	return c;
}

static Rune __tolowerr[] = {
	0x0041, 0x005a, 1048608,
	0x00c0, 0x00d6, 1048608,
	0x00d8, 0x00de, 1048608,
	0x0189, 0x018a, 1048781,
	0x01b1, 0x01b2, 1048793,
	0x0388, 0x038a, 1048613,
	0x038e, 0x038f, 1048639,
	0x0391, 0x03a1, 1048608,
	0x03a3, 0x03ab, 1048608,
	0x03fd, 0x03ff, 1048446,
	0x0400, 0x040f, 1048656,
	0x0410, 0x042f, 1048608,
	0x0531, 0x0556, 1048624,
	0x10a0, 0x10c5, 1055840,
	0x1f08, 0x1f0f, 1048568,
	0x1f18, 0x1f1d, 1048568,
	0x1f28, 0x1f2f, 1048568,
	0x1f38, 0x1f3f, 1048568,
	0x1f48, 0x1f4d, 1048568,
	0x1f68, 0x1f6f, 1048568,
	0x1f88, 0x1f8f, 1048568,
	0x1f98, 0x1f9f, 1048568,
	0x1fa8, 0x1faf, 1048568,
	0x1fb8, 0x1fb9, 1048568,
	0x1fba, 0x1fbb, 1048502,
	0x1fc8, 0x1fcb, 1048490,
	0x1fd8, 0x1fd9, 1048568,
	0x1fda, 0x1fdb, 1048476,
	0x1fe8, 0x1fe9, 1048568,
	0x1fea, 0x1feb, 1048464,
	0x1ff8, 0x1ff9, 1048448,
	0x1ffa, 0x1ffb, 1048450,
	0x2160, 0x216f, 1048592,
	0x24b6, 0x24cf, 1048602,
	0x2c00, 0x2c2e, 1048624,
	0x2c7e, 0x2c7f, 1037761,
	0xff21, 0xff3a, 1048608,
	0x10400, 0x10427, 1048616,
};

static Rune __tolowerp[] = {
	0x0100, 0x012e, 1048577,
	0x0132, 0x0136, 1048577,
	0x0139, 0x0147, 1048577,
	0x014a, 0x0176, 1048577,
	0x017b, 0x017d, 1048577,
	0x01a2, 0x01a4, 1048577,
	0x01b3, 0x01b5, 1048577,
	0x01cd, 0x01db, 1048577,
	0x01de, 0x01ee, 1048577,
	0x01f8, 0x021e, 1048577,
	0x0222, 0x0232, 1048577,
	0x0248, 0x024e, 1048577,
	0x0370, 0x0372, 1048577,
	0x03d8, 0x03ee, 1048577,
	0x0460, 0x0480, 1048577,
	0x048a, 0x04be, 1048577,
	0x04c3, 0x04cd, 1048577,
	0x04d0, 0x0526, 1048577,
	0x1e00, 0x1e94, 1048577,
	0x1ea0, 0x1efe, 1048577,
	0x1f59, 0x1f5f, 1048568,
	0x2c67, 0x2c6b, 1048577,
	0x2c80, 0x2ce2, 1048577,
	0x2ceb, 0x2ced, 1048577,
	0xa640, 0xa66c, 1048577,
	0xa680, 0xa696, 1048577,
	0xa722, 0xa72e, 1048577,
	0xa732, 0xa76e, 1048577,
	0xa779, 0xa77b, 1048577,
	0xa780, 0xa786, 1048577,
	0xa790, 0xa792, 1048577,
	0xa7a0, 0xa7a8, 1048577,
};

static Rune __tolowers[] = {
	0x0130, 1048377,
	0x0178, 1048455,
	0x0179, 1048577,
	0x0181, 1048786,
	0x0182, 1048577,
	0x0184, 1048577,
	0x0186, 1048782,
	0x0187, 1048577,
	0x018b, 1048577,
	0x018e, 1048655,
	0x018f, 1048778,
	0x0190, 1048779,
	0x0191, 1048577,
	0x0193, 1048781,
	0x0194, 1048783,
	0x0196, 1048787,
	0x0197, 1048785,
	0x0198, 1048577,
	0x019c, 1048787,
	0x019d, 1048789,
	0x019f, 1048790,
	0x01a0, 1048577,
	0x01a6, 1048794,
	0x01a7, 1048577,
	0x01a9, 1048794,
	0x01ac, 1048577,
	0x01ae, 1048794,
	0x01af, 1048577,
	0x01b7, 1048795,
	0x01b8, 1048577,
	0x01bc, 1048577,
	0x01c4, 1048578,
	0x01c5, 1048577,
	0x01c7, 1048578,
	0x01c8, 1048577,
	0x01ca, 1048578,
	0x01cb, 1048577,
	0x01f1, 1048578,
	0x01f2, 1048577,
	0x01f4, 1048577,
	0x01f6, 1048479,
	0x01f7, 1048520,
	0x0220, 1048446,
	0x023a, 1059371,
	0x023b, 1048577,
	0x023d, 1048413,
	0x023e, 1059368,
	0x0241, 1048577,
	0x0243, 1048381,
	0x0244, 1048645,
	0x0245, 1048647,
	0x0246, 1048577,
	0x0376, 1048577,
	0x0386, 1048614,
	0x038c, 1048640,
	0x03cf, 1048584,
	0x03f4, 1048516,
	0x03f7, 1048577,
	0x03f9, 1048569,
	0x03fa, 1048577,
	0x04c0, 1048591,
	0x04c1, 1048577,
	0x10c7, 1055840,
	0x10cd, 1055840,
	0x1e9e, 1040961,
	0x1fbc, 1048567,
	0x1fcc, 1048567,
	0x1fec, 1048569,
	0x1ffc, 1048567,
	0x2126, 1041059,
	0x212a, 1040193,
	0x212b, 1040314,
	0x2132, 1048604,
	0x2183, 1048577,
	0x2c60, 1048577,
	0x2c62, 1037833,
	0x2c63, 1044762,
	0x2c64, 1037849,
	0x2c6d, 1037796,
	0x2c6e, 1037827,
	0x2c6f, 1037793,
	0x2c70, 1037794,
	0x2c72, 1048577,
	0x2c75, 1048577,
	0x2cf2, 1048577,
	0xa77d, 1013244,
	0xa77e, 1048577,
	0xa78b, 1048577,
	0xa78d, 1006296,
	0xa7aa, 1006268,
};

Rune
tolowerrune(Rune c)
{
	Rune *p;

	p = _runebsearch(c, __tolowerr, nelem(__tolowerr)/3, 3);
	if(p && c >= p[0] && c <= p[1])
		return c + p[2] - 1048576;
	p = _runebsearch(c, __tolowerp, nelem(__tolowerp)/3, 3);
	if(p && c >= p[0] && c <= p[1] && !((c - p[0]) & 1))
		return c + p[2] - 1048576;
	p = _runebsearch(c, __tolowers, nelem(__tolowers)/2, 2);
	if(p && c == p[0])
		return c + p[1] - 1048576;
	return c;
}

static Rune __totitler[] = {
	0x0061, 0x007a, 1048544,
	0x00e0, 0x00f6, 1048544,
	0x00f8, 0x00fe, 1048544,
	0x023f, 0x0240, 1059391,
	0x0256, 0x0257, 1048371,
	0x028a, 0x028b, 1048359,
	0x037b, 0x037d, 1048706,
	0x03ad, 0x03af, 1048539,
	0x03b1, 0x03c1, 1048544,
	0x03c3, 0x03cb, 1048544,
	0x03cd, 0x03ce, 1048513,
	0x0430, 0x044f, 1048544,
	0x0450, 0x045f, 1048496,
	0x0561, 0x0586, 1048528,
	0x1f00, 0x1f07, 1048584,
	0x1f10, 0x1f15, 1048584,
	0x1f20, 0x1f27, 1048584,
	0x1f30, 0x1f37, 1048584,
	0x1f40, 0x1f45, 1048584,
	0x1f60, 0x1f67, 1048584,
	0x1f70, 0x1f71, 1048650,
	0x1f72, 0x1f75, 1048662,
	0x1f76, 0x1f77, 1048676,
	0x1f78, 0x1f79, 1048704,
	0x1f7a, 0x1f7b, 1048688,
	0x1f7c, 0x1f7d, 1048702,
	0x1f80, 0x1f87, 1048584,
	0x1f90, 0x1f97, 1048584,
	0x1fa0, 0x1fa7, 1048584,
	0x1fb0, 0x1fb1, 1048584,
	0x1fd0, 0x1fd1, 1048584,
	0x1fe0, 0x1fe1, 1048584,
	0x2170, 0x217f, 1048560,
	0x24d0, 0x24e9, 1048550,
	0x2c30, 0x2c5e, 1048528,
	0x2d00, 0x2d25, 1041312,
	0xff41, 0xff5a, 1048544,
	0x10428, 0x1044f, 1048536,
};

static Rune __totitlep[] = {
	0x0101, 0x012f, 1048575,
	0x0133, 0x0137, 1048575,
	0x013a, 0x0148, 1048575,
	0x014b, 0x0177, 1048575,
	0x017a, 0x017e, 1048575,
	0x0183, 0x0185, 1048575,
	0x01a1, 0x01a5, 1048575,
	0x01b4, 0x01b6, 1048575,
	0x01cc, 0x01dc, 1048575,
	0x01df, 0x01ef, 1048575,
	0x01f3, 0x01f5, 1048575,
	0x01f9, 0x021f, 1048575,
	0x0223, 0x0233, 1048575,
	0x0247, 0x024f, 1048575,
	0x0371, 0x0373, 1048575,
	0x03d9, 0x03ef, 1048575,
	0x0461, 0x0481, 1048575,
	0x048b, 0x04bf, 1048575,
	0x04c2, 0x04ce, 1048575,
	0x04d1, 0x0527, 1048575,
	0x1e01, 0x1e95, 1048575,
	0x1ea1, 0x1eff, 1048575,
	0x1f51, 0x1f57, 1048584,
	0x2c68, 0x2c6c, 1048575,
	0x2c81, 0x2ce3, 1048575,
	0x2cec, 0x2cee, 1048575,
	0xa641, 0xa66d, 1048575,
	0xa681, 0xa697, 1048575,
	0xa723, 0xa72f, 1048575,
	0xa733, 0xa76f, 1048575,
	0xa77a, 0xa77c, 1048575,
	0xa77f, 0xa787, 1048575,
	0xa791, 0xa793, 1048575,
	0xa7a1, 0xa7a9, 1048575,
};

static Rune __totitles[] = {
	0x00b5, 1049319,
	0x00ff, 1048697,
	0x0131, 1048344,
	0x017f, 1048276,
	0x0180, 1048771,
	0x0188, 1048575,
	0x018c, 1048575,
	0x0192, 1048575,
	0x0195, 1048673,
	0x0199, 1048575,
	0x019a, 1048739,
	0x019e, 1048706,
	0x01a8, 1048575,
	0x01ad, 1048575,
	0x01b0, 1048575,
	0x01b9, 1048575,
	0x01bd, 1048575,
	0x01bf, 1048632,
	0x01c4, 1048577,
	0x01c6, 1048575,
	0x01c7, 1048577,
	0x01c9, 1048575,
	0x01ca, 1048577,
	0x01dd, 1048497,
	0x01f1, 1048577,
	0x023c, 1048575,
	0x0242, 1048575,
	0x0250, 1059359,
	0x0251, 1059356,
	0x0252, 1059358,
	0x0253, 1048366,
	0x0254, 1048370,
	0x0259, 1048374,
	0x025b, 1048373,
	0x0260, 1048371,
	0x0263, 1048369,
	0x0265, 1090856,
	0x0266, 1090884,
	0x0268, 1048367,
	0x0269, 1048365,
	0x026b, 1059319,
	0x026f, 1048365,
	0x0271, 1059325,
	0x0272, 1048363,
	0x0275, 1048362,
	0x027d, 1059303,
	0x0280, 1048358,
	0x0283, 1048358,
	0x0288, 1048358,
	0x0289, 1048507,
	0x028c, 1048505,
	0x0292, 1048357,
	0x0345, 1048660,
	0x0377, 1048575,
	0x03ac, 1048538,
	0x03c2, 1048545,
	0x03cc, 1048512,
	0x03d0, 1048514,
	0x03d1, 1048519,
	0x03d5, 1048529,
	0x03d6, 1048522,
	0x03d7, 1048568,
	0x03f0, 1048490,
	0x03f1, 1048496,
	0x03f2, 1048583,
	0x03f5, 1048480,
	0x03f8, 1048575,
	0x03fb, 1048575,
	0x04cf, 1048561,
	0x1d79, 1083908,
	0x1d7d, 1052390,
	0x1e9b, 1048517,
	0x1fb3, 1048585,
	0x1fbe, 1041371,
	0x1fc3, 1048585,
	0x1fe5, 1048583,
	0x1ff3, 1048585,
	0x214e, 1048548,
	0x2184, 1048575,
	0x2c61, 1048575,
	0x2c65, 1037781,
	0x2c66, 1037784,
	0x2c73, 1048575,
	0x2c76, 1048575,
	0x2cf3, 1048575,
	0x2d27, 1041312,
	0x2d2d, 1041312,
	0xa78c, 1048575,
};

Rune
totitlerune(Rune c)
{
	Rune *p;

	p = _runebsearch(c, __totitler, nelem(__totitler)/3, 3);
	if(p && c >= p[0] && c <= p[1])
		return c + p[2] - 1048576;
	p = _runebsearch(c, __totitlep, nelem(__totitlep)/3, 3);
	if(p && c >= p[0] && c <= p[1] && !((c - p[0]) & 1))
		return c + p[2] - 1048576;
	p = _runebsearch(c, __totitles, nelem(__totitles)/2, 2);
	if(p && c == p[0])
		return c + p[1] - 1048576;
	return c;
}


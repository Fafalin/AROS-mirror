#ifdef USE_TRUETYPEFONTS_COLORS
const ULONG TrueTypeFonts_colors[48] =
{
	0xffffffff,0xaaaaaaaa,0x99999999,
	0x93939393,0x93939393,0x93939393,
	0x66666666,0x66666666,0x66666666,
	0x77777777,0x77777777,0x77777777,
	0x00000000,0x66666666,0x99999999,
	0x33333333,0xcccccccc,0xcccccccc,
	0x44444444,0x88888888,0x88888888,
	0xffffffff,0x4e4e4e4e,0x14141414,
	0x00000000,0xffffffff,0x00000000,
	0x01010101,0xb3b3b3b3,0x00000000,
	0x00000000,0x00000000,0x00000000,
	0x00000000,0x55555555,0x77777777,
	0xbebebebe,0x00000000,0x00000000,
	0x00000000,0xcccccccc,0xcccccccc,
	0x00000000,0x66666666,0xffffffff,
	0x00000000,0x00000000,0xaaaaaaaa,
};
#endif

#define TRUETYPEFONTS_WIDTH        28
#define TRUETYPEFONTS_HEIGHT       17
#define TRUETYPEFONTS_DEPTH         4
#define TRUETYPEFONTS_COMPRESSION   0
#define TRUETYPEFONTS_MASKING       2

#ifdef USE_TRUETYPEFONTS_HEADER
const struct BitMapHeader TrueTypeFonts_header =
{ 28,17,0,0,4,2,0,0,0,44,44,320,256 };
#endif

#ifdef USE_TRUETYPEFONTS_BODY
const UBYTE TrueTypeFonts_body[272] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x10,0x63,0x04,0x40,0x1f,0xff,0x07,0xc0,0x00,0x00,0x00,0x00,0x0f,
0x9c,0x03,0x80,0x20,0x9c,0xd2,0x80,0x30,0x7f,0xdd,0xc0,0x00,0x18,0x03,0x00,
0x1f,0xe6,0x0c,0xc0,0x0c,0x5c,0x29,0x80,0x23,0x3f,0xf5,0xc0,0x00,0x18,0x0e,
0x00,0x3f,0xe7,0x91,0xc0,0x0c,0x5f,0x12,0x00,0x23,0x3f,0x6b,0xc0,0x00,0x1f,
0x9c,0x00,0x3f,0xe0,0xe3,0x80,0x03,0x58,0x14,0x40,0x20,0x38,0x27,0xc0,0x00,
0x1f,0xd8,0x00,0x3f,0xe7,0xe6,0x00,0x00,0x58,0x04,0x80,0x20,0x3b,0x37,0x80,
0x00,0x1c,0xd8,0x00,0x3f,0xe7,0xe6,0x00,0x04,0x58,0x14,0x80,0x23,0x3b,0x27,
0x80,0x00,0x1c,0xd8,0x00,0x3f,0xe7,0xe6,0x00,0x04,0x58,0x04,0x80,0x23,0x3b,
0x37,0x80,0x00,0x1c,0xd8,0x00,0x3f,0xe7,0xe6,0x00,0x04,0x58,0x04,0x80,0x23,
0x3b,0x27,0x80,0x00,0x1c,0xd8,0x00,0x3f,0xe7,0xe6,0x00,0x04,0x58,0x12,0x40,
0x23,0x3b,0x33,0xc0,0x00,0x1c,0xcc,0x00,0x3f,0xe7,0xf3,0x80,0x04,0x5c,0x08,
0x80,0x23,0x3c,0x39,0x40,0x00,0x1f,0xc7,0x80,0x3f,0xe3,0xf8,0x40,0x1c,0xc0,
0x33,0x80,0x23,0x20,0x7f,0xc0,0x00,0x1f,0x80,0x00,0x3f,0xff,0xcf,0xc0,0x23,
0x20,0x4c,0x00,0x3f,0xff,0xcf,0x80,0x00,0x00,0x00,0x00,0x1c,0xdf,0x83,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00, };
#endif

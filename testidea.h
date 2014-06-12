/* IDEA test vectors, from the ETH reference implementation */

/* The data structure for the ( key, plaintext, ciphertext ) triplets */

typedef struct {
	BYTE key[ IDEA_KEYSIZE ];
	BYTE plaintext[ IDEA_BLOCKSIZE ];
	BYTE ciphertext[ IDEA_BLOCKSIZE ];
	} IDEA_TEST;

static IDEA_TEST testIdea[] = {
	{ { 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x04,
		0x00, 0x05, 0x00, 0x06, 0x00, 0x07, 0x00, 0x08 },
	  { 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x03 },
	  { 0x11, 0xFB, 0xED, 0x2B, 0x01, 0x98, 0x6D, 0xE5 } },
	{ { 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x04,
		0x00, 0x05, 0x00, 0x06, 0x00, 0x07, 0x00, 0x08 },
	  { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08 },
	  { 0x54, 0x0E, 0x5F, 0xEA, 0x18, 0xC2, 0xF8, 0xB1 } },
	{ { 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x04,
		0x00, 0x05, 0x00, 0x06, 0x00, 0x07, 0x00, 0x08 },
	  { 0x00, 0x19, 0x32, 0x4B, 0x64, 0x7D, 0x96, 0xAF },
	  { 0x9F, 0x0A, 0x0A, 0xB6, 0xE1, 0x0C, 0xED, 0x78 } },
	{ { 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x04,
		0x00, 0x05, 0x00, 0x06, 0x00, 0x07, 0x00, 0x08 },
	  { 0xF5, 0x20, 0x2D, 0x5B, 0x9C, 0x67, 0x1B, 0x08 },
	  { 0xCF, 0x18, 0xFD, 0x73, 0x55, 0xE2, 0xC5, 0xC5 } },
	{ { 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x04,
		0x00, 0x05, 0x00, 0x06, 0x00, 0x07, 0x00, 0x08 },
	  { 0xFA, 0xE6, 0xD2, 0xBE, 0xAA, 0x96, 0x82, 0x6E },
	  { 0x85, 0xDF, 0x52, 0x00, 0x56, 0x08, 0x19, 0x3D } },
	{ { 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x04,
		0x00, 0x05, 0x00, 0x06, 0x00, 0x07, 0x00, 0x08 },
	  { 0x0A, 0x14, 0x1E, 0x28, 0x32, 0x3C, 0x46, 0x50 },
	  { 0x2F, 0x7D, 0xE7, 0x50, 0x21, 0x2F, 0xB7, 0x34 } },
	{ { 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x04,
		0x00, 0x05, 0x00, 0x06, 0x00, 0x07, 0x00, 0x08 },
	  { 0x05, 0x0A, 0x0F, 0x14, 0x19, 0x1E, 0x23, 0x28 },
	  { 0x7B, 0x73, 0x14, 0x92, 0x5D, 0xE5, 0x9C, 0x09 } },
	{ { 0x00, 0x05, 0x00, 0x0A, 0x00, 0x0F, 0x00, 0x14,
		0x00, 0x19, 0x00, 0x1E, 0x00, 0x23, 0x00, 0x28 },
	  { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08 },
	  { 0x3E, 0xC0, 0x47, 0x80, 0xBE, 0xFF, 0x6E, 0x20 } },
	{ { 0x3A, 0x98, 0x4E, 0x20, 0x00, 0x19, 0x5D, 0xB3,
		0x2E, 0xE5, 0x01, 0xC8, 0xC4, 0x7C, 0xEA, 0x60 },
	  { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08 },
	  { 0x97, 0xBC, 0xD8, 0x20, 0x07, 0x80, 0xDA, 0x86 } },
	{ { 0x00, 0x64, 0x00, 0xC8, 0x01, 0x2C, 0x01, 0x90,
		0x01, 0xF4, 0x02, 0x58, 0x02, 0xBC, 0x03, 0x20 },
	  { 0x05, 0x32, 0x0A, 0x64, 0x14, 0xC8, 0x19, 0xFA },
	  { 0x65, 0xBE, 0x87, 0xE7, 0xA2, 0x53, 0x8A, 0xED } },
	{ { 0x9D, 0x40, 0x75, 0xC1, 0x03, 0xBC, 0x32, 0x2A,
		0xFB, 0x03, 0xE7, 0xBE, 0x6A, 0xB3, 0x00, 0x06 },
	  { 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08 },
	  { 0xF5, 0xDB, 0x1A, 0xC4, 0x5E, 0x5E, 0xF9, 0xF9 } }
	};

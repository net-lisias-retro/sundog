/*
 * Copyright (c) 2017 Wladimir J. van der Laan
 * Distributed under the MIT software license, see the accompanying
 * file COPYING or http://www.opensource.org/licenses/mit-license.php.
 */

#ifndef H_PSYS_OPCODES
#define H_PSYS_OPCODES

#define PSYS_OP_MAX_ARGS 3
enum psys_opcode_argtype {
    PSYS_OPARG_VAR      = 0, /* "big" encoding */
    PSYS_OPARG_BYTE     = 1,
    PSYS_OPARG_WORD     = 2,
    PSYS_OPARG_ARGTMASK = 15, /* argument type mask */
    PSYS_OPARG_SIGNED   = 16, /* argument is signed (only makes sense for 1/2, not VAR) */
    PSYS_OPARG_RELFLAG  = 32, /* argument is relative to end of instruction */
    PSYP_OPARG_NONE     = 255
};

struct psys_opcode_desc {
    const char *name;
    int num_args;
    unsigned char args[PSYS_OP_MAX_ARGS];
    int num_in;
    int num_out;
};

extern struct psys_opcode_desc psys_opcode_descriptions[256];

enum psys_opcode {
    PSOP_SLDC0    = 0x00,
    PSOP_SLDC1    = 0x01,
    PSOP_SLDC2    = 0x02,
    PSOP_SLDC3    = 0x03,
    PSOP_SLDC4    = 0x04,
    PSOP_SLDC5    = 0x05,
    PSOP_SLDC6    = 0x06,
    PSOP_SLDC7    = 0x07,
    PSOP_SLDC8    = 0x08,
    PSOP_SLDC9    = 0x09,
    PSOP_SLDC10   = 0x0a,
    PSOP_SLDC11   = 0x0b,
    PSOP_SLDC12   = 0x0c,
    PSOP_SLDC13   = 0x0d,
    PSOP_SLDC14   = 0x0e,
    PSOP_SLDC15   = 0x0f,
    PSOP_SLDC16   = 0x10,
    PSOP_SLDC17   = 0x11,
    PSOP_SLDC18   = 0x12,
    PSOP_SLDC19   = 0x13,
    PSOP_SLDC20   = 0x14,
    PSOP_SLDC21   = 0x15,
    PSOP_SLDC22   = 0x16,
    PSOP_SLDC23   = 0x17,
    PSOP_SLDC24   = 0x18,
    PSOP_SLDC25   = 0x19,
    PSOP_SLDC26   = 0x1a,
    PSOP_SLDC27   = 0x1b,
    PSOP_SLDC28   = 0x1c,
    PSOP_SLDC29   = 0x1d,
    PSOP_SLDC30   = 0x1e,
    PSOP_SLDC31   = 0x1f,
    PSOP_SLDL1    = 0x20,
    PSOP_SLDL2    = 0x21,
    PSOP_SLDL3    = 0x22,
    PSOP_SLDL4    = 0x23,
    PSOP_SLDL5    = 0x24,
    PSOP_SLDL6    = 0x25,
    PSOP_SLDL7    = 0x26,
    PSOP_SLDL8    = 0x27,
    PSOP_SLDL9    = 0x28,
    PSOP_SLDL10   = 0x29,
    PSOP_SLDL11   = 0x2a,
    PSOP_SLDL12   = 0x2b,
    PSOP_SLDL13   = 0x2c,
    PSOP_SLDL14   = 0x2d,
    PSOP_SLDL15   = 0x2e,
    PSOP_SLDL16   = 0x2f,
    PSOP_SLDO1    = 0x30,
    PSOP_SLDO2    = 0x31,
    PSOP_SLDO3    = 0x32,
    PSOP_SLDO4    = 0x33,
    PSOP_SLDO5    = 0x34,
    PSOP_SLDO6    = 0x35,
    PSOP_SLDO7    = 0x36,
    PSOP_SLDO8    = 0x37,
    PSOP_SLDO9    = 0x38,
    PSOP_SLDO10   = 0x39,
    PSOP_SLDO11   = 0x3a,
    PSOP_SLDO12   = 0x3b,
    PSOP_SLDO13   = 0x3c,
    PSOP_SLDO14   = 0x3d,
    PSOP_SLDO15   = 0x3e,
    PSOP_SLDO16   = 0x3f,
    PSOP_UND40    = 0x40,
    PSOP_UND41    = 0x41,
    PSOP_UND42    = 0x42,
    PSOP_UND43    = 0x43,
    PSOP_UND44    = 0x44,
    PSOP_UND45    = 0x45,
    PSOP_UND46    = 0x46,
    PSOP_UND47    = 0x47,
    PSOP_UND48    = 0x48,
    PSOP_UND49    = 0x49,
    PSOP_UND4A    = 0x4a,
    PSOP_UND4B    = 0x4b,
    PSOP_UND4C    = 0x4c,
    PSOP_UND4D    = 0x4d,
    PSOP_UND4E    = 0x4e,
    PSOP_UND4F    = 0x4f,
    PSOP_UND50    = 0x50,
    PSOP_UND51    = 0x51,
    PSOP_UND52    = 0x52,
    PSOP_UND53    = 0x53,
    PSOP_UND54    = 0x54,
    PSOP_UND55    = 0x55,
    PSOP_UND56    = 0x56,
    PSOP_UND57    = 0x57,
    PSOP_UND58    = 0x58,
    PSOP_UND59    = 0x59,
    PSOP_UND5A    = 0x5a,
    PSOP_UND5B    = 0x5b,
    PSOP_UND5C    = 0x5c,
    PSOP_UND5D    = 0x5d,
    PSOP_UND5E    = 0x5e,
    PSOP_UND5F    = 0x5f,
    PSOP_SLLA1    = 0x60,
    PSOP_SLLA2    = 0x61,
    PSOP_SLLA3    = 0x62,
    PSOP_SLLA4    = 0x63,
    PSOP_SLLA5    = 0x64,
    PSOP_SLLA6    = 0x65,
    PSOP_SLLA7    = 0x66,
    PSOP_SLLA8    = 0x67,
    PSOP_SSTL1    = 0x68,
    PSOP_SSTL2    = 0x69,
    PSOP_SSTL3    = 0x6a,
    PSOP_SSTL4    = 0x6b,
    PSOP_SSTL5    = 0x6c,
    PSOP_SSTL6    = 0x6d,
    PSOP_SSTL7    = 0x6e,
    PSOP_SSTL8    = 0x6f,
    PSOP_SCXG1    = 0x70,
    PSOP_SCXG2    = 0x71,
    PSOP_SCXG3    = 0x72,
    PSOP_SCXG4    = 0x73,
    PSOP_SCXG5    = 0x74,
    PSOP_SCXG6    = 0x75,
    PSOP_SCXG7    = 0x76,
    PSOP_SCXG8    = 0x77,
    PSOP_SIND0    = 0x78,
    PSOP_SIND1    = 0x79,
    PSOP_SIND2    = 0x7a,
    PSOP_SIND3    = 0x7b,
    PSOP_SIND4    = 0x7c,
    PSOP_SIND5    = 0x7d,
    PSOP_SIND6    = 0x7e,
    PSOP_SIND7    = 0x7f,
    PSOP_LDCB     = 0x80,
    PSOP_LDCI     = 0x81,
    PSOP_LCO      = 0x82,
    PSOP_LDC      = 0x83,
    PSOP_LLA      = 0x84,
    PSOP_LDO      = 0x85,
    PSOP_LAO      = 0x86,
    PSOP_LDL      = 0x87,
    PSOP_LDA      = 0x88,
    PSOP_LOD      = 0x89,
    PSOP_UJP      = 0x8a,
    PSOP_UJPL     = 0x8b,
    PSOP_MPI      = 0x8c,
    PSOP_DVI      = 0x8d,
    PSOP_STM      = 0x8e,
    PSOP_MODI     = 0x8f,
    PSOP_CLP      = 0x90,
    PSOP_CGP      = 0x91,
    PSOP_CIP      = 0x92,
    PSOP_CXL      = 0x93,
    PSOP_CXG      = 0x94,
    PSOP_CXI      = 0x95,
    PSOP_RPU      = 0x96,
    PSOP_CFP      = 0x97,
    PSOP_LDCN     = 0x98,
    PSOP_LSL      = 0x99,
    PSOP_LDE      = 0x9a,
    PSOP_LAE      = 0x9b,
    PSOP_NOP      = 0x9c,
    PSOP_LPR      = 0x9d,
    PSOP_BPT      = 0x9e,
    PSOP_BNOT     = 0x9f,
    PSOP_LOR      = 0xa0,
    PSOP_LAND     = 0xa1,
    PSOP_ADI      = 0xa2,
    PSOP_SBI      = 0xa3,
    PSOP_STL      = 0xa4,
    PSOP_SRO      = 0xa5,
    PSOP_STR      = 0xa6,
    PSOP_LDB      = 0xa7,
    PSOP_NATIVE   = 0xa8,
    PSOP_NAT_INFO = 0xa9,
    PSOP_UNDAA    = 0xaa,
    PSOP_CAP      = 0xab,
    PSOP_CSP      = 0xac,
    PSOP_SLOD1    = 0xad,
    PSOP_SLOD2    = 0xae,
    PSOP_UNDAF    = 0xaf,
    PSOP_EQUI     = 0xb0,
    PSOP_NEQI     = 0xb1,
    PSOP_LEQI     = 0xb2,
    PSOP_GEQI     = 0xb3,
    PSOP_LEUSW    = 0xb4,
    PSOP_GEUSW    = 0xb5,
    PSOP_EQPWR    = 0xb6,
    PSOP_LEPWR    = 0xb7,
    PSOP_GEPWR    = 0xb8,
    PSOP_EQBYTE   = 0xb9,
    PSOP_LEBYTE   = 0xba,
    PSOP_GEBYTE   = 0xbb,
    PSOP_SRS      = 0xbc,
    PSOP_SWAP     = 0xbd,
    PSOP_UNDBE    = 0xbe,
    PSOP_UNDBF    = 0xbf,
    PSOP_UNDC0    = 0xc0,
    PSOP_UNDC1    = 0xc1,
    PSOP_UNDC2    = 0xc2,
    PSOP_UNDC3    = 0xc3,
    PSOP_STO      = 0xc4,
    PSOP_MOV      = 0xc5,
    PSOP_DUP2     = 0xc6,
    PSOP_ADJ      = 0xc7,
    PSOP_STB      = 0xc8,
    PSOP_LDP      = 0xc9,
    PSOP_STP      = 0xca,
    PSOP_CHK      = 0xcb,
    PSOP_FLT      = 0xcc,
    PSOP_EQREAL   = 0xcd,
    PSOP_LEREAL   = 0xce,
    PSOP_GEREAL   = 0xcf,
    PSOP_LDM      = 0xd0,
    PSOP_SPR      = 0xd1,
    PSOP_EFJ      = 0xd2,
    PSOP_NFJ      = 0xd3,
    PSOP_FJP      = 0xd4,
    PSOP_FJPL     = 0xd5,
    PSOP_XJP      = 0xd6,
    PSOP_IXA      = 0xd7,
    PSOP_IXP      = 0xd8,
    PSOP_STE      = 0xd9,
    PSOP_INN      = 0xda,
    PSOP_UNI      = 0xdb,
    PSOP_INT      = 0xdc,
    PSOP_DIF      = 0xdd,
    PSOP_SIGNAL   = 0xde,
    PSOP_WAIT     = 0xdf,
    PSOP_ABI      = 0xe0,
    PSOP_NGI      = 0xe1,
    PSOP_DUP1     = 0xe2,
    PSOP_ABR      = 0xe3,
    PSOP_NGR      = 0xe4,
    PSOP_LNOT     = 0xe5,
    PSOP_IND      = 0xe6,
    PSOP_INC      = 0xe7,
    PSOP_EQSTR    = 0xe8,
    PSOP_LESTR    = 0xe9,
    PSOP_GESTR    = 0xea,
    PSOP_ASTR     = 0xeb,
    PSOP_CSTR     = 0xec,
    PSOP_INCI     = 0xed,
    PSOP_DECI     = 0xee,
    PSOP_SCIP1    = 0xef,
    PSOP_SCIP2    = 0xf0,
    PSOP_TJP      = 0xf1,
    PSOP_LDCRL    = 0xf2,
    PSOP_LDRL     = 0xf3,
    PSOP_STRL     = 0xf4,
    PSOP_UNDF5    = 0xf5,
    PSOP_UNDF6    = 0xf6,
    PSOP_UNDF7    = 0xf7,
    PSOP_UNDF8    = 0xf8,
    PSOP_UNDF9    = 0xf9,
    PSOP_UNDFA    = 0xfa,
    PSOP_UNDFB    = 0xfb,
    PSOP_UNDFC    = 0xfc,
    PSOP_UNDFD    = 0xfd,
    PSOP_UNDFE    = 0xfe,
    PSOP_UNDFF    = 0xff
};

#endif
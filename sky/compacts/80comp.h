/* ScummVM - Scumm Interpreter
 * Copyright (C) 2003 The ScummVM project
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 * $Header$ 
 *
 */

#ifndef SKY80COMP_H
#define SKY80COMP_H




namespace SkyCompact {

Compact sc80_bubble10 = {
	L_SCRIPT,	// logic
	ST_LOGIC+ST_RECREATE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	274,	// xcood
	316,	// ycood
	89*64,	// frame
	0,	// cursorText
	0,	// mouseOn
	0,	// mouseOff
	0,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	0,	// mouseSize_x
	0,	// mouseSize_y
	0,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_BUBBLE10_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

uint16 sc80_logic_list[] = {
	ID_FOSTER,
	ID_SC80_EXIT,
	ID_SC80_ROPE,
	ID_SC80_SAMPLE,
	ID_SC80_GOO,
	ID_SC80_BUBBLE1,
	ID_SC80_BUBBLE2,
	ID_SC80_BUBBLE3,
	ID_SC80_BUBBLE4,
	ID_SC80_BUBBLE5,
	ID_SC80_BUBBLE6,
	ID_SC80_BUBBLE7,
	ID_SC80_BUBBLE8,
	ID_SC80_BUBBLE9,
	ID_SC80_BUBBLE10,
	ID_SC80_BUBBLE11,
	ID_SC80_BUBBLE12,
	ID_SC67_PULSE1,
	0XFFFF,
	ID_STD_MENU_LOGIC
};

uint16 sc802_palette[] = {
	0,
	0,
	0,
	3,
	512,
	0,
	3,
	1281,
	0,
	513,
	1026,
	1,
	7,
	1280,
	513,
	7,
	1026,
	1026,
	264,
	2305,
	1,
	10,
	10241,
	1028,
	518,
	2052,
	769,
	1028,
	3077,
	1,
	775,
	2818,
	769,
	1286,
	2308,
	1027,
	778,
	1793,
	1540,
	271,
	1536,
	1797,
	1541,
	3334,
	514,
	780,
	2053,
	1286,
	274,
	4098,
	259,
	1038,
	2307,
	2054,
	1799,
	3591,
	1540,
	2056,
	5128,
	258,
	2057,
	1802,
	2313,
	2313,
	5383,
	771,
	535,
	4610,
	1541,
	2825,
	5897,
	1028,
	2570,
	3851,
	2567,
	1557,
	5124,
	1798,
	3082,
	3082,
	2571,
	1305,
	2819,
	3083,
	2065,
	3339,
	3084,
	1814,
	7433,
	1030,
	2075,
	5894,
	2569,
	3343,
	7438,
	1799,
	3853,
	6159,
	2315,
	2332,
	7944,
	1287,
	3348,
	8461,
	1544,
	4111,
	6160,
	3852,
	4114,
	8977,
	1801,
	3102,
	7949,
	2571,
	3864,
	4366,
	4883,
	4627,
	7442,
	3343,
	5139,
	10004,
	2316,
	3621,
	5644,
	5397,
	5652,
	8726,
	3856,
	4891,
	7697,
	4371,
	3879,
	8973,
	4114,
	4137,
	9742,
	4370,
	4396,
	8206,
	5399,
	5413,
	8467,
	6422,
	5162,
	11538,
	4629,
	5676,
	12820,
	3859,
	5424,
	10769,
	5399,
	6439,
	8982,
	6427,
	5937,
	11795,
	6169,
	6195,
	11540,
	5915,
	7719,
	12059,
	6427,
	8232,
	13340,
	5658,
	7728,
	13082,
	6686,
	8491,
	13859,
	6430,
	8498,
	13854,
	6944,
	8756,
	14111,
	7714,
	9521,
	11042,
	10535,
	9270,
	14112,
	8999,
	10551,
	12325,
	11308,
	13879,
	14648,
	15161,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	59,
	15104,
	0,
	0,
	13312,
	12336,
	10541,
	8233,
	7453,
	5659,
	5653,
	3598,
	1550,
	775,
	0,
	3,
	12544,
	8489,
	8750,
	10777,
	4123,
	4898,
	7177,
	780,
	1558,
	10240,
	1028,
	7182,
	6413,
	5926,
	8466,
	3091,
	2838,
	3840,
	12288,
	12336,
	10535,
	7723,
	8478,
	8996,
	7214,
	9499,
	5146,
	4899,
	6670,
	2572,
	1297,
	1280,
	10545,
	11809,
	6434,
	6954,
	8720,
	2323,
	3100,
	5635,
	6,
	8505,
	12072,
	8216,
	4134,
	7448,
	4362,
	1044,
	2827,
	1280,
	1837,
	8967,
	257,
	25,
	3840,
	0,
	10545,
	11809,
	6434,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163,
	15163
};

Compact sc80_bubble1 = {
	L_SCRIPT,	// logic
	ST_LOGIC+ST_BACKGROUND+ST_RECREATE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	244,	// xcood
	309,	// ycood
	89*64,	// frame
	0,	// cursorText
	0,	// mouseOn
	0,	// mouseOff
	0,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	0,	// mouseSize_x
	0,	// mouseSize_y
	0,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_BUBBLE1_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

uint16 sc801_palette[] = {
	0,
	512,
	514,
	5,
	1024,
	257,
	517,
	1795,
	257,
	1027,
	1540,
	515,
	521,
	1794,
	1027,
	521,
	1540,
	1540,
	778,
	2819,
	259,
	524,
	10755,
	1542,
	1032,
	2566,
	1283,
	1542,
	3591,
	515,
	1289,
	3332,
	1283,
	1800,
	2822,
	1541,
	1292,
	2307,
	2054,
	785,
	2050,
	2311,
	2055,
	3848,
	1028,
	1294,
	2567,
	1800,
	788,
	4612,
	773,
	1552,
	2821,
	2568,
	2313,
	4105,
	2054,
	2570,
	5642,
	772,
	2571,
	2316,
	2827,
	2827,
	5897,
	1285,
	1049,
	5124,
	2055,
	3339,
	6411,
	1542,
	3084,
	4365,
	3081,
	2071,
	5638,
	2312,
	3596,
	3596,
	3085,
	1819,
	3333,
	3597,
	2579,
	3853,
	3598,
	2328,
	7947,
	1544,
	2589,
	6408,
	3083,
	3857,
	7952,
	2313,
	4367,
	6673,
	2829,
	2846,
	8458,
	1801,
	3862,
	8975,
	2058,
	4625,
	6674,
	4366,
	4628,
	9491,
	2315,
	3616,
	8463,
	3085,
	4378,
	4880,
	5397,
	5141,
	7956,
	3857,
	5653,
	10518,
	2830,
	4135,
	6158,
	5911,
	6166,
	9240,
	4370,
	5405,
	8211,
	4885,
	4393,
	9487,
	4628,
	4651,
	10256,
	4884,
	4910,
	8720,
	5913,
	5927,
	8981,
	6936,
	5676,
	12052,
	5143,
	6190,
	13334,
	4373,
	5938,
	11283,
	5913,
	6953,
	9496,
	6941,
	6451,
	12309,
	6683,
	6709,
	12054,
	6429,
	8233,
	12573,
	6941,
	8746,
	13854,
	6172,
	8242,
	13596,
	7200,
	9005,
	14373,
	6944,
	9012,
	14368,
	7458,
	9270,
	14625,
	8228,
	10035,
	11556,
	11049,
	9784,
	14626,
	9513,
	11065,
	12839,
	11822,
	14393,
	15162,
	15675,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	0,
	13824,
	12850,
	11055,
	8747,
	7967,
	6173,
	6167,
	4112,
	2064,
	1289,
	256,
	5,
	13057,
	9003,
	9264,
	11291,
	4637,
	5412,
	7691,
	1294,
	2072,
	10753,
	1542,
	7696,
	6927,
	6440,
	8980,
	3605,
	3352,
	4352,
	12802,
	12850,
	11049,
	8237,
	8992,
	9510,
	7728,
	10013,
	5660,
	5413,
	7184,
	3086,
	1811,
	1794,
	11059,
	12323,
	6948,
	7468,
	9234,
	2837,
	3614,
	6149,
	264,
	9019,
	12586,
	8730,
	4648,
	7962,
	4876,
	1558,
	3341,
	1794,
	2351,
	9481,
	771,
	27,
	4352,
	0,
	11059,
	12323,
	6948,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677,
	15677
};

uint16 sc803_palette[] = {
	0,
	0,
	0,
	1,
	0,
	0,
	1,
	768,
	0,
	0,
	512,
	0,
	5,
	768,
	0,
	5,
	512,
	512,
	6,
	1792,
	0,
	8,
	9728,
	514,
	4,
	1538,
	256,
	514,
	2563,
	0,
	261,
	2304,
	256,
	772,
	1794,
	513,
	264,
	1280,
	1026,
	13,
	1024,
	1283,
	1027,
	2820,
	0,
	266,
	1539,
	772,
	16,
	3584,
	1,
	524,
	1793,
	1540,
	1285,
	3077,
	1026,
	1542,
	4614,
	0,
	1543,
	1288,
	1799,
	1799,
	4869,
	257,
	21,
	4096,
	1027,
	2311,
	5383,
	514,
	2056,
	3337,
	2053,
	1043,
	4610,
	1284,
	2568,
	2568,
	2057,
	791,
	2305,
	2569,
	1551,
	2825,
	2570,
	1300,
	6919,
	516,
	1561,
	5380,
	2055,
	2829,
	6924,
	1285,
	3339,
	5645,
	1801,
	1818,
	7430,
	773,
	2834,
	7947,
	1030,
	3597,
	5646,
	3338,
	3600,
	8463,
	1287,
	2588,
	7435,
	2057,
	3350,
	3852,
	4369,
	4113,
	6928,
	2829,
	4625,
	9490,
	1802,
	3107,
	5130,
	4883,
	5138,
	8212,
	3342,
	4377,
	7183,
	3857,
	3365,
	8459,
	3600,
	3623,
	9228,
	3856,
	3882,
	7692,
	4885,
	4899,
	7953,
	5908,
	4648,
	11024,
	4115,
	5162,
	12306,
	3345,
	4910,
	10255,
	4885,
	5925,
	8468,
	5913,
	5423,
	11281,
	5655,
	5681,
	11026,
	5401,
	7205,
	11545,
	5913,
	7718,
	12826,
	5144,
	7214,
	12568,
	6172,
	7977,
	13345,
	5916,
	7984,
	13340,
	6430,
	8242,
	13597,
	7200,
	9007,
	10528,
	10021,
	8756,
	13598,
	8485,
	10037,
	11811,
	10794,
	13365,
	14134,
	14647,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	57,
	14592,
	0,
	0,
	12800,
	11822,
	10027,
	7719,
	6939,
	5145,
	5139,
	3084,
	1036,
	261,
	0,
	1,
	12032,
	7975,
	8236,
	10263,
	3609,
	4384,
	6663,
	266,
	1044,
	9728,
	514,
	6668,
	5899,
	5412,
	7952,
	2577,
	2324,
	3328,
	11776,
	11822,
	10021,
	7209,
	7964,
	8482,
	6700,
	8985,
	4632,
	4385,
	6156,
	2058,
	783,
	768,
	10031,
	11295,
	5920,
	6440,
	8206,
	1809,
	2586,
	5121,
	4,
	7991,
	11558,
	7702,
	3620,
	6934,
	3848,
	530,
	2313,
	768,
	1323,
	8453,
	0,
	23,
	3328,
	0,
	10031,
	11295,
	5920,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649,
	14649
};

uint16 sc80_chip_list[] = {
	IT_SC80_LAYER_0+DISK_10,
	IT_SC80_CLIMB+DISK_10,
	IT_SC80_PIPE_TALK+DISK_10,
	IT_SC80_PIPE_SHRUG+DISK_10,
	IT_SC80_DROP+DISK_10+0X8000,
	IT_SC80_CLAMBER+DISK_10+0X8000,
	IT_SC80_GET_ROPE+DISK_10+0X8000,
	IT_SC80_SWING+DISK_10+0X8000,
	IT_SC80_GOO+DISK_10,
	IT_SC80_BUBBLE+DISK_10,
	IT_SC80_SAMPLE+DISK_10,
	IT_SC80_EXIT+DISK_10,
	IT_SC80_ROPE+DISK_10,
	0
};

Compact sc80_bubble2 = {
	L_SCRIPT,	// logic
	ST_LOGIC+ST_RECREATE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	364,	// xcood
	314,	// ycood
	89*64,	// frame
	0,	// cursorText
	0,	// mouseOn
	0,	// mouseOff
	0,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	0,	// mouseSize_x
	0,	// mouseSize_y
	0,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_BUBBLE2_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

uint16 sc80_pipe_shrug[] = {
	106*64,
	311,
	164,
	0,
	311,
	164,
	1,
	311,
	164,
	2,
	311,
	164,
	3,
	311,
	164,
	4,
	311,
	164,
	4,
	311,
	164,
	4,
	311,
	164,
	4,
	311,
	164,
	4,
	311,
	164,
	4,
	311,
	164,
	5,
	311,
	164,
	3,
	311,
	164,
	2,
	311,
	164,
	1,
	311,
	164,
	0,
	0
};

uint16 sc80_climb_down[] = {
	90*64,
	318,
	136,
	0,
	316,
	136,
	1,
	315,
	136,
	2,
	316,
	136,
	3,
	313,
	136,
	4,
	313,
	136,
	5,
	313,
	136,
	6,
	313,
	136,
	7,
	314,
	136,
	8,
	316,
	136,
	9,
	313,
	136,
	10,
	313,
	136,
	11,
	312,
	136,
	12,
	313,
	136,
	13,
	310,
	136,
	14,
	311,
	138,
	15,
	311,
	143,
	16,
	311,
	144,
	17,
	312,
	149,
	18,
	313,
	154,
	19,
	310,
	155,
	20,
	311,
	160,
	21,
	311,
	165,
	22,
	311,
	165,
	22,
	0,
	0
};

uint16 sc80_exit_open[] = {
	100*64,
	180,
	188,
	0,
	180,
	188,
	1,
	180,
	188,
	2,
	180,
	188,
	3,
	180,
	188,
	4,
	180,
	188,
	5,
	180,
	188,
	6,
	180,
	188,
	7,
	180,
	188,
	8,
	180,
	188,
	9,
	180,
	188,
	10,
	180,
	188,
	11,
	180,
	188,
	12,
	180,
	188,
	13,
	180,
	188,
	14,
	180,
	188,
	15,
	180,
	188,
	16,
	180,
	188,
	17,
	180,
	188,
	18,
	180,
	188,
	19,
	180,
	188,
	20,
	180,
	188,
	21,
	180,
	188,
	22,
	180,
	188,
	23,
	180,
	188,
	24,
	180,
	188,
	25,
	0
};

uint16 sc80_fast_list[] = {
	12+DISK_10,
	51+DISK_10,
	52+DISK_10,
	53+DISK_10,
	54+DISK_10,
	268+DISK_10,
	0
};

uint16 sc80_palette[] = {
	0,
	512,
	514,
	5,
	1024,
	257,
	517,
	1795,
	257,
	1027,
	1540,
	515,
	521,
	1794,
	1027,
	521,
	1540,
	1540,
	778,
	2819,
	259,
	524,
	10755,
	1542,
	1032,
	2566,
	1283,
	1542,
	3591,
	515,
	1289,
	3332,
	1283,
	1800,
	2822,
	1541,
	1292,
	2307,
	2054,
	785,
	2050,
	2311,
	2055,
	3848,
	1028,
	1294,
	2567,
	1800,
	788,
	4612,
	773,
	1552,
	2821,
	2568,
	2313,
	4105,
	2054,
	2570,
	5642,
	772,
	2571,
	2316,
	2827,
	2827,
	5897,
	1285,
	1049,
	5124,
	2055,
	3339,
	6411,
	1542,
	3084,
	4365,
	3081,
	2071,
	5638,
	2312,
	3596,
	3596,
	3085,
	1819,
	3333,
	3597,
	2579,
	3853,
	3598,
	2328,
	7947,
	1544,
	2589,
	6408,
	3083,
	3857,
	7952,
	2313,
	4367,
	6673,
	2829,
	2846,
	8458,
	1801,
	3862,
	8975,
	2058,
	4625,
	6674,
	4366,
	4628,
	9491,
	2315,
	3616,
	8463,
	3085,
	4378,
	4880,
	5397,
	5141,
	7956,
	3857,
	5653,
	10518,
	2830,
	4135,
	6158,
	5911,
	6166,
	9240,
	4370,
	5405,
	8211,
	4885,
	4393,
	9487,
	4628,
	4651,
	10256,
	4884,
	4910,
	8720,
	5913,
	5927,
	8981,
	6936,
	5676,
	12052,
	5143,
	6190,
	13334,
	4373,
	5938,
	11283,
	5913,
	6953,
	9496,
	6941,
	6451,
	12309,
	6683,
	6709,
	12054,
	6429,
	8233,
	12573,
	6941,
	8746,
	13854,
	6172,
	8242,
	13596,
	7200,
	9005,
	14373,
	6944,
	9012,
	14368,
	7458,
	9270,
	14625,
	8228,
	10035,
	11556,
	11049,
	9784,
	14626,
	9513,
	11065,
	12839,
	11822,
	14393,
	15162,
	15675,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	61,
	15616,
	0,
	0,
	13824,
	12850,
	11055,
	8747,
	7967,
	6173,
	6167,
	4112,
	2064,
	1289,
	256,
	5,
	13057,
	9003,
	9264,
	11291,
	4637,
	5412,
	7691,
	1294,
	2072,
	10753,
	1542,
	7696,
	6927,
	6440,
	8980,
	3605,
	3352,
	4352,
	12802,
	12850,
	11049,
	8237,
	8992,
	9510,
	7728,
	10013,
	5660,
	5413,
	7184,
	3086,
	1811,
	1794,
	11059,
	12323,
	6948,
	7468,
	9234,
	2837,
	3614,
	6149,
	264,
	9019,
	12586,
	8730,
	4648,
	7962,
	4876,
	1558,
	3341,
	1794,
	2351,
	9481,
	771,
	27,
	4352,
	0,
	11059,
	12323,
	6948,
	0,
	16128,
	0,
	16191,
	15679,
	0,
	61,
	15616,
	0,
	61,
	13824,
	13878,
	12077,
	8241,
	10527,
	5917,
	5925,
	7698,
	2865,
	9995,
	1285,
	285,
	16129,
	16191
};

Compact sc80_bubble11 = {
	L_SCRIPT,	// logic
	ST_LOGIC+ST_RECREATE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	305,	// xcood
	316,	// ycood
	89*64,	// frame
	0,	// cursorText
	0,	// mouseOn
	0,	// mouseOff
	0,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	0,	// mouseSize_x
	0,	// mouseSize_y
	0,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_BUBBLE11_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

uint16 sc80_clamber[] = {
	93*64,
	311,
	165,
	0,
	311,
	165,
	0,
	311,
	165,
	0,
	311,
	165,
	0,
	311,
	165,
	0,
	311,
	165,
	0,
	313,
	165,
	1,
	312,
	165,
	2,
	311,
	165,
	3,
	309,
	165,
	4,
	305,
	165,
	5,
	300,
	165,
	6,
	294,
	165,
	7,
	293,
	165,
	8,
	286,
	166,
	9,
	286,
	167,
	10,
	286,
	168,
	11,
	285,
	168,
	12,
	285,
	168,
	13,
	285,
	168,
	13,
	285,
	168,
	13,
	285,
	168,
	13,
	285,
	168,
	14,
	284,
	167,
	15,
	281,
	167,
	16,
	281,
	167,
	17,
	281,
	167,
	17,
	281,
	167,
	17,
	281,
	167,
	17,
	281,
	167,
	17,
	280,
	168,
	18,
	265,
	168,
	19,
	261,
	169,
	20,
	259,
	169,
	21,
	0
};

uint16 sc80_mouse_list[] = {
	ID_SC80_LADDER,
	ID_SC80_ROPE,
	ID_SC80_SPOUT,
	ID_SC80_ORIFICE,
	ID_SC80_EXIT,
	0XFFFF,
	ID_TEXT_MOUSE
};

uint16 sc80_climb_up[] = {
	90*64,
	311,
	165,
	22,
	311,
	165,
	22,
	311,
	160,
	21,
	310,
	155,
	20,
	313,
	154,
	19,
	312,
	149,
	18,
	311,
	144,
	17,
	311,
	143,
	16,
	311,
	138,
	15,
	310,
	136,
	14,
	313,
	136,
	13,
	312,
	136,
	12,
	313,
	136,
	11,
	313,
	136,
	10,
	316,
	136,
	9,
	314,
	136,
	8,
	313,
	136,
	7,
	313,
	136,
	6,
	313,
	136,
	5,
	313,
	136,
	4,
	316,
	136,
	3,
	315,
	136,
	2,
	316,
	136,
	1,
	318,
	136,
	0,
	0,
	0
};

Compact sc80_exit = {
	L_SCRIPT,	// logic
	ST_LOGIC,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	180,	// xcood
	188,	// ycood
	100*64,	// frame
	1+T7,	// cursorText
	STD_EXIT_LEFT_ON,	// mouseOn
	STD_OFF,	// mouseOff
	MEGA_CLICK,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	192-180,	// mouseSize_x
	246-188,	// mouseSize_y
	SC80_EXIT_ACTION,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_EXIT_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

Compact sc80_orifice = {
	0,	// logic
	ST_MOUSE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	276,	// xcood
	250,	// ycood
	0,	// frame
	20575,	// cursorText
	STD_ON,	// mouseOn
	STD_OFF,	// mouseOff
	MEGA_CLICK,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	330-272,	// mouseSize_x
	291-250,	// mouseSize_y
	SC80_ORIFICE_ACTION,	// actionScript
	0,
	0,
	0,
	0,
	0,
	{ 0, 0, 0 },
	0,
	0,
	0,
	0,
	0
};

Compact sc80_sample = {
	L_SCRIPT,	// logic
	ST_LOGIC+ST_RECREATE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	288,	// xcood
	248,	// ycood
	104*64,	// frame
	0,	// cursorText
	0,	// mouseOn
	0,	// mouseOff
	0,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	0,	// mouseSize_x
	0,	// mouseSize_y
	0,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_SAMPLE_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

uint16 sc80_get_rope[] = {
	94*64,
	259,
	169,
	0,
	259,
	169,
	0,
	259,
	169,
	0,
	257,
	170,
	1,
	254,
	170,
	2,
	243,
	170,
	3,
	238,
	170,
	4,
	235,
	170,
	5,
	234,
	170,
	6,
	234,
	170,
	6,
	234,
	170,
	6,
	236,
	136,
	7,
	238,
	137,
	8,
	238,
	136,
	9,
	0
};

uint16 sc80_bub1_anim[] = {
	89*64,
	244,
	309,
	0,
	244,
	309,
	1,
	244,
	309,
	2,
	244,
	309,
	3,
	244,
	309,
	4,
	244,
	309,
	5,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	244,
	309,
	6,
	0
};

uint16 sc80_swing[] = {
	95*64,
	238,
	136,
	0,
	237,
	136,
	1,
	237,
	136,
	2,
	237,
	136,
	3,
	228,
	136,
	4,
	203,
	136,
	5,
	171,
	136,
	6,
	170,
	137,
	7,
	170,
	136,
	8,
	170,
	137,
	9,
	174,
	136,
	10,
	193,
	136,
	11,
	207,
	136,
	12,
	207,
	136,
	13,
	0
};

Compact sc80_spout = {
	0,	// logic
	ST_MOUSE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	290,	// xcood
	225,	// ycood
	0,	// frame
	20574,	// cursorText
	STD_ON,	// mouseOn
	STD_OFF,	// mouseOff
	MEGA_CLICK,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	312-290,	// mouseSize_x
	258-225,	// mouseSize_y
	SC80_SPOUT_ACTION,	// actionScript
	0,
	0,
	0,
	0,
	0,
	{ 0, 0, 0 },
	0,
	0,
	0,
	0,
	0
};

Compact sc80_bubble4 = {
	L_SCRIPT,	// logic
	ST_LOGIC+ST_RECREATE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	347,	// xcood
	289,	// ycood
	89*64,	// frame
	0,	// cursorText
	0,	// mouseOn
	0,	// mouseOff
	0,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	0,	// mouseSize_x
	0,	// mouseSize_y
	0,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_BUBBLE4_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

uint16 sc80_goo_anim[] = {
	88*64,
	300,
	261,
	0,
	300,
	261,
	1,
	300,
	261,
	2,
	300,
	261,
	3,
	300,
	261,
	4,
	300,
	261,
	5,
	300,
	261,
	6,
	300,
	261,
	6,
	300,
	261,
	6,
	300,
	261,
	7,
	300,
	261,
	8,
	300,
	261,
	9,
	300,
	261,
	0,
	300,
	261,
	0,
	300,
	261,
	0,
	300,
	261,
	0,
	300,
	261,
	0,
	300,
	261,
	0,
	300,
	261,
	0,
	300,
	261,
	0,
	300,
	261,
	0,
	300,
	261,
	0,
	300,
	261,
	0,
	0
};

Compact sc80_bubble7 = {
	L_SCRIPT,	// logic
	ST_LOGIC+ST_RECREATE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	256,	// xcood
	294,	// ycood
	89*64,	// frame
	0,	// cursorText
	0,	// mouseOn
	0,	// mouseOff
	0,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	0,	// mouseSize_x
	0,	// mouseSize_y
	0,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_BUBBLE7_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

Compact sc80_bubble9 = {
	L_SCRIPT,	// logic
	ST_LOGIC+ST_RECREATE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	286,	// xcood
	298,	// ycood
	89*64,	// frame
	0,	// cursorText
	0,	// mouseOn
	0,	// mouseOff
	0,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	0,	// mouseSize_x
	0,	// mouseSize_y
	0,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_BUBBLE9_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

uint16 sc80_sample_fall[] = {
	104*64,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	219,
	1,
	287,
	220,
	2,
	287,
	221,
	3,
	287,
	222,
	4,
	288,
	225,
	5,
	288,
	236,
	6,
	288,
	248,
	6,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	288,
	248,
	0,
	0
};

Compact sc80_rope = {
	L_SCRIPT,	// logic
	ST_LOGIC+ST_RECREATE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	236,	// xcood
	137,	// ycood
	99*64,	// frame
	49,	// cursorText
	STD_ON,	// mouseOn
	STD_OFF,	// mouseOff
	MEGA_CLICK,	// mouseClick
	(int16) 65531,	// mouseRel_x
	25,	// mouseRel_y
	239-231,	// mouseSize_x
	235-162,	// mouseSize_y
	SC80_ROPE_ACTION,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_ROPE_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

Compact sc80_bubble3 = {
	L_SCRIPT,	// logic
	ST_LOGIC+ST_RECREATE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	190,	// xcood
	314,	// ycood
	89*64,	// frame
	0,	// cursorText
	0,	// mouseOn
	0,	// mouseOff
	0,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	0,	// mouseSize_x
	0,	// mouseSize_y
	0,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_BUBBLE3_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

Compact sc80_bubble8 = {
	L_SCRIPT,	// logic
	ST_LOGIC+ST_RECREATE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	367,	// xcood
	319,	// ycood
	89*64,	// frame
	0,	// cursorText
	0,	// mouseOn
	0,	// mouseOff
	0,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	0,	// mouseSize_x
	0,	// mouseSize_y
	0,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_BUBBLE8_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

uint16 sc80_drop[] = {
	103*64,
	289,
	165,
	0,
	289,
	165,
	0,
	289,
	165,
	1,
	289,
	165,
	2,
	289,
	165,
	3,
	289,
	165,
	4,
	289,
	165,
	5,
	289,
	165,
	6,
	289,
	165,
	5,
	289,
	165,
	7,
	289,
	165,
	8,
	289,
	165,
	9,
	289,
	165,
	10,
	289,
	165,
	11,
	289,
	165,
	12,
	289,
	165,
	13,
	289,
	165,
	13,
	289,
	165,
	13,
	289,
	165,
	13,
	289,
	165,
	13,
	289,
	165,
	13,
	289,
	165,
	13,
	289,
	165,
	14,
	289,
	165,
	15,
	289,
	165,
	16,
	289,
	165,
	17,
	289,
	165,
	18,
	289,
	165,
	18,
	289,
	165,
	18,
	289,
	165,
	18,
	289,
	165,
	18,
	289,
	165,
	18,
	289,
	165,
	18,
	289,
	165,
	19,
	289,
	165,
	20,
	289,
	165,
	21,
	289,
	165,
	22,
	289,
	165,
	23,
	289,
	165,
	7,
	289,
	165,
	6,
	289,
	165,
	5,
	289,
	165,
	6,
	289,
	165,
	7,
	289,
	165,
	2,
	289,
	165,
	1,
	0
};

uint16 reset_79_80[] = {
	C_SCREEN,
	80,
	C_PLACE,
	ID_SC80_SPOUT,
	65535
};

Compact sc80_ladder = {
	0,	// logic
	ST_MOUSE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	310,	// xcood
	162,	// ycood
	0,	// frame
	20828,	// cursorText
	STD_ON,	// mouseOn
	STD_OFF,	// mouseOff
	MEGA_CLICK,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	316-310,	// mouseSize_x
	190-162,	// mouseSize_y
	SC80_LADDER_ACTION,	// actionScript
	0,
	0,
	0,
	0,
	0,
	{ 0, 0, 0 },
	0,
	0,
	0,
	0,
	0
};

uint16 sc804_palette[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	512,
	0,
	0,
	256,
	0,
	4,
	512,
	0,
	4,
	256,
	256,
	5,
	1536,
	0,
	7,
	9472,
	257,
	3,
	1281,
	0,
	257,
	2306,
	0,
	4,
	2048,
	0,
	515,
	1537,
	256,
	7,
	1024,
	769,
	12,
	768,
	1026,
	770,
	2563,
	0,
	9,
	1282,
	515,
	15,
	3328,
	0,
	267,
	1536,
	1283,
	1028,
	2820,
	769,
	1285,
	4357,
	0,
	1286,
	1031,
	1542,
	1542,
	4612,
	0,
	20,
	3840,
	770,
	2054,
	5126,
	257,
	1799,
	3080,
	1796,
	786,
	4353,
	1027,
	2311,
	2311,
	1800,
	534,
	2048,
	2312,
	1294,
	2568,
	2313,
	1043,
	6662,
	259,
	1304,
	5123,
	1798,
	2572,
	6667,
	1028,
	3082,
	5388,
	1544,
	1561,
	7173,
	516,
	2577,
	7690,
	773,
	3340,
	5389,
	3081,
	3343,
	8206,
	1030,
	2331,
	7178,
	1800,
	3093,
	3595,
	4112,
	3856,
	6671,
	2572,
	4368,
	9233,
	1545,
	2850,
	4873,
	4626,
	4881,
	7955,
	3085,
	4120,
	6926,
	3600,
	3108,
	8202,
	3343,
	3366,
	8971,
	3599,
	3625,
	7435,
	4628,
	4642,
	7696,
	5651,
	4391,
	10767,
	3858,
	4905,
	12049,
	3088,
	4653,
	9998,
	4628,
	5668,
	8211,
	5656,
	5166,
	11024,
	5398,
	5424,
	10769,
	5144,
	6948,
	11288,
	5656,
	7461,
	12569,
	4887,
	6957,
	12311,
	5915,
	7720,
	13088,
	5659,
	7727,
	13083,
	6173,
	7985,
	13340,
	6943,
	8750,
	10271,
	9764,
	8499,
	13341,
	8228,
	9780,
	11554,
	10537,
	13108,
	13877,
	14390,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	56,
	14336,
	0,
	0,
	12544,
	11565,
	9770,
	7462,
	6682,
	4888,
	4882,
	2827,
	779,
	4,
	0,
	0,
	11776,
	7718,
	7979,
	10006,
	3352,
	4127,
	6406,
	9,
	787,
	9472,
	257,
	6411,
	5642,
	5155,
	7695,
	2320,
	2067,
	3072,
	11520,
	11565,
	9764,
	6952,
	7707,
	8225,
	6443,
	8728,
	4375,
	4128,
	5899,
	1801,
	526,
	512,
	9774,
	11038,
	5663,
	6183,
	7949,
	1552,
	2329,
	4864,
	3,
	7734,
	11301,
	7445,
	3363,
	6677,
	3591,
	273,
	2056,
	512,
	1066,
	8196,
	0,
	22,
	3072,
	0,
	9774,
	11038,
	5663,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392,
	14392
};

Compact sc80_bubble12 = {
	L_SCRIPT,	// logic
	ST_LOGIC+ST_RECREATE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	331,	// xcood
	297,	// ycood
	89*64,	// frame
	0,	// cursorText
	0,	// mouseOn
	0,	// mouseOff
	0,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	0,	// mouseSize_x
	0,	// mouseSize_y
	0,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_BUBBLE12_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

Compact sc80_bubble6 = {
	L_SCRIPT,	// logic
	ST_LOGIC+ST_RECREATE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	391,	// xcood
	309,	// ycood
	89*64,	// frame
	0,	// cursorText
	0,	// mouseOn
	0,	// mouseOff
	0,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	0,	// mouseSize_x
	0,	// mouseSize_y
	0,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_BUBBLE6_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

Compact sc80_bubble5 = {
	L_SCRIPT,	// logic
	ST_LOGIC+ST_RECREATE,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	224,	// xcood
	302,	// ycood
	89*64,	// frame
	0,	// cursorText
	0,	// mouseOn
	0,	// mouseOff
	0,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	0,	// mouseSize_x
	0,	// mouseSize_y
	0,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_BUBBLE5_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

Compact sc80_goo = {
	L_SCRIPT,	// logic
	ST_LOGIC+ST_BACKGROUND,	// status
	0,	// sync
	80,	// screen
	0,	// place
	0,	// getToTable
	300,	// xcood
	261,	// ycood
	88*64,	// frame
	0,	// cursorText
	0,	// mouseOn
	0,	// mouseOff
	0,	// mouseClick
	0,	// mouseRel_x
	0,	// mouseRel_y
	0,	// mouseSize_x
	0,	// mouseSize_y
	0,	// actionScript
	0,	// upFlag
	0,	// downFlag
	0,	// getToFlag
	0,	// flag
	0,	// mood
	{ 0, 0, 0 },
	0,	// offset
	C_BASE_MODE,	// mode
	SC80_GOO_LOGIC,	// baseSub
	0,	// baseSub_off
	0
};

} // namespace SkyCompact

#endif

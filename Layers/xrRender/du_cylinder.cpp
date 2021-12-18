//---------------------------------------------------------------------------
#include "stdafx.h"
#pragma hdrstop

#include "du_cylinder.h"
//---------------------------------------------------------------------------
//#pragma package(smart_init)
Fvector du_cylinder_vertices[DU_CYLINDER_NUMVERTEX] = {
	{0.5000f, 0.0000f, 0.5000f}, // 0
	{0.5000f, -0.0000f, -0.5000f}, // 1
	{0.4330f, -0.2500f, -0.5000f}, // 2
	{0.4330f, -0.2500f, 0.5000f}, // 3
	{0.2500f, -0.4330f, -0.5000f}, // 4
	{0.2500f, -0.4330f, 0.5000f}, // 5
	{0.0000f, -0.5000f, -0.5000f}, // 6
	{-0.0000f, -0.5000f, 0.5000f}, // 7
	{-0.2500f, -0.4330f, -0.5000f}, // 8
	{-0.2500f, -0.4330f, 0.5000f}, // 9
	{-0.4330f, -0.2500f, -0.5000f}, // 10
	{-0.4330f, -0.2500f, 0.5000f}, // 11
	{-0.5000f, -0.0000f, -0.5000f}, // 12
	{-0.5000f, 0.0000f, 0.5000f}, // 13
	{-0.4330f, 0.2500f, -0.5000f}, // 14
	{-0.4330f, 0.2500f, 0.5000f}, // 15
	{-0.2500f, 0.4330f, -0.5000f}, // 16
	{-0.2500f, 0.4330f, 0.5000f}, // 17
	{0.0000f, 0.5000f, -0.5000f}, // 18
	{-0.0000f, 0.5000f, 0.5000f}, // 19
	{0.2500f, 0.4330f, -0.5000f}, // 20
	{0.2500f, 0.4330f, 0.5000f}, // 21
	{0.4330f, 0.2500f, -0.5000f}, // 22
	{0.4330f, 0.2500f, 0.5000f}, // 23
	{-0.0000f, 0.0000f, 0.5000f}, // 24
	{0.0000f, -0.0000f, -0.5000f}, // 25
};

u16 du_cylinder_faces[DU_CYLINDER_NUMFACES * 3] = {
	0, 2, 1,
	3, 2, 0,
	3, 4, 2,
	5, 4, 3,
	5, 6, 4,
	7, 6, 5,
	8, 6, 9,
	9, 6, 7,
	10, 8, 11,
	11, 8, 9,
	12, 10, 13,
	13, 10, 11,
	14, 12, 15,
	12, 13, 15,
	16, 14, 17,
	17, 14, 15,
	18, 16, 19,
	19, 16, 17,
	19, 20, 18,
	21, 20, 19,
	21, 22, 20,
	23, 22, 21,
	23, 1, 22,
	23, 0, 1,
	23, 24, 0,
	21, 24, 23,
	19, 24, 21,
	17, 24, 19,
	15, 24, 17,
	13, 24, 15,
	11, 24, 13,
	9, 24, 11,
	7, 24, 9,
	5, 24, 7,
	3, 24, 5,
	0, 24, 3,
	8, 25, 6,
	10, 25, 8,
	12, 25, 10,
	14, 25, 12,
	16, 25, 14,
	18, 25, 16,
	20, 25, 18,
	22, 25, 20,
	1, 25, 22,
	2, 25, 1,
	4, 25, 2,
	6, 25, 4,
};

u16 du_cylinder_lines[DU_CYLINDER_NUMLINES * 2] = {
	// tile
	0, 1,
	//	 2,	   3,
	4, 5,
	//	 6,	   7,
	8, 9,
	//	 10,  11,
	12, 13,
	//	 14,  15,
	16, 17,
	//	 18,  19,
	20, 21,
	//	 22,  23,
	// cape 0
	1, 2,
	2, 4,
	4, 6,
	6, 8,
	8, 10,
	10, 12,
	12, 14,
	14, 16,
	16, 18,
	18, 20,
	20, 22,
	22, 1,
	// cape1
	0, 3,
	3, 5,
	5, 7,
	7, 9,
	9, 11,
	11, 13,
	13, 15,
	15, 17,
	17, 19,
	19, 21,
	21, 23,
	23, 0,
};

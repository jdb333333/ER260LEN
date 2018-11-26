/* Partially based on original code for the KS0108 by Stephane Rey */

/**************************************************************************/
/*!
    @file     smallfonts.c
*/
/**************************************************************************/
#include <stdint.h>

#if 0
const uint8_t RByte[256] = {
    0x00, 0x80, 0x40, 0xc0, 0x20, 0xa0, 0x60, 0xe0, 0x10, 0x90, 0x50, 0xd0, 0x30, 0xb0, 0x70, 0xf0,
    0x08, 0x88, 0x48, 0xc8, 0x28, 0xa8, 0x68, 0xe8, 0x18, 0x98, 0x58, 0xd8, 0x38, 0xb8, 0x78, 0xf8,
    0x04, 0x84, 0x44, 0xc4, 0x24, 0xa4, 0x64, 0xe4, 0x14, 0x94, 0x54, 0xd4, 0x34, 0xb4, 0x74, 0xf4,
    0x0c, 0x8c, 0x4c, 0xcc, 0x2c, 0xac, 0x6c, 0xec, 0x1c, 0x9c, 0x5c, 0xdc, 0x3c, 0xbc, 0x7c, 0xfc,
    0x02, 0x82, 0x42, 0xc2, 0x22, 0xa2, 0x62, 0xe2, 0x12, 0x92, 0x52, 0xd2, 0x32, 0xb2, 0x72, 0xf2,
    0x0a, 0x8a, 0x4a, 0xca, 0x2a, 0xaa, 0x6a, 0xea, 0x1a, 0x9a, 0x5a, 0xda, 0x3a, 0xba, 0x7a, 0xfa,
    0x06, 0x86, 0x46, 0xc6, 0x26, 0xa6, 0x66, 0xe6, 0x16, 0x96, 0x56, 0xd6, 0x36, 0xb6, 0x76, 0xf6,
    0x0e, 0x8e, 0x4e, 0xce, 0x2e, 0xae, 0x6e, 0xee, 0x1e, 0x9e, 0x5e, 0xde, 0x3e, 0xbe, 0x7e, 0xfe,
    0x01, 0x81, 0x41, 0xc1, 0x21, 0xa1, 0x61, 0xe1, 0x11, 0x91, 0x51, 0xd1, 0x31, 0xb1, 0x71, 0xf1,
    0x09, 0x89, 0x49, 0xc9, 0x29, 0xa9, 0x69, 0xe9, 0x19, 0x99, 0x59, 0xd9, 0x39, 0xb9, 0x79, 0xf9,
    0x05, 0x85, 0x45, 0xc5, 0x25, 0xa5, 0x65, 0xe5, 0x15, 0x95, 0x55, 0xd5, 0x35, 0xb5, 0x75, 0xf5,
    0x0d, 0x8d, 0x4d, 0xcd, 0x2d, 0xad, 0x6d, 0xed, 0x1d, 0x9d, 0x5d, 0xdd, 0x3d, 0xbd, 0x7d, 0xfd,
    0x03, 0x83, 0x43, 0xc3, 0x23, 0xa3, 0x63, 0xe3, 0x13, 0x93, 0x53, 0xd3, 0x33, 0xb3, 0x73, 0xf3,
    0x0b, 0x8b, 0x4b, 0xcb, 0x2b, 0xab, 0x6b, 0xeb, 0x1b, 0x9b, 0x5b, 0xdb, 0x3b, 0xbb, 0x7b, 0xfb,
    0x07, 0x87, 0x47, 0xc7, 0x27, 0xa7, 0x67, 0xe7, 0x17, 0x97, 0x57, 0xd7, 0x37, 0xb7, 0x77, 0xf7,
    0x0f, 0x8f, 0x4f, 0xcf, 0x2f, 0xaf, 0x6f, 0xef, 0x1f, 0x9f, 0x5f, 0xdf, 0x3f, 0xbf, 0x7f, 0xff
};
#endif

/*
ASCII纵向取模8*16字库。1为亮。纵向取模（8位）(取完一横后再取下一横).
每个字节代表一列8个像素值，每个ASCII由8*16/8=16个字节存储，前8个字节为上半部分值，
后8个字节为下半部分值。共95个，从32(空格)到126。ASCII816[0]为空格。
ASCII值减32即为数组二维下标。
*/
const uint8_t ASCIITAB_8x16[] = {
#if 1

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//
0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xCC,0x0C,0x00,0x00,0x00,//!
0x00,0x08,0x30,0x60,0x08,0x30,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//"
0x02,0x03,0x1E,0x02,0x03,0x1E,0x02,0x00,0x20,0xFC,0x20,0x20,0xFC,0x20,0x20,0x00,//#
0x00,0x0E,0x11,0x3F,0x10,0x0C,0x00,0x00,0x00,0x18,0x04,0xFF,0x84,0x78,0x00,0x00,//$
0x0F,0x10,0x0F,0x00,0x07,0x18,0x00,0x00,0x00,0x84,0x38,0xC0,0x78,0x84,0x78,0x00,//%
0x00,0x0F,0x10,0x11,0x0E,0x00,0x00,0x00,0x78,0x84,0xC4,0x24,0x98,0xE4,0x84,0x08,//&
0x08,0x68,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//'
0x00,0x00,0x00,0x07,0x18,0x20,0x40,0x00,0x00,0x00,0x00,0xE0,0x18,0x04,0x02,0x00,//(
0x00,0x40,0x20,0x18,0x07,0x00,0x00,0x00,0x00,0x02,0x04,0x18,0xE0,0x00,0x00,0x00,//)
0x02,0x02,0x01,0x0F,0x01,0x02,0x02,0x00,0x40,0x40,0x80,0xF0,0x80,0x40,0x40,0x00,//*
0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0xF8,0x80,0x80,0x80,0x00,//+
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x0D,0x0E,0x00,0x00,0x00,0x00,0x00,//,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,//-
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,//.
0x00,0x00,0x00,0x00,0x01,0x06,0x18,0x20,0x00,0x06,0x18,0x60,0x80,0x00,0x00,0x00,///
0x00,0x07,0x08,0x10,0x10,0x08,0x07,0x00,0x00,0xF0,0x08,0x04,0x04,0x08,0xF0,0x00,//0
0x00,0x08,0x08,0x1F,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xFC,0x04,0x04,0x00,0x00,//1
0x00,0x0E,0x10,0x10,0x10,0x11,0x0E,0x00,0x00,0x0C,0x14,0x24,0x44,0x84,0x0C,0x00,//2
0x00,0x0C,0x10,0x11,0x11,0x12,0x0C,0x00,0x00,0x18,0x04,0x04,0x04,0x88,0x70,0x00,//3
0x00,0x00,0x03,0x04,0x08,0x1F,0x00,0x00,0x00,0xE0,0x20,0x24,0x24,0xFC,0x24,0x00,//4
0x00,0x1F,0x10,0x11,0x11,0x10,0x10,0x00,0x00,0x98,0x84,0x04,0x04,0x88,0x70,0x00,//5
0x00,0x07,0x08,0x11,0x11,0x18,0x00,0x00,0x00,0xF0,0x88,0x04,0x04,0x88,0x70,0x00,//6
0x00,0x1C,0x10,0x10,0x13,0x1C,0x10,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,//7
0x00,0x0E,0x11,0x10,0x10,0x11,0x0E,0x00,0x00,0x38,0x44,0x84,0x84,0x44,0x38,0x00,//8
0x00,0x07,0x08,0x10,0x10,0x08,0x07,0x00,0x00,0x00,0x8C,0x44,0x44,0x88,0xF0,0x00,//9
0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x00,//:
0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x06,0x00,0x00,0x00,0x00,//;
0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x04,0x00,//<
0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00,//=
0x00,0x10,0x08,0x04,0x02,0x01,0x00,0x00,0x00,0x04,0x08,0x10,0x20,0x40,0x80,0x00,//>
0x00,0x0E,0x12,0x10,0x10,0x10,0x0F,0x00,0x00,0x00,0x00,0x0C,0x6C,0x80,0x00,0x00,//?
0x03,0x0C,0x13,0x14,0x17,0x08,0x07,0x00,0xE0,0x18,0xE4,0x24,0xC4,0x28,0xD0,0x00,//@
0x00,0x00,0x03,0x1C,0x07,0x00,0x00,0x00,0x04,0x3C,0xC4,0x40,0x40,0xE4,0x1C,0x04,//A
0x10,0x1F,0x11,0x11,0x11,0x0E,0x00,0x00,0x04,0xFC,0x04,0x04,0x04,0x88,0x70,0x00,//B
0x03,0x0C,0x10,0x10,0x10,0x10,0x1C,0x00,0xE0,0x18,0x04,0x04,0x04,0x08,0x10,0x00,//C
0x10,0x1F,0x10,0x10,0x10,0x08,0x07,0x00,0x04,0xFC,0x04,0x04,0x04,0x08,0xF0,0x00,//D
0x10,0x1F,0x11,0x11,0x17,0x10,0x08,0x00,0x04,0xFC,0x04,0x04,0xC4,0x04,0x18,0x00,//E
0x10,0x1F,0x11,0x11,0x17,0x10,0x08,0x00,0x04,0xFC,0x04,0x00,0xC0,0x00,0x00,0x00,//F
0x03,0x0C,0x10,0x10,0x10,0x1C,0x00,0x00,0xE0,0x18,0x04,0x04,0x44,0x78,0x40,0x00,//G
0x10,0x1F,0x10,0x00,0x00,0x10,0x1F,0x10,0x04,0xFC,0x84,0x80,0x80,0x84,0xFC,0x04,//H
0x00,0x10,0x10,0x1F,0x10,0x10,0x00,0x00,0x00,0x04,0x04,0xFC,0x04,0x04,0x00,0x00,//I
0x00,0x00,0x10,0x10,0x1F,0x10,0x10,0x00,0x03,0x01,0x01,0x01,0xFE,0x00,0x00,0x00,//J
0x10,0x1F,0x11,0x03,0x14,0x18,0x10,0x00,0x04,0xFC,0x04,0x80,0x64,0x1C,0x04,0x00,//K
0x10,0x1F,0x10,0x00,0x00,0x00,0x00,0x00,0x04,0xFC,0x04,0x04,0x04,0x04,0x0C,0x00,//L
0x10,0x1F,0x1F,0x00,0x1F,0x1F,0x10,0x00,0x04,0xFC,0x00,0xFC,0x00,0xFC,0x04,0x00,//M
0x10,0x1F,0x0C,0x03,0x00,0x10,0x1F,0x10,0x04,0xFC,0x04,0x00,0xE0,0x18,0xFC,0x00,//N
0x07,0x08,0x10,0x10,0x10,0x08,0x07,0x00,0xF0,0x08,0x04,0x04,0x04,0x08,0xF0,0x00,//O
0x10,0x1F,0x10,0x10,0x10,0x10,0x0F,0x00,0x04,0xFC,0x84,0x80,0x80,0x80,0x00,0x00,//P
0x07,0x08,0x10,0x10,0x10,0x08,0x07,0x00,0xF0,0x18,0x24,0x24,0x1C,0x0A,0xF2,0x00,//Q
0x10,0x1F,0x11,0x11,0x11,0x11,0x0E,0x00,0x04,0xFC,0x04,0x00,0xC0,0x30,0x0C,0x04,//R
0x00,0x0E,0x11,0x10,0x10,0x10,0x1C,0x00,0x00,0x1C,0x04,0x84,0x84,0x44,0x38,0x00,//S
0x18,0x10,0x10,0x1F,0x10,0x10,0x18,0x00,0x00,0x00,0x04,0xFC,0x04,0x00,0x00,0x00,//T
0x10,0x1F,0x10,0x00,0x00,0x10,0x1F,0x10,0x00,0xF8,0x04,0x04,0x04,0x04,0xF8,0x00,//U
0x10,0x1E,0x11,0x00,0x00,0x13,0x1C,0x10,0x00,0x00,0xE0,0x1C,0x70,0x80,0x00,0x00,//V
0x1F,0x10,0x00,0x1F,0x00,0x10,0x1F,0x00,0xC0,0x3C,0xE0,0x00,0xE0,0x3C,0xC0,0x00,//W
0x10,0x18,0x16,0x01,0x01,0x16,0x18,0x10,0x04,0x0C,0x34,0xC0,0xC0,0x34,0x0C,0x04,//X
0x10,0x1C,0x13,0x00,0x13,0x1C,0x10,0x00,0x00,0x00,0x04,0xFC,0x04,0x00,0x00,0x00,//Y
0x08,0x10,0x10,0x10,0x13,0x1C,0x10,0x00,0x04,0x1C,0x64,0x84,0x04,0x04,0x18,0x00,//Z
0x00,0x00,0x00,0x7F,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0xFE,0x02,0x02,0x02,0x00,//[
0x00,0x30,0x0C,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x60,0x1C,0x03,0x00,//\/
0x00,0x40,0x40,0x40,0x7F,0x00,0x00,0x00,0x00,0x02,0x02,0x02,0xFE,0x00,0x00,0x00,//]
0x00,0x00,0x20,0x40,0x40,0x40,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//^
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,//_
0x00,0x40,0x40,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//`
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x98,0x24,0x44,0x44,0x44,0xFC,0x04,//a
0x10,0x1F,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0xFC,0x88,0x04,0x04,0x88,0x70,0x00,//b
0x00,0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x70,0x88,0x04,0x04,0x04,0x88,0x00,//c
0x00,0x00,0x00,0x01,0x01,0x11,0x1F,0x00,0x00,0x70,0x88,0x04,0x04,0x08,0xFC,0x04,//d
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0xF8,0x44,0x44,0x44,0x44,0xC8,0x00,//e
0x00,0x01,0x01,0x0F,0x11,0x11,0x11,0x18,0x00,0x04,0x04,0xFC,0x04,0x04,0x00,0x00,//f
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0xD6,0x29,0x29,0x29,0xC9,0x06,0x00,//g
0x10,0x1F,0x00,0x01,0x01,0x01,0x00,0x00,0x04,0xFC,0x84,0x00,0x00,0x04,0xFC,0x04,//h
0x00,0x01,0x19,0x19,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xFC,0x04,0x04,0x00,0x00,//i
0x00,0x00,0x00,0x01,0x19,0x19,0x00,0x00,0x00,0x03,0x01,0x01,0x01,0xFE,0x00,0x00,//j
0x10,0x1F,0x00,0x00,0x01,0x01,0x01,0x00,0x04,0xFC,0x24,0x40,0xB4,0x0C,0x04,0x00,//k
0x00,0x10,0x10,0x1F,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xFC,0x04,0x04,0x00,0x00,//l
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x04,0xFC,0x04,0x00,0xFC,0x04,0x00,0xFC,//m
0x01,0x01,0x00,0x01,0x01,0x01,0x00,0x00,0x04,0xFC,0x84,0x00,0x00,0x04,0xFC,0x04,//n
0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0xF8,0x04,0x04,0x04,0x04,0xF8,0x00,//o
0x01,0x01,0x00,0x01,0x01,0x00,0x00,0x00,0x01,0xFF,0x85,0x04,0x04,0x88,0x70,0x00,//p
0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,0x70,0x88,0x04,0x04,0x05,0xFF,0x01,//q
0x01,0x01,0x01,0x00,0x01,0x01,0x01,0x00,0x04,0x04,0xFC,0x84,0x04,0x00,0x80,0x00,//r
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0xCC,0x24,0x24,0x24,0x24,0x98,0x00,//s
0x00,0x01,0x01,0x07,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0xF8,0x04,0x04,0x00,0x00,//t
0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0xF8,0x04,0x04,0x04,0x08,0xFC,0x04,//u
0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x00,0x80,0x70,0x0C,0x10,0x60,0x80,0x00,//v
0x01,0x01,0x00,0x01,0x00,0x01,0x01,0x01,0xF0,0x0C,0x30,0xC0,0x30,0x0C,0xF0,0x00,//w
0x00,0x01,0x01,0x00,0x01,0x01,0x01,0x00,0x00,0x04,0x8C,0x74,0x70,0x8C,0x04,0x00,//x
0x01,0x01,0x01,0x00,0x00,0x01,0x01,0x01,0x01,0x81,0x71,0x0E,0x18,0x60,0x80,0x00,//y
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x84,0x0C,0x34,0x44,0x84,0x0C,0x00,//z
0x00,0x00,0x00,0x00,0x01,0x3E,0x40,0x40,0x00,0x00,0x00,0x00,0x00,0xFC,0x02,0x02,//{
0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,//|
0x00,0x40,0x40,0x3E,0x01,0x00,0x00,0x00,0x00,0x02,0x02,0xFC,0x00,0x00,0x00,0x00,//}
0x0C,0x18,0x10,0x18,0x0C,0x04,0x0C,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//~
0x00,0x00,0x00,0x03,0x0C,0x30,0x00,0x00,0x0C,0x30,0xC0,0x00,0x00,0x00,0x0C,0x0C,///. 0x00,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x00,0x00,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0x00,//
0x02,0x0f,0x12,0x22,0x22,0x22,0x22,0x12,0x20,0xf8,0x24,0x22,0x22,0x22,0x22,0x24,//�

#if !defined(CASE_FORHANZI)//扩展字符集(反显字符）

~0x00,~0x00,~0x00,~0x1F,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0xCC,~0x0C,~0x00,~0x00,~0x00,//!
~0x00,~0x08,~0x30,~0x60,~0x08,~0x30,~0x60,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,//"
~0x02,~0x03,~0x1E,~0x02,~0x03,~0x1E,~0x02,~0x00,~0x20,~0xFC,~0x20,~0x20,~0xFC,~0x20,~0x20,~0x00,//#
~0x00,~0x0E,~0x11,~0x3F,~0x10,~0x0C,~0x00,~0x00,~0x00,~0x18,~0x04,~0xFF,~0x84,~0x78,~0x00,~0x00,//$
~0x0F,~0x10,~0x0F,~0x00,~0x07,~0x18,~0x00,~0x00,~0x00,~0x84,~0x38,~0xC0,~0x78,~0x84,~0x78,~0x00,//%
~0x00,~0x0F,~0x10,~0x11,~0x0E,~0x00,~0x00,~0x00,~0x78,~0x84,~0xC4,~0x24,~0x98,~0xE4,~0x84,~0x08,//&
~0x08,~0x68,~0x70,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,//'
~0x00,~0x00,~0x00,~0x07,~0x18,~0x20,~0x40,~0x00,~0x00,~0x00,~0x00,~0xE0,~0x18,~0x04,~0x02,~0x00,//(
~0x00,~0x40,~0x20,~0x18,~0x07,~0x00,~0x00,~0x00,~0x00,~0x02,~0x04,~0x18,~0xE0,~0x00,~0x00,~0x00,//)
~0x02,~0x02,~0x01,~0x0F,~0x01,~0x02,~0x02,~0x00,~0x40,~0x40,~0x80,~0xF0,~0x80,~0x40,~0x40,~0x00,//*
~0x00,~0x00,~0x00,~0x0F,~0x00,~0x00,~0x00,~0x00,~0x80,~0x80,~0x80,~0xF8,~0x80,~0x80,~0x80,~0x00,//+
~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x01,~0x0D,~0x0E,~0x00,~0x00,~0x00,~0x00,~0x00,//,
~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x80,~0x80,~0x80,~0x80,~0x80,~0x80,~0x80,//-
~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x0C,~0x0C,~0x00,~0x00,~0x00,~0x00,~0x00,//.
~0x00,~0x00,~0x00,~0x00,~0x01,~0x06,~0x18,~0x20,~0x00,~0x06,~0x18,~0x60,~0x80,~0x00,~0x00,~0x00,///
~0x00,~0x07,~0x08,~0x10,~0x10,~0x08,~0x07,~0x00,~0x00,~0xF0,~0x08,~0x04,~0x04,~0x08,~0xF0,~0x00,//0
~0x00,~0x08,~0x08,~0x1F,~0x00,~0x00,~0x00,~0x00,~0x00,~0x04,~0x04,~0xFC,~0x04,~0x04,~0x00,~0x00,//1
~0x00,~0x0E,~0x10,~0x10,~0x10,~0x11,~0x0E,~0x00,~0x00,~0x0C,~0x14,~0x24,~0x44,~0x84,~0x0C,~0x00,//2
~0x00,~0x0C,~0x10,~0x11,~0x11,~0x12,~0x0C,~0x00,~0x00,~0x18,~0x04,~0x04,~0x04,~0x88,~0x70,~0x00,//3
~0x00,~0x00,~0x03,~0x04,~0x08,~0x1F,~0x00,~0x00,~0x00,~0xE0,~0x20,~0x24,~0x24,~0xFC,~0x24,~0x00,//4
~0x00,~0x1F,~0x10,~0x11,~0x11,~0x10,~0x10,~0x00,~0x00,~0x98,~0x84,~0x04,~0x04,~0x88,~0x70,~0x00,//5
~0x00,~0x07,~0x08,~0x11,~0x11,~0x18,~0x00,~0x00,~0x00,~0xF0,~0x88,~0x04,~0x04,~0x88,~0x70,~0x00,//6
~0x00,~0x1C,~0x10,~0x10,~0x13,~0x1C,~0x10,~0x00,~0x00,~0x00,~0x00,~0xFC,~0x00,~0x00,~0x00,~0x00,//7
~0x00,~0x0E,~0x11,~0x10,~0x10,~0x11,~0x0E,~0x00,~0x00,~0x38,~0x44,~0x84,~0x84,~0x44,~0x38,~0x00,//8
~0x00,~0x07,~0x08,~0x10,~0x10,~0x08,~0x07,~0x00,~0x00,~0x00,~0x8C,~0x44,~0x44,~0x88,~0xF0,~0x00,//9
~0x00,~0x00,~0x00,~0x03,~0x03,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x0C,~0x0C,~0x00,~0x00,~0x00,//:
~0x00,~0x00,~0x00,~0x01,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x01,~0x06,~0x00,~0x00,~0x00,~0x00,//;
~0x00,~0x00,~0x01,~0x02,~0x04,~0x08,~0x10,~0x00,~0x00,~0x80,~0x40,~0x20,~0x10,~0x08,~0x04,~0x00,//<
~0x02,~0x02,~0x02,~0x02,~0x02,~0x02,~0x02,~0x00,~0x20,~0x20,~0x20,~0x20,~0x20,~0x20,~0x20,~0x00,//=
~0x00,~0x10,~0x08,~0x04,~0x02,~0x01,~0x00,~0x00,~0x00,~0x04,~0x08,~0x10,~0x20,~0x40,~0x80,~0x00,//>
~0x00,~0x0E,~0x12,~0x10,~0x10,~0x10,~0x0F,~0x00,~0x00,~0x00,~0x00,~0x0C,~0x6C,~0x80,~0x00,~0x00,//?
~0x03,~0x0C,~0x13,~0x14,~0x17,~0x08,~0x07,~0x00,~0xE0,~0x18,~0xE4,~0x24,~0xC4,~0x28,~0xD0,~0x00,//@
~0x00,~0x00,~0x03,~0x1C,~0x07,~0x00,~0x00,~0x00,~0x04,~0x3C,~0xC4,~0x40,~0x40,~0xE4,~0x1C,~0x04,//A
~0x10,~0x1F,~0x11,~0x11,~0x11,~0x0E,~0x00,~0x00,~0x04,~0xFC,~0x04,~0x04,~0x04,~0x88,~0x70,~0x00,//B
~0x03,~0x0C,~0x10,~0x10,~0x10,~0x10,~0x1C,~0x00,~0xE0,~0x18,~0x04,~0x04,~0x04,~0x08,~0x10,~0x00,//C
~0x10,~0x1F,~0x10,~0x10,~0x10,~0x08,~0x07,~0x00,~0x04,~0xFC,~0x04,~0x04,~0x04,~0x08,~0xF0,~0x00,//D
~0x10,~0x1F,~0x11,~0x11,~0x17,~0x10,~0x08,~0x00,~0x04,~0xFC,~0x04,~0x04,~0xC4,~0x04,~0x18,~0x00,//E
~0x10,~0x1F,~0x11,~0x11,~0x17,~0x10,~0x08,~0x00,~0x04,~0xFC,~0x04,~0x00,~0xC0,~0x00,~0x00,~0x00,//F
~0x03,~0x0C,~0x10,~0x10,~0x10,~0x1C,~0x00,~0x00,~0xE0,~0x18,~0x04,~0x04,~0x44,~0x78,~0x40,~0x00,//G
~0x10,~0x1F,~0x10,~0x00,~0x00,~0x10,~0x1F,~0x10,~0x04,~0xFC,~0x84,~0x80,~0x80,~0x84,~0xFC,~0x04,//H
~0x00,~0x10,~0x10,~0x1F,~0x10,~0x10,~0x00,~0x00,~0x00,~0x04,~0x04,~0xFC,~0x04,~0x04,~0x00,~0x00,//I
~0x00,~0x00,~0x10,~0x10,~0x1F,~0x10,~0x10,~0x00,~0x03,~0x01,~0x01,~0x01,~0xFE,~0x00,~0x00,~0x00,//J
~0x10,~0x1F,~0x11,~0x03,~0x14,~0x18,~0x10,~0x00,~0x04,~0xFC,~0x04,~0x80,~0x64,~0x1C,~0x04,~0x00,//K
~0x10,~0x1F,~0x10,~0x00,~0x00,~0x00,~0x00,~0x00,~0x04,~0xFC,~0x04,~0x04,~0x04,~0x04,~0x0C,~0x00,//L
~0x10,~0x1F,~0x1F,~0x00,~0x1F,~0x1F,~0x10,~0x00,~0x04,~0xFC,~0x00,~0xFC,~0x00,~0xFC,~0x04,~0x00,//M
~0x10,~0x1F,~0x0C,~0x03,~0x00,~0x10,~0x1F,~0x10,~0x04,~0xFC,~0x04,~0x00,~0xE0,~0x18,~0xFC,~0x00,//N
~0x07,~0x08,~0x10,~0x10,~0x10,~0x08,~0x07,~0x00,~0xF0,~0x08,~0x04,~0x04,~0x04,~0x08,~0xF0,~0x00,//O
~0x10,~0x1F,~0x10,~0x10,~0x10,~0x10,~0x0F,~0x00,~0x04,~0xFC,~0x84,~0x80,~0x80,~0x80,~0x00,~0x00,//P
~0x07,~0x08,~0x10,~0x10,~0x10,~0x08,~0x07,~0x00,~0xF0,~0x18,~0x24,~0x24,~0x1C,~0x0A,~0xF2,~0x00,//Q
~0x10,~0x1F,~0x11,~0x11,~0x11,~0x11,~0x0E,~0x00,~0x04,~0xFC,~0x04,~0x00,~0xC0,~0x30,~0x0C,~0x04,//R
~0x00,~0x0E,~0x11,~0x10,~0x10,~0x10,~0x1C,~0x00,~0x00,~0x1C,~0x04,~0x84,~0x84,~0x44,~0x38,~0x00,//S
~0x18,~0x10,~0x10,~0x1F,~0x10,~0x10,~0x18,~0x00,~0x00,~0x00,~0x04,~0xFC,~0x04,~0x00,~0x00,~0x00,//T
~0x10,~0x1F,~0x10,~0x00,~0x00,~0x10,~0x1F,~0x10,~0x00,~0xF8,~0x04,~0x04,~0x04,~0x04,~0xF8,~0x00,//U
~0x10,~0x1E,~0x11,~0x00,~0x00,~0x13,~0x1C,~0x10,~0x00,~0x00,~0xE0,~0x1C,~0x70,~0x80,~0x00,~0x00,//V
~0x1F,~0x10,~0x00,~0x1F,~0x00,~0x10,~0x1F,~0x00,~0xC0,~0x3C,~0xE0,~0x00,~0xE0,~0x3C,~0xC0,~0x00,//W
~0x10,~0x18,~0x16,~0x01,~0x01,~0x16,~0x18,~0x10,~0x04,~0x0C,~0x34,~0xC0,~0xC0,~0x34,~0x0C,~0x04,//X
~0x10,~0x1C,~0x13,~0x00,~0x13,~0x1C,~0x10,~0x00,~0x00,~0x00,~0x04,~0xFC,~0x04,~0x00,~0x00,~0x00,//Y
~0x08,~0x10,~0x10,~0x10,~0x13,~0x1C,~0x10,~0x00,~0x04,~0x1C,~0x64,~0x84,~0x04,~0x04,~0x18,~0x00,//Z
~0x00,~0x00,~0x00,~0x7F,~0x40,~0x40,~0x40,~0x00,~0x00,~0x00,~0x00,~0xFE,~0x02,~0x02,~0x02,~0x00,//[
~0x00,~0x30,~0x0C,~0x03,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x80,~0x60,~0x1C,~0x03,~0x00,//\/
~0x00,~0x40,~0x40,~0x40,~0x7F,~0x00,~0x00,~0x00,~0x00,~0x02,~0x02,~0x02,~0xFE,~0x00,~0x00,~0x00,//]
~0x00,~0x00,~0x20,~0x40,~0x40,~0x40,~0x20,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,//^
~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x01,~0x01,~0x01,~0x01,~0x01,~0x01,~0x01,~0x01,//_
~0x00,~0x40,~0x40,~0x20,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,//`
~0x00,~0x00,~0x01,~0x01,~0x01,~0x01,~0x00,~0x00,~0x00,~0x98,~0x24,~0x44,~0x44,~0x44,~0xFC,~0x04,//a
~0x10,~0x1F,~0x00,~0x01,~0x01,~0x00,~0x00,~0x00,~0x00,~0xFC,~0x88,~0x04,~0x04,~0x88,~0x70,~0x00,//b
~0x00,~0x00,~0x00,~0x01,~0x01,~0x01,~0x00,~0x00,~0x00,~0x70,~0x88,~0x04,~0x04,~0x04,~0x88,~0x00,//c
~0x00,~0x00,~0x00,~0x01,~0x01,~0x11,~0x1F,~0x00,~0x00,~0x70,~0x88,~0x04,~0x04,~0x08,~0xFC,~0x04,//d
~0x00,~0x00,~0x01,~0x01,~0x01,~0x01,~0x00,~0x00,~0x00,~0xF8,~0x44,~0x44,~0x44,~0x44,~0xC8,~0x00,//e
~0x00,~0x01,~0x01,~0x0F,~0x11,~0x11,~0x11,~0x18,~0x00,~0x04,~0x04,~0xFC,~0x04,~0x04,~0x00,~0x00,//f
~0x00,~0x00,~0x01,~0x01,~0x01,~0x01,~0x01,~0x00,~0x00,~0xD6,~0x29,~0x29,~0x29,~0xC9,~0x06,~0x00,//g
~0x10,~0x1F,~0x00,~0x01,~0x01,~0x01,~0x00,~0x00,~0x04,~0xFC,~0x84,~0x00,~0x00,~0x04,~0xFC,~0x04,//h
~0x00,~0x01,~0x19,~0x19,~0x00,~0x00,~0x00,~0x00,~0x00,~0x04,~0x04,~0xFC,~0x04,~0x04,~0x00,~0x00,//i
~0x00,~0x00,~0x00,~0x01,~0x19,~0x19,~0x00,~0x00,~0x00,~0x03,~0x01,~0x01,~0x01,~0xFE,~0x00,~0x00,//j
~0x10,~0x1F,~0x00,~0x00,~0x01,~0x01,~0x01,~0x00,~0x04,~0xFC,~0x24,~0x40,~0xB4,~0x0C,~0x04,~0x00,//k
~0x00,~0x10,~0x10,~0x1F,~0x00,~0x00,~0x00,~0x00,~0x00,~0x04,~0x04,~0xFC,~0x04,~0x04,~0x00,~0x00,//l
~0x01,~0x01,~0x01,~0x01,~0x01,~0x01,~0x01,~0x00,~0x04,~0xFC,~0x04,~0x00,~0xFC,~0x04,~0x00,~0xFC,//m
~0x01,~0x01,~0x00,~0x01,~0x01,~0x01,~0x00,~0x00,~0x04,~0xFC,~0x84,~0x00,~0x00,~0x04,~0xFC,~0x04,//n
~0x00,~0x00,~0x01,~0x01,~0x01,~0x01,~0x00,~0x00,~0x00,~0xF8,~0x04,~0x04,~0x04,~0x04,~0xF8,~0x00,//o
~0x01,~0x01,~0x00,~0x01,~0x01,~0x00,~0x00,~0x00,~0x01,~0xFF,~0x85,~0x04,~0x04,~0x88,~0x70,~0x00,//p
~0x00,~0x00,~0x00,~0x01,~0x01,~0x01,~0x01,~0x00,~0x00,~0x70,~0x88,~0x04,~0x04,~0x05,~0xFF,~0x01,//q
~0x01,~0x01,~0x01,~0x00,~0x01,~0x01,~0x01,~0x00,~0x04,~0x04,~0xFC,~0x84,~0x04,~0x00,~0x80,~0x00,//r
~0x00,~0x00,~0x01,~0x01,~0x01,~0x01,~0x01,~0x00,~0x00,~0xCC,~0x24,~0x24,~0x24,~0x24,~0x98,~0x00,//s
~0x00,~0x01,~0x01,~0x07,~0x01,~0x01,~0x00,~0x00,~0x00,~0x00,~0x00,~0xF8,~0x04,~0x04,~0x00,~0x00,//t
~0x01,~0x01,~0x00,~0x00,~0x00,~0x01,~0x01,~0x00,~0x00,~0xF8,~0x04,~0x04,~0x04,~0x08,~0xFC,~0x04,//u
~0x01,~0x01,~0x01,~0x00,~0x00,~0x01,~0x01,~0x01,~0x00,~0x80,~0x70,~0x0C,~0x10,~0x60,~0x80,~0x00,//v
~0x01,~0x01,~0x00,~0x01,~0x00,~0x01,~0x01,~0x01,~0xF0,~0x0C,~0x30,~0xC0,~0x30,~0x0C,~0xF0,~0x00,//w
~0x00,~0x01,~0x01,~0x00,~0x01,~0x01,~0x01,~0x00,~0x00,~0x04,~0x8C,~0x74,~0x70,~0x8C,~0x04,~0x00,//x
~0x01,~0x01,~0x01,~0x00,~0x00,~0x01,~0x01,~0x01,~0x01,~0x81,~0x71,~0x0E,~0x18,~0x60,~0x80,~0x00,//y
~0x00,~0x01,~0x01,~0x01,~0x01,~0x01,~0x01,~0x00,~0x00,~0x84,~0x0C,~0x34,~0x44,~0x84,~0x0C,~0x00,//z
~0x00,~0x00,~0x00,~0x00,~0x01,~0x3E,~0x40,~0x40,~0x00,~0x00,~0x00,~0x00,~0x00,~0xFC,~0x02,~0x02,//{
~0x00,~0x00,~0x00,~0x00,~0xFF,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0xFF,~0x00,~0x00,~0x00,//|
~0x00,~0x40,~0x40,~0x3E,~0x01,~0x00,~0x00,~0x00,~0x00,~0x02,~0x02,~0xFC,~0x00,~0x00,~0x00,~0x00,//}
~0x0C,~0x18,~0x10,~0x18,~0x0C,~0x04,~0x0C,~0x18,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,~0x00,//~
~0x00,~0x1F,~0x1F,~0x1F,~0x1F,~0x1F,~0x1F,~0x00,~0x00,~0xF0,~0xF0,~0xF0,~0xF0,~0xF0,~0xF0,~0x00,//

#endif

#else
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//
0x00,0x00,0x0E,0x1F,0x1F,0x0E,0x00,0x00,0x00,0x00,0x00,0xB0,0xB0,0x00,0x00,0x00,//!
0x00,0x1C,0x1C,0x00,0x00,0x1C,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//"
0x00,0x04,0x1F,0x1F,0x04,0x1F,0x1F,0x04,0x00,0x40,0xF0,0xF0,0x40,0xF0,0xF0,0x40,//#
0x00,0x0C,0x1E,0x73,0x71,0x18,0x08,0x00,0x00,0x20,0x30,0x1C,0x9C,0xF0,0x60,0x00,//$
0x18,0x3C,0x24,0x3D,0x1B,0x06,0x0C,0x00,0x00,0x60,0xC0,0xB0,0x78,0x48,0x78,0x30,//%
0x00,0x0D,0x1F,0x12,0x1E,0x0C,0x00,0x00,0x00,0xE0,0xF0,0x10,0x90,0xE0,0xF0,0x90,//&
0x00,0x00,0x00,0x1C,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//'
0x00,0x00,0x03,0x0F,0x1C,0x10,0x00,0x00,0x00,0x00,0xE0,0xF8,0x1C,0x04,0x00,0x00,//(
0x00,0x00,0x10,0x1C,0x0F,0x03,0x00,0x00,0x00,0x00,0x04,0x1C,0xF8,0xE0,0x00,0x00,//)
0x00,0x01,0x05,0x07,0x03,0x07,0x05,0x01,0x00,0x00,0x40,0xC0,0x80,0xC0,0x40,0x00,// *
0x00,0x01,0x01,0x07,0x07,0x01,0x01,0x00,0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,//+
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0x3C,0x38,0x00,0x00,//,
0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//-
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x30,0x00,0x00,//.
0x00,0x00,0x00,0x01,0x07,0x1E,0x18,0x00,0x00,0x18,0x78,0xE0,0x80,0x00,0x00,0x00,///
0x00,0x00,0x0F,0x1F,0x10,0x16,0x1F,0x0F,0x00,0x00,0xE0,0xF0,0xD0,0x10,0xF0,0xE0,//0
0x00,0x04,0x04,0x0C,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,//1
0x00,0x0C,0x1C,0x10,0x11,0x1F,0x0E,0x00,0x00,0x30,0x70,0xD0,0x90,0x10,0x10,0x00,//2
0x00,0x0C,0x1C,0x11,0x11,0x1F,0x0E,0x00,0x00,0x60,0x70,0x10,0x10,0xF0,0xE0,0x00,//3
0x00,0x00,0x1F,0x1F,0x00,0x07,0x07,0x00,0x00,0xC0,0xC0,0x40,0x40,0xF0,0xF0,0x40,//4
0x00,0x1F,0x1F,0x11,0x11,0x11,0x10,0x00,0x00,0x10,0x10,0x10,0x30,0xE0,0xC0,0x00,//5
0x00,0x03,0x07,0x1E,0x1A,0x13,0x01,0x00,0x00,0xE0,0xF0,0x10,0x10,0xF0,0xE0,0x00,//6
0x00,0x10,0x10,0x11,0x17,0x1E,0x18,0x00,0x00,0x00,0x70,0xF0,0x80,0x00,0x00,0x00,//7
0x00,0x0E,0x1F,0x13,0x11,0x1F,0x0E,0x00,0x00,0xE0,0xF0,0x10,0x90,0xF0,0xE0,0x00,//8
0x00,0x0F,0x1F,0x10,0x10,0x1F,0x0F,0x00,0x00,0x00,0x90,0xB0,0xF0,0xC0,0x80,0x00,//9
0x00,0x00,0x00,0x06,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x30,0x00,0x00,//:
0x00,0x00,0x00,0x06,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x34,0x3C,0x38,0x00,0x00,//;
0x00,0x01,0x03,0x06,0x0C,0x18,0x10,0x00,0x00,0x00,0x80,0xC0,0x60,0x30,0x10,0x00,//<
0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,//=
0x00,0x10,0x18,0x0C,0x06,0x03,0x01,0x00,0x00,0x10,0x30,0x60,0xC0,0x80,0x00,0x00,//>
0x00,0x0C,0x1C,0x11,0x13,0x1E,0x0C,0x00,0x00,0x00,0x00,0xB0,0xB0,0x00,0x00,0x00,//?
0x0F,0x1F,0x10,0x11,0x13,0x12,0x1F,0x0F,0xE0,0xF0,0x10,0x90,0xD0,0x50,0xD0,0xD0,//@
0x00,0x07,0x0F,0x18,0x18,0x0F,0x07,0x00,0x00,0xF0,0xF0,0x80,0x80,0xF0,0xF0,0x00,//A
0x00,0x1F,0x1F,0x11,0x11,0x1F,0x0E,0x00,0x00,0xF0,0xF0,0x10,0x10,0xF0,0xE0,0x00,//B
0x00,0x0F,0x1F,0x10,0x10,0x1C,0x0C,0x00,0x00,0xE0,0xF0,0x10,0x10,0x70,0x60,0x00,//C
0x00,0x1F,0x1F,0x10,0x18,0x0F,0x07,0x00,0x00,0xF0,0xF0,0x10,0x30,0xE0,0xC0,0x00,//D
0x00,0x1F,0x1F,0x11,0x11,0x11,0x10,0x00,0x00,0xF0,0xF0,0x10,0x10,0x10,0x10,0x00,//E
0x00,0x1F,0x1F,0x11,0x11,0x11,0x10,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,//F
0x00,0x0F,0x1F,0x10,0x10,0x1C,0x0C,0x00,0x00,0xE0,0xF0,0x10,0x90,0xF0,0xF0,0x00,//G
0x00,0x1F,0x1F,0x01,0x01,0x1F,0x1F,0x00,0x00,0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x00,//H
0x00,0x00,0x10,0x1F,0x1F,0x10,0x00,0x00,0x00,0x00,0x10,0xF0,0xF0,0x10,0x00,0x00,//I
0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x60,0x70,0x10,0x10,0xF0,0xE0,0x00,//J
0x00,0x1F,0x1F,0x01,0x07,0x1E,0x18,0x00,0x00,0xF0,0xF0,0x00,0xC0,0xF0,0x30,0x00,//K
0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0x10,0x10,0x10,0x10,0x00,//L
0x00,0x1F,0x1F,0x04,0x03,0x04,0x1F,0x1F,0x00,0xF0,0xF0,0x00,0x80,0x00,0xF0,0xF0,//M
0x00,0x1F,0x1F,0x06,0x03,0x01,0x1F,0x1F,0x00,0xF0,0xF0,0x00,0x00,0x80,0xF0,0xF0,//N
0x00,0x0F,0x1F,0x10,0x10,0x1F,0x0F,0x00,0x00,0xE0,0xF0,0x10,0x10,0xF0,0xE0,0x00,//O
0x00,0x1F,0x1F,0x11,0x11,0x1F,0x0E,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,//P
0x00,0x0F,0x1F,0x10,0x10,0x1F,0x0F,0x00,0x00,0xE0,0xF0,0x10,0x18,0xFC,0xE4,0x00,//Q
0x00,0x1F,0x1F,0x11,0x11,0x1F,0x0E,0x00,0x00,0xF0,0xF0,0x00,0x80,0xF0,0x70,0x00,//R
0x00,0x0C,0x1E,0x13,0x11,0x18,0x08,0x00,0x00,0x20,0x30,0x10,0x90,0xF0,0x60,0x00,//S
0x00,0x10,0x10,0x1F,0x1F,0x10,0x10,0x00,0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,//T
0x00,0x1F,0x1F,0x00,0x00,0x1F,0x1F,0x00,0x00,0xE0,0xF0,0x10,0x10,0xF0,0xE0,0x00,//U
0x00,0x1F,0x1F,0x00,0x00,0x1F,0x1F,0x00,0x00,0xC0,0xE0,0x30,0x30,0xE0,0xC0,0x00,//V
0x00,0x1F,0x1F,0x00,0x03,0x00,0x1F,0x1F,0x00,0x80,0xF0,0x70,0x80,0x70,0xF0,0x80,//W
0x00,0x18,0x1C,0x07,0x03,0x1C,0x18,0x00,0x00,0x70,0xF0,0x00,0x80,0xF0,0x70,0x00,//X
0x00,0x1E,0x1F,0x01,0x01,0x1F,0x1E,0x00,0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,//Y
0x00,0x10,0x10,0x11,0x13,0x1E,0x1C,0x00,0x00,0x70,0xF0,0x90,0x10,0x10,0x10,0x00,//Z
0x00,0x00,0x1F,0x1F,0x10,0x10,0x00,0x00,0x00,0x00,0xFE,0xFE,0x02,0x02,0x00,0x00,//[
0x00,0x18,0x1E,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x78,0x18,0x00,//\//
0x00,0x00,0x10,0x10,0x1F,0x1F,0x00,0x00,0x00,0x00,0x02,0x02,0xFE,0xFE,0x00,0x00,//]
0x00,0x10,0x30,0x60,0x60,0x30,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//^
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,//_
0x00,0x00,0x40,0x60,0x70,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//`
0x00,0x00,0x04,0x04,0x04,0x07,0x03,0x00,0x00,0x60,0xF0,0x90,0x90,0xF0,0xF0,0x00,//a
0x00,0x1F,0x1F,0x04,0x04,0x07,0x03,0x00,0x00,0xF0,0xF0,0x10,0x10,0xF0,0xE0,0x00,//b
0x00,0x03,0x07,0x04,0x04,0x06,0x02,0x00,0x00,0xE0,0xF0,0x10,0x10,0x30,0x20,0x00,//c
0x00,0x03,0x07,0x04,0x04,0x1F,0x1F,0x00,0x00,0xE0,0xF0,0x10,0x10,0xF0,0xF0,0x00,//d
0x00,0x03,0x07,0x04,0x04,0x07,0x03,0x00,0x00,0xE0,0xF0,0x90,0x90,0x90,0x80,0x00,//e
0x00,0x01,0x0F,0x1F,0x11,0x11,0x11,0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,//f
0x00,0x03,0x07,0x04,0x04,0x07,0x07,0x00,0x00,0xE2,0xF2,0x12,0x12,0xFE,0xFC,0x00,//g
0x00,0x1F,0x1F,0x04,0x04,0x07,0x03,0x00,0x00,0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x00,//h
0x00,0x04,0x04,0x37,0x37,0x00,0x00,0x00,0x00,0x10,0x10,0xF0,0xF0,0x10,0x10,0x00,//i
0x00,0x00,0x04,0x04,0x37,0x37,0x00,0x00,0x00,0x02,0x02,0x02,0xFE,0xFC,0x00,0x00,//j
0x00,0x1F,0x1F,0x00,0x01,0x07,0x06,0x00,0x00,0xF0,0xF0,0x80,0xC0,0x70,0x30,0x00,//k
0x00,0x10,0x10,0x1F,0x1F,0x00,0x00,0x00,0x00,0x10,0x10,0xF0,0xF0,0x10,0x10,0x00,//l
0x00,0x07,0x07,0x04,0x07,0x04,0x07,0x03,0x00,0xF0,0xF0,0x00,0xE0,0x00,0xF0,0xF0,//m
0x00,0x07,0x07,0x04,0x04,0x07,0x03,0x00,0x00,0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x00,//n
0x00,0x03,0x07,0x04,0x04,0x07,0x03,0x00,0x00,0xE0,0xF0,0x10,0x10,0xF0,0xE0,0x00,//o
0x00,0x07,0x07,0x04,0x04,0x07,0x03,0x00,0x00,0xFE,0xFE,0x10,0x10,0xF0,0xE0,0x00,//p
0x00,0x03,0x07,0x04,0x04,0x07,0x07,0x00,0x00,0xE0,0xF0,0x10,0x10,0xFE,0xFE,0x00,//q
0x00,0x07,0x07,0x01,0x02,0x06,0x06,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,//r
0x00,0x03,0x07,0x04,0x04,0x04,0x04,0x00,0x00,0x10,0x90,0x90,0x90,0xF0,0x60,0x00,//s
0x00,0x04,0x1F,0x1F,0x04,0x04,0x04,0x00,0x00,0x00,0xE0,0xF0,0x10,0x10,0x10,0x00,//t
0x00,0x07,0x07,0x00,0x00,0x07,0x07,0x00,0x00,0xE0,0xF0,0x10,0x10,0xF0,0xF0,0x00,//u
0x00,0x07,0x07,0x00,0x00,0x07,0x07,0x00,0x00,0xC0,0xE0,0x30,0x30,0xE0,0xC0,0x00,//v
0x00,0x07,0x07,0x00,0x03,0x00,0x07,0x07,0x00,0xC0,0xF0,0x30,0xC0,0x30,0xF0,0xC0,//w
0x00,0x06,0x07,0x01,0x01,0x07,0x06,0x00,0x00,0x30,0x70,0xC0,0xC0,0x70,0x30,0x00,//x
0x00,0x07,0x07,0x00,0x00,0x07,0x07,0x00,0x02,0xE2,0xF2,0x16,0x1C,0xF8,0xE0,0x00,//y
0x00,0x04,0x04,0x04,0x05,0x07,0x06,0x00,0x00,0x30,0x70,0xD0,0x90,0x10,0x10,0x00,//z
0x00,0x00,0x01,0x0F,0x1E,0x10,0x00,0x00,0x00,0x80,0xC0,0x78,0x3C,0x04,0x00,0x00,//{
0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0x00,0x00,0x00,//|
0x00,0x00,0x10,0x1E,0x0F,0x01,0x00,0x00,0x00,0x00,0x04,0x3C,0x78,0xC0,0x80,0x00,//}
0x0C,0x18,0x10,0x18,0x0C,0x04,0x0C,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//~
0x00,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x00,0x00,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0x00,//
0x00,0x00,0x00,0x00,0xDA,0x00,0xBA,0x00,0x00,0x0C,0x1E,0x00,0x34,0x00,0xF4,0xF4,//�

#endif

};


///////////////////////////////////////////////////////////////////////////////////
#ifdef CHAR_6X8
const uint8_t ASCIITAB_5x8[ ]=
{
      0x00, 0x00, 0x00, 0x00, 0x00 ,//20
      0x00, 0x00, 0x7D, 0x00, 0x00 ,//21
      0x00, 0x70, 0x00, 0x70, 0x00 ,//22
      0x14, 0x7F, 0x14, 0x7F, 0x14 ,//23
      0x12, 0x2A, 0x7F, 0x2A, 0x24 ,//24
      0x62, 0x64, 0x08, 0x13, 0x23 ,//25
      0x36, 0x49, 0x55, 0x22, 0x05 ,//26
      0x00, 0x50, 0x60, 0x00, 0x00 ,//27
      0x00, 0x1C, 0x22, 0x41, 0x00 ,//28
      0x00, 0x41, 0x22, 0x1C, 0x00 ,//29
      0x08, 0x2A, 0x1C, 0x2A, 0x08 ,//2A
      0x08, 0x08, 0x3E, 0x08, 0x08 ,//2B
      0x00, 0x05, 0x06, 0x00, 0x00 ,//2C
      0x08, 0x08, 0x08, 0x08, 0x08 ,//2D
      0x00, 0x03, 0x03, 0x00, 0x00 ,//2E
      0x02, 0x04, 0x08, 0x10, 0x20 ,//2F
      0x3E, 0x45, 0x49, 0x51, 0x3E ,//30
      0x00, 0x21, 0x7F, 0x01, 0x00 ,//31
      0x21, 0x43, 0x45, 0x49, 0x31 ,//32
      0x42, 0x41, 0x51, 0x69, 0x46 ,//33
      0x0C, 0x14, 0x24, 0x7F, 0x04 ,//34
      0x72, 0x51, 0x51, 0x51, 0x4E ,//35
      0x1E, 0x29, 0x49, 0x49, 0x06 ,//36
      0x40, 0x47, 0x48, 0x50, 0x60 ,//37
      0x36, 0x49, 0x49, 0x49, 0x36 ,//38
      0x30, 0x49, 0x49, 0x4A, 0x3C ,//39
      0x00, 0x36, 0x36, 0x00, 0x00 ,//3A
      0x00, 0x35, 0x36, 0x00, 0x00 ,//3B
      0x00, 0x08, 0x14, 0x22, 0x41 ,//3C
      0x14, 0x14, 0x14, 0x14, 0x14 ,//3D
      0x41, 0x22, 0x14, 0x08, 0x00 ,//3E
      0x20, 0x40, 0x45, 0x48, 0x30 ,//3F
      0x3E, 0x49, 0x55, 0x5D, 0x3D ,//40
      0x1F, 0x24, 0x44, 0x24, 0x1F ,//41
      0x7F, 0x49, 0x49, 0x49, 0x36 ,//42
      0x3E, 0x41, 0x41, 0x41, 0x22 ,//43
      0x7F, 0x41, 0x41, 0x22, 0x1C ,//44
      0x7F, 0x49, 0x49, 0x49, 0x41 ,//45
      0x7F, 0x48, 0x48, 0x40, 0x40 ,//46
      0x3E, 0x41, 0x41, 0x45, 0x26 ,//47
      0x7F, 0x08, 0x08, 0x08, 0x7F ,//48
      0x00, 0x41, 0x7F, 0x41, 0x00 ,//49
      0x02, 0x01, 0x41, 0x7E, 0x40 ,//4A
      0x7F, 0x08, 0x14, 0x22, 0x41 ,//4B
      0x7F, 0x01, 0x01, 0x01, 0x01 ,//4C
      0x7F, 0x20, 0x10, 0x20, 0x7F ,//4D
      0x7F, 0x10, 0x08, 0x04, 0x7F ,//4E
      0x3E, 0x41, 0x41, 0x41, 0x3E ,//4F
      0x7F, 0x48, 0x48, 0x48, 0x30 ,//50
      0x3E, 0x41, 0x45, 0x42, 0x3D ,//51
      0x7F, 0x48, 0x4C, 0x4A, 0x31 ,//52
      0x31, 0x49, 0x49, 0x49, 0x46 ,//53
      0x40, 0x40, 0x7F, 0x40, 0x40 ,//54
      0x7E, 0x01, 0x01, 0x01, 0x7E ,//55
      0x7C, 0x02, 0x01, 0x02, 0x7C ,//56
      0x7F, 0x02, 0x0C, 0x02, 0x7F ,//57
      0x63, 0x14, 0x08, 0x14, 0x63 ,//58
      0x60, 0x10, 0x0F, 0x10, 0x60 ,//59
      0x43, 0x45, 0x49, 0x51, 0x61 ,//5A
      0x00, 0x7F, 0x41, 0x41, 0x00 ,//5B
      0x20, 0x10, 0x08, 0x04, 0x02 ,//5C
      0x00, 0x41, 0x41, 0x7F, 0x00 ,//5D
      0x10, 0x20, 0x40, 0x20, 0x10 ,//5E
      0x01, 0x01, 0x01, 0x01, 0x01 ,//5F
      0x00, 0x00, 0x40, 0x20, 0x00 ,//60
      0x02, 0x15, 0x15, 0x15, 0x0F ,//61
      0x7F, 0x09, 0x11, 0x11, 0x0E ,//62
      0x0E, 0x11, 0x11, 0x11, 0x02 ,//63
      0x0E, 0x11, 0x11, 0x09, 0x7F ,//64
      0x0E, 0x15, 0x15, 0x15, 0x0C ,//65
      0x08, 0x3F, 0x48, 0x40, 0x20 ,//66
      0x08, 0x15, 0x15, 0x15, 0x1E ,//67
      0x7F, 0x08, 0x10, 0x10, 0x0F ,//68
      0x00, 0x11, 0x5F, 0x01, 0x00 ,//69
      0x02, 0x01, 0x11, 0x5E, 0x00 ,//6A
      0x00, 0x7F, 0x04, 0x0A, 0x11 ,//6B
      0x00, 0x41, 0x7F, 0x01, 0x00 ,//6C
      0x1F, 0x10, 0x0C, 0x10, 0x0F ,//6D
      0x1F, 0x08, 0x10, 0x10, 0x0F ,//6E
      0x0E, 0x11, 0x11, 0x11, 0x0E ,//6F
      0x1F, 0x14, 0x14, 0x14, 0x08 ,//70
      0x08, 0x14, 0x14, 0x14, 0x1F ,//71
      0x1F, 0x08, 0x10, 0x10, 0x08 ,//72
      0x09, 0x15, 0x15, 0x15, 0x02 ,//73
      0x10, 0x7E, 0x11, 0x01, 0x02 ,//74
      0x1E, 0x01, 0x01, 0x01, 0x1E ,//75
      0x1C, 0x02, 0x01, 0x02, 0x1C ,//76
      0x1E, 0x01, 0x06, 0x01, 0x1E ,//77
      0x11, 0x0A, 0x04, 0x0A, 0x11 ,//78
      0x18, 0x05, 0x05, 0x05, 0x1E ,//79
      0x11, 0x13, 0x15, 0x19, 0x11 ,//7A
      0x08, 0x36, 0x41, 0x41, 0x00 ,//7B
      0x00, 0x00, 0x77, 0x00, 0x00 ,//7C
      0x00, 0x41, 0x41, 0x36, 0x08 ,//7D
      0x20, 0x40, 0x60, 0x20, 0x40 ,//7E
      0x02, 0x04, 0x08, 0x10, 0x22 ,///.	0x00, 0x00, 0x00, 0x00, 0x00 ,//7F

#ifdef RUSSIAN //ouhs20160727
			~0x3F,~0x48,~0x48,~0x48,~0x3F,//80
			~0x7F,~0x49,~0x49,~0x49,~0x46,//81
			~0x41,~0x7F,~0x49,~0x49,~0x36,//82
			~0x7F,~0x40,~0x40,~0x40,~0x60,//83
			~0x19,~0x26,~0x42,~0x42,~0x3D,//84
			~0x7F,~0x49,~0x49,~0x49,~0x49,//85
			~0x63,~0x1C,~0x7F,~0x1C,~0x63,//86
			~0x22,~0x49,~0x49,~0x49,~0x36,//87
			~0x7F,~0x04,~0x08,~0x10,~0x7F,//88
			~0x1F,~0x42,~0x24,~0x48,~0x1F,//89
			~0x7F,~0x08,~0x14,~0x22,~0x41,//8A
			~0x01,~0x02,~0x7C,~0x40,~0x7F,//8B
			~0x7F,~0x20,~0x10,~0x20,~0x7F,//8C
			~0x7F,~0x08,~0x08,~0x08,~0x7F,//8D
			~0x3E,~0x41,~0x41,~0x41,~0x3E,//8E
			~0x7F,~0x40,~0x40,~0x40,~0x7F,//8F
			~0x7F,~0x48,~0x48,~0x48,~0x30,//90
			~0x3E,~0x41,~0x41,~0x41,~0x22,//91
			~0x40,~0x40,~0x7F,~0x40,~0x40,//92
			~0x70,~0x09,~0x09,~0x09,~0x7E,//93
			~0x1C,~0x22,~0x7F,~0x22,~0x1C,//94
			~0x63,~0x14,~0x08,~0x14,~0x63,//95
			~0x7E,~0x02,~0x02,~0x7E,~0x03,//96
			~0x78,~0x08,~0x08,~0x08,~0x7F,//97
			~0x7F,~0x01,~0x7F,~0x01,~0x7F,//98
			~0x7E,~0x02,~0x7E,~0x02,~0x7F,//99
			~0x40,~0x7F,~0x09,~0x09,~0x06,//9A
			~0x7F,~0x09,~0x09,~0x06,~0x7F,//9B
			~0x7F,~0x09,~0x09,~0x09,~0x06,//9C
			~0x22,~0x49,~0x49,~0x49,~0x3E,//9D
			~0x7F,~0x08,~0x3E,~0x41,~0x3E,//9E
			~0x31,~0x4A,~0x4C,~0x48,~0x7F,//9F
			~0x02,~0x15,~0x15,~0x0E,~0x01,//A0
			~0x1F,~0x15,~0x15,~0x15,~0x12,//A1
			~0x1F,~0x15,~0x15,~0x15,~0x0A,//A2
			~0x1F,~0x10,~0x10,~0x10,~0x10,//A3
			~0x05,~0x0A,~0x12,~0x12,~0x0D,//A4
			~0x0E,~0x15,~0x15,~0x15,~0x0D,//A5
			~0x11,~0x0E,~0x1F,~0x0E,~0x11,//A6
			~0x0A,~0x11,~0x11,~0x15,~0x0A,//A7
			~0x1F,~0x02,~0x04,~0x08,~0x1F,//A8
			~0x07,~0x11,~0x0A,~0x14,~0x07,//A9
			~0x1F,~0x04,~0x0A,~0x11,~0x00,//AA
			~0x01,~0x02,~0x1C,~0x10,~0x1F,//AB
			~0x0F,~0x10,~0x0C,~0x10,~0x0F,//AC
			~0x1F,~0x04,~0x04,~0x04,~0x1F,//AD
			~0x0E,~0x11,~0x11,~0x11,~0x0E,//AE
			~0x1F,~0x10,~0x10,~0x10,~0x1F,//AF
			~0x2A,~0x55,~0x2A,~0x55,~0x2A,//B0
			~0x55,~0x2A,~0x55,~0x2A,~0x55,//B1
			~0x7F,~0x7F,~0x7F,~0x7F,~0x7F,//B2
			~0x00,~0x00,~0x7F,~0x00,~0x00,//B3
			~0x08,~0x08,~0x7F,~0x00,~0x00,//B4
			~0x14,~0x14,~0x7F,~0x00,~0x00,//B5
			~0x08,~0x7F,~0x00,~0x7F,~0x00,//B6
			~0x08,~0x0F,~0x08,~0x0F,~0x00,//B7
			~0x14,~0x14,~0x1F,~0x00,~0x00,//B8
			~0x14,~0x77,~0x00,~0x7F,~0x00,//B9
			~0x00,~0x7F,~0x00,~0x7F,~0x00,//BA
			~0x14,~0x17,~0x10,~0x1F,~0x00,//BB
			~0x14,~0x74,~0x04,~0x7C,~0x00,//BC
			~0x08,~0x78,~0x08,~0x78,~0x00,//BD
			~0x14,~0x14,~0x7C,~0x00,~0x00,//BE
			~0x08,~0x08,~0x0F,~0x00,~0x00,//BF
			~0x00,~0x00,~0x78,~0x08,~0x08,//C0
			~0x08,~0x08,~0x78,~0x08,~0x08,//C1
			~0x08,~0x08,~0x0F,~0x08,~0x08,//C2
			~0x00,~0x00,~0x7F,~0x08,~0x08,//C3
			~0x08,~0x08,~0x08,~0x08,~0x08,//C4
			~0x08,~0x08,~0x7F,~0x08,~0x08,//C5
			~0x00,~0x00,~0x7F,~0x14,~0x14,//C6
			~0x00,~0x7F,~0x00,~0x7F,~0x08,//C7
			~0x00,~0x7C,~0x04,~0x74,~0x14,//C8
			~0x00,~0x1F,~0x10,~0x17,~0x14,//C9
			~0x14,~0x74,~0x04,~0x74,~0x14,//CA
			~0x14,~0x17,~0x10,~0x17,~0x14,//CB
			~0x00,~0x7F,~0x00,~0x77,~0x14,//CC
			~0x14,~0x14,~0x14,~0x14,~0x14,//CD
			~0x14,~0x77,~0x00,~0x77,~0x14,//CE
			~0x14,~0x14,~0x74,~0x14,~0x14,//CF
			~0x08,~0x78,~0x08,~0x78,~0x08,//D0
			~0x14,~0x14,~0x17,~0x14,~0x14,//D1
			~0x08,~0x0F,~0x08,~0x0F,~0x08,//D2
			~0x00,~0x78,~0x08,~0x78,~0x08,//D3
			~0x00,~0x00,~0x7C,~0x14,~0x14,//D4
			~0x00,~0x00,~0x1F,~0x14,~0x14,//D5
			~0x00,~0x1F,~0x10,~0x1F,~0x10,//D6
			~0x08,~0x7F,~0x08,~0x7F,~0x08,//D7
			~0x14,~0x14,~0x7F,~0x14,~0x14,//D8
			~0x08,~0x08,~0x78,~0x00,~0x00,//D9
			~0x00,~0x00,~0x0F,~0x08,~0x08,//DA
			~0x7F,~0x7F,~0x7F,~0x7F,~0x7F,//DB
			~0x0F,~0x0F,~0x0F,~0x0F,~0x0F,//DC
			~0x7F,~0x7F,~0x7F,~0x00,~0x00,//DD
			~0x00,~0x00,~0x7F,~0x7F,~0x7F,//DE
			~0x78,~0x78,~0x78,~0x78,~0x78,//DF
			~0x1F,~0x14,~0x14,~0x14,~0x08,//E0
			~0x0E,~0x11,~0x11,~0x11,~0x11,//E1
			~0x10,~0x10,~0x1F,~0x10,~0x10,//E2
			~0x11,~0x0A,~0x04,~0x08,~0x10,//E3
			~0x0C,~0x12,~0x1F,~0x12,~0x0C,//E4
			~0x11,~0x0A,~0x04,~0x0A,~0x11,//E5
			~0x1E,~0x02,~0x02,~0x1E,~0x03,//E6
			~0x1C,~0x04,~0x04,~0x1F,~0x00,//E7
			~0x1F,~0x01,~0x1F,~0x01,~0x1F,//E8
			~0x1E,~0x02,~0x1E,~0x02,~0x1F,//E9
			~0x10,~0x1F,~0x05,~0x05,~0x02,//EA
			~0x1F,~0x05,~0x05,~0x02,~0x1F,//EB
			~0x1F,~0x05,~0x05,~0x02,~0x00,//EC
			~0x15,~0x15,~0x15,~0x15,~0x0E,//ED
			~0x1F,~0x04,~0x0E,~0x11,~0x0E,//EE
			~0x08,~0x15,~0x16,~0x14,~0x1F,//EF
			~0x1F,~0x55,~0x15,~0x55,~0x15,//F0
			~0x0E,~0x55,~0x15,~0x55,~0x0D,//F1
			~0x7F,~0x18,~0x24,~0x42,~0x03,//F2
			~0x7F,~0x10,~0x10,~0x7E,~0x03,//F3
			~0x3E,~0x49,~0x49,~0x49,~0x3E,//F4
			~0x40,~0x28,~0x1F,~0x28,~0x40,//F5
			~0x40,~0x20,~0x1F,~0x20,~0x40,//F6
			~0x7F,~0x10,~0x10,~0x10,~0x0F,//F7
			~0x12,~0x15,~0x15,~0x15,~0x0E,//F8
			~0x04,~0x1F,~0x14,~0x14,~0x10,//F9
			~0x1F,~0x04,~0x0A,~0x11,~0x01,//FA
			~0x1F,~0x04,~0x04,~0x1E,~0x01,//FB
			~0x1F,~0x08,~0x04,~0x1F,~0x40,//FC
			~0x10,~0x0A,~0x07,~0x0A,~0x10,//FD
			~0x10,~0x08,~0x07,~0x08,~0x10,//FE
			~0x00,~0x00,~0x00,~0x00,~0x00//FF
#endif //RUSSIAN

};
#endif


#pragma once
#include <iostream>
#include <string>
#include "System.h"

using std::cout;
using std::endl;
using std::string;

#ifndef __BLOCKS_H__
#define __BLOCKS_H__

class Blocks {
	int position_X = 0;
	int position_Y = 0;

	int block_LINEPIECE[BLOCK_SIZE][BLOCK_SIZE] = {
		{ 0,1,0,0 },
		{ 0,1,0,0 },
		{ 0,1,0,0 },
		{ 0,1,0,0 } };
	int block_L[BLOCK_SIZE][BLOCK_SIZE] = {
		{ 0,0,0,0 },
		{ 0,1,0,0 },
		{ 0,1,0,0 },
		{ 0,1,1,0 } };
	// 역 L자 블록
	int block_REVERSE_L[BLOCK_SIZE][BLOCK_SIZE] = {
		{ 0,0,0,0 },
		{ 0,0,1,0 },
		{ 0,0,1,0 },
		{ 0,1,1,0 } };
	// T자 블록
	int block_T[BLOCK_SIZE][BLOCK_SIZE] = {
		{ 0,0,0,0 },
		{ 0,1,0,0 },
		{ 0,1,1,0 },
		{ 0,1,0,0 } };
	// 번개 블록
	int block_SQUIGGLY[BLOCK_SIZE][BLOCK_SIZE] = {
		{ 0,0,0,0 },
		{ 0,1,0,0 },
		{ 0,1,1,0 },
		{ 0,0,1,0 } };
	// 역 번개 블록
	int block_REVERSE_SQUIGGLY[BLOCK_SIZE][BLOCK_SIZE] = {
		{ 0,0,0,0 },
		{ 0,0,1,0 },
		{ 0,1,1,0 },
		{ 0,1,0,0 } };
	// 네모 블록
	int block_SQUARE[BLOCK_SIZE][BLOCK_SIZE] = {
		{ 0,0,0,0 },
		{ 0,1,1,0 },
		{ 0,1,1,0 },
		{ 0,0,0,0 } };
public:
	void print_block_LINEPIECE();

	int get_blocks(int blockNum, int row, int column) const {
		switch (blockNum) {
		case 1:
			return block_LINEPIECE[row][column];
		case 2:
			return block_L[row][column];
		case 3:
			return block_REVERSE_L[row][column];
		case 4:
			return block_T[row][column];
		case 5:
			return block_SQUIGGLY[row][column];
		case 6:
			return block_REVERSE_SQUIGGLY[row][column];
		case 7:
			return block_SQUARE[row][column];
		}
	}

	int get_position_X() { return this->position_X;}
	int get_position_Y() { return this->position_Y;}

	void set_position_X(int position_X) { this->position_X = position_X; }
	void set_position_Y(int position_Y) { this->position_Y = position_Y; }




};

#endif // !__BLOCKS_H__

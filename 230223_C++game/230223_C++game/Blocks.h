#pragma once
#include <iostream>

#ifndef __BLOCKS_H__
#define BLOCK_SIZE 4
#define __BLOCKS_H__

class Blocks {
	int blocksize;
public:
	Blocks();

	void set_block_size(int block_size);
	int get_block_size();
};

#endif // !__BLOCKS_H__

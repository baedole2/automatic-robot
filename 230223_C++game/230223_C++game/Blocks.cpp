#include "Blocks.h"
const int blo = 4;
// int Blocks::BLOCK_SIZE = 4;
// const int Blocks::BLOCK_SIZE = 4;

Blocks::Blocks() {
	blocksize = 123;

}

void blocks() {
	// 길쭉이 블록
	int block_LINEPIECE[BLOCK_SIZE][BLOCK_SIZE] = {
		{ 0,1,0,0 },
		{ 0,1,0,0 },
		{ 0,1,0,0 },
		{ 0,1,0,0 } };
	// L자 블록
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
}
//void Blocks::set_block_size(int block_size) { BLOCK_SIZE = block_size; };
int Blocks::get_block_size() { return BLOCK_SIZE; };
#include "Blocks.h"
const int blo = 4;
// int Blocks::BLOCK_SIZE = 4;
// const int Blocks::BLOCK_SIZE = 4;

Blocks::Blocks() {
	blocksize = 123;

}

void blocks() {
	// ������ ���
	int block_LINEPIECE[BLOCK_SIZE][BLOCK_SIZE] = {
		{ 0,1,0,0 },
		{ 0,1,0,0 },
		{ 0,1,0,0 },
		{ 0,1,0,0 } };
	// L�� ���
	int block_L[BLOCK_SIZE][BLOCK_SIZE] = {
		{ 0,0,0,0 },
		{ 0,1,0,0 },
		{ 0,1,0,0 },
		{ 0,1,1,0 } };
	// �� L�� ���
	int block_REVERSE_L[BLOCK_SIZE][BLOCK_SIZE] = {
		{ 0,0,0,0 },
		{ 0,0,1,0 },
		{ 0,0,1,0 },
		{ 0,1,1,0 } };
	// T�� ���
	int block_T[BLOCK_SIZE][BLOCK_SIZE] = {
		{ 0,0,0,0 },
		{ 0,1,0,0 },
		{ 0,1,1,0 },
		{ 0,1,0,0 } };
	// ���� ���
	int block_SQUIGGLY[BLOCK_SIZE][BLOCK_SIZE] = {
		{ 0,0,0,0 },
		{ 0,1,0,0 },
		{ 0,1,1,0 },
		{ 0,0,1,0 } };
	// �� ���� ���
	int block_REVERSE_SQUIGGLY[BLOCK_SIZE][BLOCK_SIZE] = {
		{ 0,0,0,0 },
		{ 0,0,1,0 },
		{ 0,1,1,0 },
		{ 0,1,0,0 } };
	// �׸� ���
	int block_SQUARE[BLOCK_SIZE][BLOCK_SIZE] = {
		{ 0,0,0,0 },
		{ 0,1,1,0 },
		{ 0,1,1,0 },
		{ 0,0,0,0 } };
}
//void Blocks::set_block_size(int block_size) { BLOCK_SIZE = block_size; };
int Blocks::get_block_size() { return BLOCK_SIZE; };
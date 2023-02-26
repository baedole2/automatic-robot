#include "Blocks.h"

const string symbols[] = { "  ","■"};

	// 길쭉이 블록

void Blocks::print_block_LINEPIECE() {
	for (int i = 0; i < BLOCK_SIZE; i++) {
		for (int j = 0; j < BLOCK_SIZE; j++) {
			cout << symbols[block_LINEPIECE[i][j]];
		}
		cout << endl;
	}
}

#pragma once

#include "System.h"
#include "Blocks.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

#ifndef __GAMESCREEN_H__
#define __GAMESCREEN_H__

class GameScreen : public Blocks{
	//int game_screen[GAME_SERO][GAME_GARO];
public:
	int pos_row =0;
	int pos_col=0;

	void print_game_screen();
	
	// 1. ������ / 2. L�� / 3. �� L�� / 4. T / 5. ���� / 6. �� ���� / 7. �׸�
	void set_next_blocks(int blocksNum);
	void set_down_blocks(int blocksNum, int row, int col);

	void set_pos_row(int pos_row) { this->pos_row = pos_row; }
	void set_pos_col(int pos_col) { this->pos_col = pos_col; }

	int get_tile_pos_row() { return pos_row; }
	int get_tile_pos_col() { return pos_col; }
};


#endif // !__GAMESCREEN_H__

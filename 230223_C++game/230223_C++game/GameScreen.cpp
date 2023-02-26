#include "GameScreen.h"

const string symbols[] = { "  ","■","□","▷","ㅁ","●","GAME OVER","점수 : ","다음 블록 is..."," "};
				      	//  0    1   2    3    4     5    6               7             8        9    

int static game_screen[GAME_SERO][GAME_GARO] = {	// 20, 30
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,3,3,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,8,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,2,2,2,2,2,2,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,2,5,5,5,5,2,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,2,5,5,5,5,2,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,2,5,5,5,5,2,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,2,5,5,5,5,2,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,2,2,2,2,2,2,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,7,9,0,0,0,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,2,2,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0.0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};


static int get_tile(int pos_col, int pos_row) {
	int a = game_screen[pos_col][pos_row];
	return a;
}


void GameScreen::print_game_screen() {
	for (int i = 0; i < GAME_SERO; i++) {
		for (int j = 0; j < GAME_GARO; j++) {
			cout << symbols[game_screen[i][j]];
		}
		cout << endl;
	}
}

void GameScreen::set_next_blocks(int blocksNum) {
	switch (blocksNum) {
	case 1:// 6,20 시작점
		for (int i = 0; i < BLOCK_SIZE; i++) {
			for (int j = 0; j < BLOCK_SIZE; j++) {
				game_screen[GAME_SERO - 14 + i][GAME_GARO - 10 + j] = get_blocks(1,i,j);
			}
		}
		break;
	case 2:
		for (int i = 0; i < BLOCK_SIZE; i++) {
			for (int j = 0; j < BLOCK_SIZE; j++) {
				game_screen[GAME_SERO - 14 + i][GAME_GARO - 10 + j] = get_blocks(2, i, j);
			}
		}
		break;
	case 3:
		for (int i = 0; i < BLOCK_SIZE; i++) {
			for (int j = 0; j < BLOCK_SIZE; j++) {
				game_screen[GAME_SERO - 14 + i][GAME_GARO - 10 + j] = get_blocks(3, i, j);
			}
		}
		break;
	case 4:
		for (int i = 0; i < BLOCK_SIZE; i++) {
			for (int j = 0; j < BLOCK_SIZE; j++) {
				game_screen[GAME_SERO - 14 + i][GAME_GARO - 10 + j] = get_blocks(4, i, j);
			}
		}
		break;
	case 5:
		for (int i = 0; i < BLOCK_SIZE; i++) {
			for (int j = 0; j < BLOCK_SIZE; j++) {
				game_screen[GAME_SERO - 14 + i][GAME_GARO - 10 + j] = get_blocks(5, i, j);
			}
		}
		break;
	case 6:
		for (int i = 0; i < BLOCK_SIZE; i++) {
			for (int j = 0; j < BLOCK_SIZE; j++) {
				game_screen[GAME_SERO - 14 + i][GAME_GARO - 10 + j] = get_blocks(6, i, j);
			}
		}
		break;
	case 7:
		for (int i = 0; i < BLOCK_SIZE; i++) {
			for (int j = 0; j < BLOCK_SIZE; j++) {
				game_screen[GAME_SERO - 14 + i][GAME_GARO - 10 + j] = get_blocks(7, i, j);
			}
		}
		break;
	}
}

void GameScreen::set_down_blocks(int blocksNum, int row, int col) {
	switch (blocksNum) {
	case 1:// 6,20 시작점  GAME_SERO - 19       GAME_GARO - 23 
		for (int i = 0; i < BLOCK_SIZE; i++) {
			for (int j = 0; j < BLOCK_SIZE; j++) {
				game_screen[pos_col + i+col][pos_row + j+row] = get_blocks(1, i, j);
			}
		}
		break;
	case 2:
		for (int i = 0; i < BLOCK_SIZE; i++) {
			for (int j = 0; j < BLOCK_SIZE; j++) {
				game_screen[pos_col + i + col][pos_row + j + row] = get_blocks(2, i, j);
			}
		}
		break;
	case 3:
		for (int i = 0; i < BLOCK_SIZE; i++) {
			for (int j = 0; j < BLOCK_SIZE; j++) {
				game_screen[pos_col + i + col][pos_row + j + row] = get_blocks(3, i, j);
			}
		}
		break;
	case 4:
		for (int i = 0; i < BLOCK_SIZE; i++) {
			for (int j = 0; j < BLOCK_SIZE; j++) {
				game_screen[pos_col + i + col][pos_row + j + row] = get_blocks(4, i, j);
			}
		}
		break;
	case 5:
		for (int i = 0; i < BLOCK_SIZE; i++) {
			for (int j = 0; j < BLOCK_SIZE; j++) {
				game_screen[pos_col + i + col][pos_row + j + row] = get_blocks(5, i, j);
			}
		}
		break;
	case 6:
		for (int i = 0; i < BLOCK_SIZE; i++) {
			for (int j = 0; j < BLOCK_SIZE; j++) {
				game_screen[pos_col + i + col][pos_row + j + row] = get_blocks(6, i, j);
			}
		}
		break;
	case 7:
		for (int i = 0; i < BLOCK_SIZE; i++) {
			for (int j = 0; j < BLOCK_SIZE; j++) {
				game_screen[pos_col + i + col][pos_row + j + row] = get_blocks(7, i, j);
			}
		}
		break;
	}
}


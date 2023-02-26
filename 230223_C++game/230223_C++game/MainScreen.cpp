#include <iostream>
#include <string>
#include <conio.h>
#include "TitleScreen.h"
#include "GameScreen.h"
#include <windows.h>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

TitleScreen titleScreen;
GameScreen gameScreen;
Blocks blocks;

void clear_screen() {	// ChatGPT
	system("cls"); // windows 운영체제에서 화면을 지우는 명령어
}
// 메인메뉴때 입력이 잘 안먹힘
int _keydown() {// 방향키는 확장 아스키코드라 두번연속 getch를 통해 2번 입력을 받아야한다.
	int keydown = 0;
	while (1) {
		if (_kbhit()) {
			keydown = _getch();
			cout << "a " << keydown << endl;
			if (keydown == 13)// 엔터
				return 13;
			else if (keydown == 224) {
				keydown = _getch();
				switch (keydown) {
				case 72:// 위
					//cout << "b " << keydown << endl;
					return 72;
				case 80:// 아래
					cout << "c " << keydown << endl;
					return 80;
				case 75:// 왼쪽
					return 75;
				case 77:// 오른쪽 
					return 77;
				default:
					break;
				}
			}
		} 
	}
}	 

bool is_collision() {
	for (int row = 0; row < BLOCK_SIZE; row++) {
		for (int col = 0; col < BLOCK_SIZE; col++) {
			// 블록의 해당 위치에 블록이 있는 경우
			if (blocks.get_blocks(1, col, row) != 0) {
				// 게임 화면의 해당 위치에 블록이 있거나, 화면의 경계를 벗어나는 경우
				if (blocks.get_position_X() - 1 <= GAME_GARO - 26 ||	// 좌벽
					blocks.get_position_X() + 1 >= GAME_GARO - 16 ||		//우벽
					blocks.get_position_Y() + 1 >= GAME_SERO - 2 ) {
					return true;
				}
			}
		}
	}
	return false;
}


int main() {
	// 메인화면을 그리는 코드
	srand(time(NULL));
	int random;
	int refresh = 0;
	int main_menu = 0;
	int mainScreen[TILE_SERO][TILE_GARO] = { 0, };


	const string symbols[] = { "■","■","□","▶","▷","●","○","점수","다음 블록 : ","?" };
	//  0    1   2    3    4     5    6    7          8        9    

	bool isGameStart = false;
	bool isGameOver = false;

	bool isBlockCreate = false;

	
	titleScreen.print_titleScreen();

	// 메뉴화면
	while (isGameStart != true) {
		// 72 위, 80 아래, 75 왼쪽, 77 오른쪽 , 224
	int key_down = _keydown();
		if (key_down == 72) {	// 위로
			main_menu--;
			if (main_menu <= 0)
				main_menu = 0;
			titleScreen.set_title_screen(main_menu);
			clear_screen();
			titleScreen.print_titleScreen();
		}
		else if (key_down == 80) {
			main_menu++;
			if (main_menu >= 2)
				main_menu = 2;
			titleScreen.set_title_screen(main_menu);
			clear_screen();
			titleScreen.print_titleScreen();
		}
		else if (key_down == 13) {
			switch (main_menu) {
			case 0:
				isGameStart = true;
				break;
			case 1:	// 키설정
				break;
			case 2: // 리더보드
				break;
			}
		}
	}


	// 게임화면
	while (isGameOver != true) {
		int keydown = _keydown();
		clear_screen();	// 화면 초기화
		if (isBlockCreate == false) {
			isBlockCreate = true;
			random = rand() % 7 + 1;
			gameScreen.set_pos_col(GAME_SERO - 19);
			gameScreen.set_pos_row(GAME_GARO - 23);
			gameScreen.set_down_blocks(random,0,0);
		}
		gameScreen.print_game_screen();
		// 화면 출력

		if (keydown == 75) {	// 왼쪽이동
			gameScreen.set_pos_row(gameScreen.get_tile_pos_row());
			gameScreen.set_down_blocks(random, -1, 0);

		}
		else if (keydown == 77) {	// 오른쪽이동
			gameScreen.set_pos_row(gameScreen.get_tile_pos_row() + 1);
			gameScreen.set_down_blocks(random, 1, 0);

		}
		else if (keydown == 80) {	// 아래이동
			gameScreen.set_pos_col(gameScreen.get_tile_pos_col() + 1);
			gameScreen.set_down_blocks(random, 0, 1);
		}
		else if (keydown == 72) {	// rotate 위입력
			// rotate 작동
		}
		//is_collision();

	}
}
	// 키를 입력하면 블록의 배열을 따와서 표현
	/*
	switch (input) {
	case 1: // 길쭉이 표현
		gameScreen.set_next_blocks(1);
		gameScreen.set_down_blocks(1);
		break;
	case 2: // L자 표현
		gameScreen.set_next_blocks(2);
		gameScreen.set_down_blocks(2);
		break;
	case 3: // 역 L자 표현
		gameScreen.set_next_blocks(3);
		gameScreen.set_down_blocks(3);
		break;
	case 4: // T자 표현
		gameScreen.set_next_blocks(4);
		gameScreen.set_down_blocks(4);
		break;
	case 5: // 번개 표현
		gameScreen.set_next_blocks(5);
		gameScreen.set_down_blocks(5);
		break;
	case 6: // 역 번개 표현
		gameScreen.set_next_blocks(6);
		gameScreen.set_down_blocks(6);
		break;
	case 7: // 네모 표현
		gameScreen.set_next_blocks(7);
		gameScreen.set_down_blocks(7);
		break;
	default:
		refresh--;
		break;
	}
		*/

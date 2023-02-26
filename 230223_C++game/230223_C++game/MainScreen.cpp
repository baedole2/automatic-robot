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
	system("cls"); // windows �ü������ ȭ���� ����� ��ɾ�
}
// ���θ޴��� �Է��� �� �ȸ���
int _keydown() {// ����Ű�� Ȯ�� �ƽ�Ű�ڵ�� �ι����� getch�� ���� 2�� �Է��� �޾ƾ��Ѵ�.
	int keydown = 0;
	while (1) {
		if (_kbhit()) {
			keydown = _getch();
			cout << "a " << keydown << endl;
			if (keydown == 13)// ����
				return 13;
			else if (keydown == 224) {
				keydown = _getch();
				switch (keydown) {
				case 72:// ��
					//cout << "b " << keydown << endl;
					return 72;
				case 80:// �Ʒ�
					cout << "c " << keydown << endl;
					return 80;
				case 75:// ����
					return 75;
				case 77:// ������ 
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
			// ����� �ش� ��ġ�� ����� �ִ� ���
			if (blocks.get_blocks(1, col, row) != 0) {
				// ���� ȭ���� �ش� ��ġ�� ����� �ְų�, ȭ���� ��踦 ����� ���
				if (blocks.get_position_X() - 1 <= GAME_GARO - 26 ||	// �º�
					blocks.get_position_X() + 1 >= GAME_GARO - 16 ||		//�캮
					blocks.get_position_Y() + 1 >= GAME_SERO - 2 ) {
					return true;
				}
			}
		}
	}
	return false;
}


int main() {
	// ����ȭ���� �׸��� �ڵ�
	srand(time(NULL));
	int random;
	int refresh = 0;
	int main_menu = 0;
	int mainScreen[TILE_SERO][TILE_GARO] = { 0, };


	const string symbols[] = { "��","��","��","��","��","��","��","����","���� ��� : ","?" };
	//  0    1   2    3    4     5    6    7          8        9    

	bool isGameStart = false;
	bool isGameOver = false;

	bool isBlockCreate = false;

	
	titleScreen.print_titleScreen();

	// �޴�ȭ��
	while (isGameStart != true) {
		// 72 ��, 80 �Ʒ�, 75 ����, 77 ������ , 224
	int key_down = _keydown();
		if (key_down == 72) {	// ����
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
			case 1:	// Ű����
				break;
			case 2: // ��������
				break;
			}
		}
	}


	// ����ȭ��
	while (isGameOver != true) {
		int keydown = _keydown();
		clear_screen();	// ȭ�� �ʱ�ȭ
		if (isBlockCreate == false) {
			isBlockCreate = true;
			random = rand() % 7 + 1;
			gameScreen.set_pos_col(GAME_SERO - 19);
			gameScreen.set_pos_row(GAME_GARO - 23);
			gameScreen.set_down_blocks(random,0,0);
		}
		gameScreen.print_game_screen();
		// ȭ�� ���

		if (keydown == 75) {	// �����̵�
			gameScreen.set_pos_row(gameScreen.get_tile_pos_row());
			gameScreen.set_down_blocks(random, -1, 0);

		}
		else if (keydown == 77) {	// �������̵�
			gameScreen.set_pos_row(gameScreen.get_tile_pos_row() + 1);
			gameScreen.set_down_blocks(random, 1, 0);

		}
		else if (keydown == 80) {	// �Ʒ��̵�
			gameScreen.set_pos_col(gameScreen.get_tile_pos_col() + 1);
			gameScreen.set_down_blocks(random, 0, 1);
		}
		else if (keydown == 72) {	// rotate ���Է�
			// rotate �۵�
		}
		//is_collision();

	}
}
	// Ű�� �Է��ϸ� ����� �迭�� ���ͼ� ǥ��
	/*
	switch (input) {
	case 1: // ������ ǥ��
		gameScreen.set_next_blocks(1);
		gameScreen.set_down_blocks(1);
		break;
	case 2: // L�� ǥ��
		gameScreen.set_next_blocks(2);
		gameScreen.set_down_blocks(2);
		break;
	case 3: // �� L�� ǥ��
		gameScreen.set_next_blocks(3);
		gameScreen.set_down_blocks(3);
		break;
	case 4: // T�� ǥ��
		gameScreen.set_next_blocks(4);
		gameScreen.set_down_blocks(4);
		break;
	case 5: // ���� ǥ��
		gameScreen.set_next_blocks(5);
		gameScreen.set_down_blocks(5);
		break;
	case 6: // �� ���� ǥ��
		gameScreen.set_next_blocks(6);
		gameScreen.set_down_blocks(6);
		break;
	case 7: // �׸� ǥ��
		gameScreen.set_next_blocks(7);
		gameScreen.set_down_blocks(7);
		break;
	default:
		refresh--;
		break;
	}
		*/

// 프로젝트1 배스킨라빈스 31 게임
// 서로 최소 1개에서 최대 3개씩 연속된 숫자를 말하고
// 31 이라는 숫자를 말하는 사람이 지는 게임.
//		1) 사용자는 본인이 입력한 숫자만큼.
//		2) 컴퓨터는 랜덤 숫자만큼.
//		3) 단 사용자, 컴퓨터 모둗 1~3사이의 숫자만 가능!

#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;



int main() {
	std::srand(time(NULL));	// 랜덤 난수

	int input;
	int com_input;
	int num = 0;
	bool isGameOver = false;
	bool isPlayerWin = false;

	cout << "배스킨 라빈스 31 게임" << endl;
	
	while (isGameOver == false) {
		cout << "--------------------" << endl;
		cout << "숫자를 입력하세요 ( 1-3 ) : ";
		cin >> input;

		if (input == 1 || input == 2 || input == 3) {
			cout << "사용자가 숫자 " << input << "개를 선언했습니다." << endl;
			for (int i = 0; i < input; i++) {
				cout << ++num << " ";
				if (num == 31){
					isGameOver = true;
					isPlayerWin = true;
					break;
				}
			}
			cout  << endl << endl;
			com_input = rand() % 3 + 1;	// 1~3 범위 난수
			if (isGameOver == false) {
				cout << "컴퓨터가 숫자 " << com_input << "개를 선언했습니다." << endl;
				for (int i = 0; i < com_input; i++) {
					cout << ++num << " ";
					if (num == 31) {
						isGameOver = true;
						break;
					}
				}
			}
			cout << endl;
		}
		else {
			cout << "입력값을 벗어났습니다. 사이의 숫자만 입력하세요." << endl;
		}
	}

	(isPlayerWin == true) ?
		cout << endl << "게임 종료. 컴퓨터 의 승리입니다." << endl
		: cout << endl << "게임 종료. 사용자 의 승리입니다." << endl;
}
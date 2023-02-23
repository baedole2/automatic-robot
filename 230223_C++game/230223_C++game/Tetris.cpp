#include <iostream>
#include <string>
#include "Blocks.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void clear_screen() {	// ChatGPT
	system("cls"); // windows 운영체제에서 화면을 지우는 명령어
}

int main() {
	// 메인화면을 그리는 코드
	const int tile_garo = 100;
	const int tile_sero = 25;

	int refresh = 0;
	int input;
	string buffer;	// 화면 플리커 방지용
	int mainScreen[tile_sero][tile_garo] = { {0} };

	int block[BLOCK_SIZE][BLOCK_SIZE] = { {0} };

	while (1) {
		//clear_screen();	// 화면 초기화

		for (int i = 0; i < tile_sero; i++) {
			for (int j = 0; j < tile_garo; j++) {
				mainScreen[i][j] = 0;
				buffer += mainScreen[i][j];
			}
			buffer += "\n";
		}
		// 화면 출력
		cout << buffer;





		cout << "1. 길쭉이 / 2. L자 / 3. 역 L자 / 4. T / 5. 번개 / 6. 역 번개 / 7. 네모\n" << endl;
		cout << "키를 입력하면 화면이 갱신됨" << endl;
		cout << "현재 " << refresh << "회 갱신됨.";
		cin >> input;
		refresh++;

		// 키를 입력하면 블록의 배열을 따와서 표현
		switch (input) {
		case 1:
			// 길쭉이 표현
		case 2:
			// L자 표현
		case 3:
			// 역 L자 표현
		case 4:
			// T자 표현
		case 5:
			// 번개 표현
		case 6:
			// 역 번개 표현
		case 7:
			// 네모 표현
		default:
			cout << "입력 에러" << endl;
			continue;
		}
		buffer.clear();
	}
}
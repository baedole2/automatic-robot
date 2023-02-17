// 프로젝트5 야구게임
// 1) 사용자는 1부터 9가지 중 3개의 숫자를 뽑아
// 컴퓨터가 랜덤으로 뽑은 숫자 3개와 비교 (중복 X)
// - 숫자의 자리와 값이 모두 같으면 strike
// - 자리는 다르지만 3개의 숫자 중 포함 되어 있으면 ball
//

#include <iostream>

using namespace std;

int main() {
	srand(time(NULL));
	int num_count = 3;	// 맞춰야할 숫자의 개수
	int strike = 0;
	int ball = 0;
	int count = 0;	// 시도한 횟수
	bool isGameOver = false;

	cout << "야구 게임" << endl;

	int* input_num = new int[num_count];	// 입력을 담을 배열
	int* num = new int[num_count];	// 난수를 담을 배열
	int* input = new int[num_count];	// 입력도 횟수에 맞게

	// 컴퓨터 난수 생성
	for (int i = 0; i < num_count; i++) {
		num[i] = rand() % 9 + 1;
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j]) {
				i--;
				continue;
			}
		}
	}
	cout << endl << endl;
	while (isGameOver == false) {
		cout << "1 ~ 9 사이의 숫자 3개를 입력하세요. (이외의 숫자 : 종료)\n";
			cin >> input[0] >> input[1] >> input[2];

		for (int i = 0; i < num_count; i++) {
			// 범위 외 입력으로 탈출
			if (input[i] <= 0 || input[i] > 9) {
				cout << "범위 외의 입력입니다. 게임을 종료합니다." << endl;
				return 0;
			}
			input_num[i] = input[i];
		}
		count++;	// 입력횟수 증가

		for (int i = 0; i < 3; i++) {
			if (input_num[i] == num[i])
				strike++;	// 스트라이크 체크
			for (int j = 0; j < 3; j++) {
				if (input_num[i] == num[j] && input_num[i] != num[i])
					ball++;	// 볼체크
			}
		}
		if (strike == 3)	// 스트라이크 3 되면 종료
			isGameOver = true;
		else {	// 아닐경우 초기화 및 스트라이크, 볼 출력
			cout << "Strike : " << strike << "\t\tBall : " << ball << endl << endl;
			strike = 0;
			ball = 0;
		}
	}
	cout << count << "번 만에 맞췄습니다. " << endl;

	delete[] input;
	delete[] num;
	delete[] input_num;
}
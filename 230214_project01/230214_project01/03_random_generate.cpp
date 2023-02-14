// 실습1 로또 프로그램 만들기
// 1 ~45 사이 6개의 번호 추첨하기
// 6개의 번호는 서로 중복되지 않아야 함!

#include <iostream>
#include <cstdlib>

// 랜덤한 숫자를 뽑는 코드
using std::cout;
using std::endl;

int main() {
	std::srand(time(NULL));

	int atari[6] = { 0 ,};
	int random_num; // 1~45 범위
	bool is_duplicate_num = true;	// 중복체크

	cout << "오늘의 로또 번호입니다." << endl;

	for (int i = 0; i < 6; i++) {
		random_num = rand() % 45 + 1;
		atari[i] = random_num;
		for (int j = 0; j < i; j++) {
			if (atari[j] == atari[i])	// 중복일 경우
				i--;	// i를 하나 깎아서 지금 단계를 다시 반복.
		}
	}

	for (int i = 0; i < 6; i++){
		cout << atari[i] << " ";
	}

	return 0;
}

// 코드 너무 더러움.

//while (is_duplicate_num == true) {
//	// 로또 번호 무작위 추출 후 배열에 집어넣음 * 6번반복
//	for (int i = 0; i < 6; i++) {
//		random_num = rand() % 45 + 1;
//		atari[i] = random_num;
//		for (int j = 0; j < i; j++) {
//			if (atari[j] == atari[i])	// 중복일 경우
//				i--;	// i를 하나 깎아서 지금 단계를 다시 반복.
//		}
//	}
	// 배열끼리 모두 비교
	// 하나라도 같은게 나온다면 다시 무작위 추출 후 배열에 넣음 * 6번 반복
	//for (int j = 0; j < 5; j++) {
	//	for (int i = 1; i < 6-j; i++) {
	//		if (atari[j] == atari[j + i]) {
	//			is_duplicate_num = true;
	//			break;
	//		}
	//		else
	//			is_duplicate_num = false;
	//	}
	//	if (is_duplicate_num == true)
	//		break;
	//	else
	//		is_duplicate_num = false;
	//}
//}
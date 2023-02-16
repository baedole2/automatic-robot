// 프로젝트2 타임어택 끝말잇기 게임
// 1) 제한 시간 30초 동안 플레이어는 끝말잇기 규칙에 따라 단어를 입력
// 2) 제한 시간이 종료되면 게임을 종료 시키고, 입력한 단어의 개수를 출력

#include <iostream>
#include <ctime>	//시간 측정을 위해서

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	int word_count = 0;
	int wrong_count = 0;
	string input;
	string word = "airplane";
	string word_save = "airplane";	// 쭉 보여주는 칸
	bool isGameOver = false;

	cout << "끝말잇기 게임" << endl << "30초 안에 마구마구 영단어를 입력하세요!" << endl;
	clock_t startTime = clock();
	while (isGameOver == false) {

		cout << word_save << endl;	// 단어 모음 계속 보여줌
		cout << "다음 단어를 입력하세요. : ";
		cin >> input;

		clock_t endTime = clock();
		int elapsedTime = (endTime - startTime) / CLOCKS_PER_SEC;
		cout << "입력까지 걸린 시간 : " << elapsedTime << endl << endl;

		if (elapsedTime >= 30) {	// 시간초과 패배
			cout << "30초를 초과하였습니다. 타임 오버!" << endl;
			isGameOver = true;
			continue;
		}
		int word_size = word.size();
		if (word[word_size - 1] == input[0]) {// 제시어의 제일 끝과 입력의 제일 앞부분 일치 비교
			word = input;
			word_save += "->" + input;
			word_count++;
		}
		else {
			cout << "잘못된 입력입니다. " << endl << endl;
			wrong_count++;
			(wrong_count >= 3) ? isGameOver = true : isGameOver = false;
			continue;
		}
	}

	cout << "게임 종료!" << endl << "입력한 총 단어 갯수 : " << word_count;
}
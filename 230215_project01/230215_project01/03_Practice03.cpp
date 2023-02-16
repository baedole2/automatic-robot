// 프로젝트3 랜덤 숫자 맞추기
// 1) 컴퓨터가 1~25까지의 수 중 랜덤으로 6개의 수 지정 (중복 x)
// 2) 사용자도 1~25까지의 수 중 원하는 숫자 6개 입력 (중복 x)
// 3) 두 배열을 비교해서 몇 등인지 출력하기!
//		3-1) 한 개도 맞추지 못하면 7등, 1개만 맞추면 6등, 2개 맞추면 5등...
//		3-2) 6개를 모두 맞추면 1등

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {

	int input;
	int random_num;
	int prize = 0;
	int count = 6;
	vector<int> num;
	vector<int> com_num;

	std::srand(time(NULL));

	cout << "숫자는 1 ~ 25 까지의 숫자만 입력할 수 있습니다." << endl;

	for (int i = 0; i < count; i++) {
		cout << i + 1 << "번째 번호를 입력하세요. : ";
		cin >> input;
		if (input >= 1 && input <= 25)
			num.push_back(input);
		else {
			cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
			i--;
			continue;
		}
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j]) {	// 만든수를 중복검사_사용자
				cout << "이미 입력된 숫자입니다. 다시 입력해주세요." << endl;
				num.pop_back();
				i--;
			}
		}
	}
	for (int i = 0; i < count; i++) {
		random_num = std::rand() % 25 + 1;	//	난수생성
		com_num.push_back(random_num);
		for (int j = 0; j < i; j++) {
			if (com_num[i] == com_num[j]) {	// 만든수를 중복검사_컴퓨터
				com_num.pop_back();
				i--;
			}
		}
	}
	cout << "--------------------\n당첨번호 공개!" << endl;

	for (int i = 0; i < num.size(); i++) {
		for (int j = 0; j < com_num.size(); j++) {
			if (num[i] == com_num[j])
				prize++;
		}
		cout << com_num[i] << " ";
	}
	cout << "\n1 ~ 7등까지 결과가 나올 수 있습니다." << endl;
	cout << "결과: " << prize << "개의 숫자가 일치합니다. " << 7 - prize << "등 입니다!";
}
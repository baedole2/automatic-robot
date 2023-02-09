// 실습1 오버라이딩 이해하기
// (1) Student 라는 클래스 제작
// 조건 1. 이름, 학교 나이, 학번을 의미하는 변수를 가져야한다.
// 조건 2. 모든 변수의 값은 하위클래스에서 할당된다.
// 조건 3. lunch 이라는 메소드를 만들고, "점심은 학식" 출력
// 
// (2) Student 클래스를 상속받는 Kim 클래스와 Baek 클래스 만들기
// (3) Kim 클래스와 Baek 클래스 내의 변수값 다양하게 넣기
// (4) lunch 오버라이딩.
// -> Kim 클래스에서는 "점심은 김가네 김밥" 출력
// -> Baek 클래스에서는 "점심은 백종원 피자" 출력


#include <iostream>

using namespace std;

class Student {
protected:
	string name;
	string school;
	int age =0;
	int school_code =0;
public:
	void lunch() {
		cout << "점심은 학식~\n";
	}
};

class Kim : public Student {
public:
	Kim() {
		name = "김아르헨티나";
		school = "고려대";
		age = 52;
		school_code = 131;
	}
	void lunch() {
		cout << "점심은 김가네 김밥~☆\n";
	}
};

class Baek : public Student {
public:
	Baek() {
		name = "백브레이커";
		school = "죽이는대";
		age = 12;
		school_code = 132;
	}
	void lunch() {
		cout << "점심은 백종원 핏짜~♡\n";
	}
};

int main() {
	Kim k;
	Baek b;

	k.lunch();
	b.lunch();
}
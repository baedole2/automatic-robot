#include <iostream>


using namespace std;


struct Pos {	//기본이 public
	int x;
	int y;
};

class Cat {	//클래스, 기본이 private
public:	//공용으로 선언. 아래에 있는 코드만.
	string name;
	string jong;
	int age = 0;

	Cat() {	//생성자. class로 객체를 만들떄 바로 실행
		name = "모름";
		jong = "모름";
		age = 1;
	}

	Cat(string name, string jong) {
		this->name = name;	//클래스의 name을 가지고 오려면 this를 정의.
		this->jong = jong;
	}

	void meow() {	//메소드
		cout << "야옹!\n";
	}

	void eat() {
		std::cout << "생선을 먹는다\n";
	}
};



int main() {
	Pos p = { 2,6 };
	p.x = 5;
	
	
	Cat cat("나비", "페르시안");	//클래스를 이용해 만든 객체.생성자 실행
	//Cat cat();
	//Cat cat = Cat();
	
	cat.age = 5;	
	
	std::cout << cat.age << endl;

	return 0;
}
//#include <iostream>
//
//
//using namespace std;
//
//
//struct Pos {	//기본이 public
//	int x;
//	int y;
//};
//
//class Cat {	//클래스, 기본이 private
//public:	//공용으로 선언. 아래에 있는 코드만.
//	string name;
//	string jong;
//	int age = 0;
//
//	Cat() {	//생성자. class로 객체를 만들떄 바로 실행
//		name = "모름";
//		jong = "모름";
//		age = 1;
//	}
//
//	Cat(string name, string jong) {
//		this->name = name;	//클래스의 name을 가지고 오려면 this를 정의.
//		this->jong = jong;
//	}
//
//	void meow() {	//메소드
//		cout << "야옹!\n";
//	}
//
//	void eat() {
//		std::cout << "생선을 먹는다\n";
//	}
//
//
//	string get_name() {	//클래스 외부로 변수값을 반환하기 위한 방식
//		return name;
//	}
//
//	int get_age() {
//		return age;
//	}
//
//	string get_jong()
//	{
//		return jong;
//	}
//
//	void set_name(string name) {
//		this->name = name;	//클래스에 있던 이름을 매개변수 이름으로 바꾸겠다.
//	}
//	
//	void set_jong(string jong) {
//		this->jong = jong;	//클래스에 있던 종을 매개변수 종으로 바꾸겠다.
//	}
//
//	void set_age(int age) {
//		this->age = age;	//클래스에 있던 나이를 매개변수 나이로 바꾸겠다.
//	}
//
//};
//
//
//
//int main() {
//	Pos p = { 2,6 };
//	p.x = 5;
//	
//	
//	Cat cat("나비", "페르시안");	//클래스를 이용해 만든 객체.생성자 실행
//	//Cat cat();
//	//Cat cat = Cat();
//	
//	cat.set_age(5);
//	cat.set_name("바둑이");
//
//	int age = cat.get_age();
//	//std::cout << cat.age << endl;
//	//std::cout << age << endl;
//
//
//	cat.meow();
//	cat.eat();
//
//	//cat.name;
//	string name = cat.get_name();
//	cout << cat.get_name() << endl;
//	cout << cat.get_jong() << endl;
//	cout << cat.get_age() << endl;
//
//	return 0;
//}
#include <iostream>

// 필드(변수), 메소드(함수), 생성자(메소드의 일종), 소멸자(메소드의 일종)

using namespace std;

class Person {
	int age;
	string name;
	int* p = new int[3];
public:
	Person() {
		cout << "Person 생성자 실행" << endl;
	}
	Person(string name) {
		cout << "Person 생성자 실행2" << endl;
	}
	void test() {
		cout << "Person test" << endl;
	}
	~Person() {
		delete[] p;
		cout << "Person 소멸자 실행" << endl;
	}	// 소멸자 작성 방식
					// ~클래스() {}
};

class Student : public Person {
public:
	Student() {
		cout << "Student 생성자 실행" << endl;
	}
	Student(string name) {
		cout << "Student 생성자 실행2" << endl;
	}
	void test() {
		cout << "Student test" << endl;
	}
	~Student() {
		cout << "Student 소멸자 실행" << endl;
	}
};

int main() {
	//Person p("aaaa");
	//p.test();

	//p.~Person();

	//Person p2;

	//Person* p1 = new Person();

	Student s("bbbb");



	return 0;

}
#include <iostream>

// �ʵ�(����), �޼ҵ�(�Լ�), ������(�޼ҵ��� ����), �Ҹ���(�޼ҵ��� ����)

using namespace std;

class Person {
	int age;
	string name;
	int* p = new int[3];
public:
	Person() {
		cout << "Person ������ ����" << endl;
	}
	Person(string name) {
		cout << "Person ������ ����2" << endl;
	}
	void test() {
		cout << "Person test" << endl;
	}
	~Person() {
		delete[] p;
		cout << "Person �Ҹ��� ����" << endl;
	}	// �Ҹ��� �ۼ� ���
					// ~Ŭ����() {}
};

class Student : public Person {
public:
	Student() {
		cout << "Student ������ ����" << endl;
	}
	Student(string name) {
		cout << "Student ������ ����2" << endl;
	}
	void test() {
		cout << "Student test" << endl;
	}
	~Student() {
		cout << "Student �Ҹ��� ����" << endl;
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
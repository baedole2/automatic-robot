//#include <iostream>
//
//using namespace std;
//
//class Person {
//protected:
//	string name;
//	string position;
//public:
//	virtual void test() {	//동적 바인딩
//		cout << "Person 테스트 함수입니다.\n";
//	}
//	string get_position() {
//		return position;
//	}
//	string get_position2() {
//		cout << position << endl;
//		return position;
//	}
//};
//
//class Student : public Person {
//	string stu_id;
//public:
//	void aaa() {};
//	Student(string position) { this->position = position; };
//	void test() {
//		cout << "Student의 테스트 함수입니다.\n";
//	}
//};
//
//class Instructor : public Person {
//public:
//	Instructor(string position) { this->position = position; };
//};
//
//int main() {
//	//// Person p;
//	//Person p = Person();
//	//p.test();
//
//	// 상속상태 일 경우,
//	// 부모클래스로 자식클래스를 생성 가능.
//	//Person p2 = Student("홍길동");
//	//p2.test();
//	// 생성자가 Person으로 선언되어 Person의 멤버만 가져올 수 있게됨
//	// 따라서 오버라이딩이 일어나지 않고 Person의 test()가 실행
//
//	//p2.aaa();
//
//	// virtual + 포인터를 이용하면 자식클래스의 머시기를 가져오기 가능
//	//Person *p3 = new Student("홍길동");
//	//p3->test();
//
//	Person p3[4] = { Instructor("강사"),Student("학생 1"),Student("학생 2") ,Student("학생 3") };
//	for (int i = 0; i < 4; i++)
//	{
//		cout << p3[i].get_position() << endl;
//	}
//
//	return 0;
//}
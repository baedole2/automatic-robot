//#include <iostream>
//
//using namespace std;
//
//class Person {
//protected:
//	string name;
//	string position;
//public:
//	virtual void test() {	//���� ���ε�
//		cout << "Person �׽�Ʈ �Լ��Դϴ�.\n";
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
//		cout << "Student�� �׽�Ʈ �Լ��Դϴ�.\n";
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
//	// ��ӻ��� �� ���,
//	// �θ�Ŭ������ �ڽ�Ŭ������ ���� ����.
//	//Person p2 = Student("ȫ�浿");
//	//p2.test();
//	// �����ڰ� Person���� ����Ǿ� Person�� ����� ������ �� �ְԵ�
//	// ���� �������̵��� �Ͼ�� �ʰ� Person�� test()�� ����
//
//	//p2.aaa();
//
//	// virtual + �����͸� �̿��ϸ� �ڽ�Ŭ������ �ӽñ⸦ �������� ����
//	//Person *p3 = new Student("ȫ�浿");
//	//p3->test();
//
//	Person p3[4] = { Instructor("����"),Student("�л� 1"),Student("�л� 2") ,Student("�л� 3") };
//	for (int i = 0; i < 4; i++)
//	{
//		cout << p3[i].get_position() << endl;
//	}
//
//	return 0;
//}
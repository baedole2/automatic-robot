//#include <iostream>
//
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;
//
//class Person {
//protected:
//	string name;
//private:
//	string gender;
//public:
//	Person() {
//		cout << "Person ������ �����.\n";
//	}
//	Person(string name) {
//		cout << "Person ������22 �����.\n";
//		this->name = name;
//	}
//
//	int age;
//
//	void talk() {
//		cout << "���ϱ�\n";
//	}
//	void cat() {
//		cout << "�Ա�\n";
//	}
//	void sleep() {
//		cout << "���ڱ�\n";
//	}
//};
//
////�ߺ��Ǵ� �ڵ带 ���̱����� ���
////Person Ŭ������ ���빰�� �̿��ϴ�(���)
////Student Ŭ������ ����
//class Student : public Person {	// public �������� Person�� ��� ����� ���� �� ����
//	string stu_id;				// protected �� public �κ��� protected�� �ٲ� ������ ������
//public:				
//	Student() {
//		cout << "Student ������ �����.\n";
//	}// private�� ��� private�� �������� �ȴ�. 
//	Student(string str) : Person("aaa"){
//		cout << "Student ������22 �����.\n";
//	}
//
//
//	void study() {				// �ƹ��͵� �Ⱦ���� private�� ����Ʈ�� �ȴ�.
//
//		cout << "�����ϱ�\n";
//	}
//
//	//void test() {
//	//	name = "�л�1";
//	//	//gender = "����";	
//	//	age = 5;
//	//}
//};
//
//int main() {
//	class Prof : public Person {
//		void test() {
//			name = "aaaa";
//		}
//	};
//	Student s;
//	//s.name = "ȫ�浿";	protected�� ����� �޾����� ��� �������� Ŭ������ �ƴ϶� ��� �Ұ���
//	s.age = 21;
//
//	return 0;
//}
//#include <iostream>
//
//
//using namespace std;
//
//
//struct Pos {	//�⺻�� public
//	int x;
//	int y;
//};
//
//class Cat {	//Ŭ����, �⺻�� private
//public:	//�������� ����. �Ʒ��� �ִ� �ڵ常.
//	string name;
//	string jong;
//	int age = 0;
//
//	Cat() {	//������. class�� ��ü�� ���鋚 �ٷ� ����
//		name = "��";
//		jong = "��";
//		age = 1;
//	}
//
//	Cat(string name, string jong) {
//		this->name = name;	//Ŭ������ name�� ������ ������ this�� ����.
//		this->jong = jong;
//	}
//
//	void meow() {	//�޼ҵ�
//		cout << "�߿�!\n";
//	}
//
//	void eat() {
//		std::cout << "������ �Դ´�\n";
//	}
//
//
//	string get_name() {	//Ŭ���� �ܺη� �������� ��ȯ�ϱ� ���� ���
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
//		this->name = name;	//Ŭ������ �ִ� �̸��� �Ű����� �̸����� �ٲٰڴ�.
//	}
//	
//	void set_jong(string jong) {
//		this->jong = jong;	//Ŭ������ �ִ� ���� �Ű����� ������ �ٲٰڴ�.
//	}
//
//	void set_age(int age) {
//		this->age = age;	//Ŭ������ �ִ� ���̸� �Ű����� ���̷� �ٲٰڴ�.
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
//	Cat cat("����", "�丣�þ�");	//Ŭ������ �̿��� ���� ��ü.������ ����
//	//Cat cat();
//	//Cat cat = Cat();
//	
//	cat.set_age(5);
//	cat.set_name("�ٵ���");
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
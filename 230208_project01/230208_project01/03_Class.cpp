#include <iostream>


using namespace std;


struct Pos {	//�⺻�� public
	int x;
	int y;
};

class Cat {	//Ŭ����, �⺻�� private
public:	//�������� ����. �Ʒ��� �ִ� �ڵ常.
	string name;
	string jong;
	int age = 0;

	Cat() {	//������. class�� ��ü�� ���鋚 �ٷ� ����
		name = "��";
		jong = "��";
		age = 1;
	}

	Cat(string name, string jong) {
		this->name = name;	//Ŭ������ name�� ������ ������ this�� ����.
		this->jong = jong;
	}

	void meow() {	//�޼ҵ�
		cout << "�߿�!\n";
	}

	void eat() {
		std::cout << "������ �Դ´�\n";
	}
};



int main() {
	Pos p = { 2,6 };
	p.x = 5;
	
	
	Cat cat("����", "�丣�þ�");	//Ŭ������ �̿��� ���� ��ü.������ ����
	//Cat cat();
	//Cat cat = Cat();
	
	cat.age = 5;	
	
	std::cout << cat.age << endl;

	return 0;
}
// �ǽ�1 �������̵� �����ϱ�
// (1) Student ��� Ŭ���� ����
// ���� 1. �̸�, �б� ����, �й��� �ǹ��ϴ� ������ �������Ѵ�.
// ���� 2. ��� ������ ���� ����Ŭ�������� �Ҵ�ȴ�.
// ���� 3. lunch �̶�� �޼ҵ带 �����, "������ �н�" ���
// 
// (2) Student Ŭ������ ��ӹ޴� Kim Ŭ������ Baek Ŭ���� �����
// (3) Kim Ŭ������ Baek Ŭ���� ���� ������ �پ��ϰ� �ֱ�
// (4) lunch �������̵�.
// -> Kim Ŭ���������� "������ �谡�� ���" ���
// -> Baek Ŭ���������� "������ ������ ����" ���


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
		cout << "������ �н�~\n";
	}
};

class Kim : public Student {
public:
	Kim() {
		name = "��Ƹ���Ƽ��";
		school = "�����";
		age = 52;
		school_code = 131;
	}
	void lunch() {
		cout << "������ �谡�� ���~��\n";
	}
};

class Baek : public Student {
public:
	Baek() {
		name = "��극��Ŀ";
		school = "���̴´�";
		age = 12;
		school_code = 132;
	}
	void lunch() {
		cout << "������ ������ ��¥~��\n";
	}
};

int main() {
	Kim k;
	Baek b;

	k.lunch();
	b.lunch();
}
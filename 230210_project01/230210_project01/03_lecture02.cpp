//#include <iostream>
//
//using namespace std;
//
//class Elec {	//�߻� Ŭ����
//public:
//	virtual void on() = 0;	// �߻�޼ҵ� (���� �����Լ�)
//	virtual void off() = 0;
//	void test(){
//		cout << "test";
//	}
//
//};
//
//class TV : public Elec{
//public:
//	void on() {
//		cout << "TV �ѱ�" << endl;
//	}
//	virtual void off() {
//		cout << "TV ����" << endl;
//	}
//};
//
//class Radio : public Elec {
//public:
//	void on() {
//		cout << "���� �ѱ�" << endl;
//	}
//	virtual void off() {
//		cout << "���� ����" << endl;
//	}
//
//};
//
//int main() {
//	//Elec elec; -> �Ұ���. �߻� �޼ҵ尡 �ִ� �θ�Ŭ�����̱� ������.
//
//
//	TV tv;
//	tv.test();
//	tv.on();
//
//	Radio ra;
//	ra.on();
//
//	return 0;
//}
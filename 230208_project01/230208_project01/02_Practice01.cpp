#include <iostream>

struct Rectangle {
	double width;
	double height;
};


using namespace std;

int main() {
	
	//�ǽ�1 Rectangle ����ü �����
	//���� width, height
	//����ü�� �̿��Ͽ� ������ �����ϰ� ,width�� height���� �ַܼ� �Է� �޾Ƽ� �Ҵ�
	//width�� height���� �̿��� ���̸� ����Ͽ� ���

	Rectangle rect;

	cout << "���� ���̸� �Է��ϼ���. :";
	cin >> rect.width;

	cout << "���� ���̸� �Է��ϼ���. :";
	cin >> rect.height;

	cout << "���̴� : " << rect.width * rect.height;
}
//#include <iostream>
//
//using namespace std;
//
//class Rectangle {
//	double width = 0;
//	double height = 0;
//
//public:
//	Rectangle(double width, double height) {
//		this->width = width;
//		this->height = height;
//	}
//
//	double area() {
//		return width * height;
//	}
//};
//
//int main() {
//	//�ǽ�1 Ŭ���� ����غ���
//	//Rectangle ����ü ����� 
//	//�ʵ�(����) width, height
//	//������ : width�� height ������ 2���� ���ڸ� �Ű������� �ޱ�.
//	//�޼ҵ� : width�� height�� �̿��Ͽ� �簢���� ���̸� ��ȯ�ϴ� area �޼ҵ� �����
//	//��ü ���� �ÿ� width�� height�� ����ڿ��� �Է� �޾� �����ڷ� �Ѱ��ֱ�
//
//	double input_num1,input_num2;
//	
//	cout << "���̸� �Է� : ";
//	cin >> input_num1;
//
//	cout << "���̸� �Է� : ";
//	cin >> input_num2;
//
//	Rectangle rect(input_num1, input_num2);
//	cout << "���̴� : " << rect.area();
//
//}
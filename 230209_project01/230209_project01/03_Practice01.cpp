//// �ǽ�1 ��� ����غ���
//// (1) Shape��� Ŭ������ ������ּ���. �� Ŭ������ �Ʒ� ������ �����ؾ� �մϴ�.
//// ���� 1. ���� ����, �غ��� ���̸� �����ϴ� ������ ������ �־�� �մϴ�.
//// ���� 2. ���� ������ �غ��� ���̸� ����ϴ� printInfo() �Լ��� ������ �־�� �մϴ�. 
////
//// (2) Shape Ŭ������ ��� �޴� Rectangle, Triangle Ŭ������ ������ּ���. �� Ŭ�������� �Ʒ� ������ �����ؾ� �մϴ�.
//// ���� 1. Rectangle Ŭ�������� ���� ���̸� �ǹ��ϴ� ������ ������ �־�� �մϴ�.
//// ���� 2. Triangle Ŭ�������� ���� ���̸� �ǹ��ϴ� ������ ������ �־�� �մϴ�.
//// ���� 3. �� Ŭ�������� ���� ������ ���̸� ���ϰ� ����ϴ� area() �Լ��� ������ �־�� �մϴ�.
//// ���� 4. �� Ŭ���� ��� �����ڿ��� ��� ������ ���� �������ּ���. (��, �غ��� ����)
//// 
//// (3) ���� �Լ����� Triangle�� Rectangle Ŭ������ ���� ���� �ν��Ͻ��� ����� area() �Լ��� �����Ű���� ������ּ���.
////
//
//#include <iostream>
//
//using namespace std;
//
//class Shape {
//protected:
//	double sideNum;	// ���� ����
//	double down_side_width;	// �غ��� ����
//public:
//	void printInfo() {
//		cout << "���� ���� : " << sideNum << " , �غ��� ���� : " << down_side_width;
//	}
//};
//
//class Rectangle : public Shape {
//	double length;	// �簢�� ���α���;
//public:
//	Rectangle(double down_side_width, double length) {
//		//��� ������ �� �Է��ϵ���.
//		this->down_side_width = down_side_width;
//		this->length = length;
//	}
//	void area() {
//		cout << "�簢���� ���� : " << down_side_width * length << endl;
//	}
//};
//
//class Triangle : public Shape {
//	double height;	// �ﰢ�� ����;
//public:
//	Triangle(double down_side_width, double height) {
//		//��� ������ �� �Է��ϵ���.
//		this->down_side_width = down_side_width;
//		this->height = height;
//	}
//	void area() {
//		cout << "�ﰢ���� ���� : " << down_side_width * height * 0.5 << endl;
//	}
//};
//
//int main() {
//	double num1, num2;
//
//	cout << "�簢�� ���� ���ϱ�\n";
//	cout << "1-1) �簢���� ���α��̸� �Է��ϼ���. : ";
//	cin >> num1;
//
//	cout << "1-2) �簢���� ���α��̸� �Է��ϼ���. : ";
//	cin >> num2;
//
//	Rectangle rect(num1, num2);
//	rect.area();
//
//	cout << "----------\n";
//	cout << "�ﰢ������ ���ϱ�\n";
//	cout << "2-1) �ﰢ���� ���α��̸� �Է��ϼ���. : ";
//	cin >> num1;
//
//	cout << "2-2) �ﰢ���� ���α��̸� �Է��ϼ���. : ";
//	cin >> num2;
//
//	Triangle tri(num1, num2);
//	tri.area();
//}
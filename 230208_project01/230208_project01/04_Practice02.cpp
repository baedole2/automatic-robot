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
//	//실습1 클래스 사용해보기
//	//Rectangle 구조체 만들기 
//	//필드(변수) width, height
//	//생성자 : width와 height 설정할 2개의 숫자를 매개변수로 받기.
//	//메소드 : width와 height를 이용하여 사각형의 넓이를 반환하는 area 메소드 만들기
//	//객체 생성 시에 width와 height을 사용자에게 입력 받아 생성자로 넘겨주기
//
//	double input_num1,input_num2;
//	
//	cout << "길이를 입력 : ";
//	cin >> input_num1;
//
//	cout << "높이를 입력 : ";
//	cin >> input_num2;
//
//	Rectangle rect(input_num1, input_num2);
//	cout << "넓이는 : " << rect.area();
//
//}
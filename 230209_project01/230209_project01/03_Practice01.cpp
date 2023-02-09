//// 실습1 상속 사용해보기
//// (1) Shape라는 클래스를 만들어주세요. 이 클래스는 아래 조건을 만족해야 합니다.
//// 조건 1. 변의 개수, 밑변의 길이를 저장하는 변수를 가지고 있어야 합니다.
//// 조건 2. 변의 개수와 밑변의 길이를 출력하는 printInfo() 함수를 가지고 있어야 합니다. 
////
//// (2) Shape 클래스를 상속 받는 Rectangle, Triangle 클래스를 만들어주세요. 이 클래스들은 아래 조건을 만족해야 합니다.
//// 조건 1. Rectangle 클래스에는 세로 길이를 의미하는 변수를 가지고 있어야 합니다.
//// 조건 2. Triangle 클래스에는 높이 길이를 의미하는 변수를 가지고 있어야 합니다.
//// 조건 3. 두 클래스에는 각각 도형의 넓이를 구하고 출력하는 area() 함수를 가지고 있어야 합니다.
//// 조건 4. 두 클래스 모두 생성자에서 모든 변수에 값을 대입해주세요. (변, 밑변도 대입)
//// 
//// (3) 메인 함수에서 Triangle과 Rectangle 클래스를 통해 각각 인스턴스를 만들고 area() 함수를 실행시키도록 만들어주세요.
////
//
//#include <iostream>
//
//using namespace std;
//
//class Shape {
//protected:
//	double sideNum;	// 변의 갯수
//	double down_side_width;	// 밑변의 길이
//public:
//	void printInfo() {
//		cout << "변의 갯수 : " << sideNum << " , 밑변의 길이 : " << down_side_width;
//	}
//};
//
//class Rectangle : public Shape {
//	double length;	// 사각형 세로길이;
//public:
//	Rectangle(double down_side_width, double length) {
//		//모든 변수에 값 입력하도록.
//		this->down_side_width = down_side_width;
//		this->length = length;
//	}
//	void area() {
//		cout << "사각형의 넓이 : " << down_side_width * length << endl;
//	}
//};
//
//class Triangle : public Shape {
//	double height;	// 삼각형 높이;
//public:
//	Triangle(double down_side_width, double height) {
//		//모든 변수에 값 입력하도록.
//		this->down_side_width = down_side_width;
//		this->height = height;
//	}
//	void area() {
//		cout << "삼각형의 넓이 : " << down_side_width * height * 0.5 << endl;
//	}
//};
//
//int main() {
//	double num1, num2;
//
//	cout << "사각형 넓이 구하기\n";
//	cout << "1-1) 사각형의 가로길이를 입력하세요. : ";
//	cin >> num1;
//
//	cout << "1-2) 사각형의 세로길이를 입력하세요. : ";
//	cin >> num2;
//
//	Rectangle rect(num1, num2);
//	rect.area();
//
//	cout << "----------\n";
//	cout << "삼각형넓이 구하기\n";
//	cout << "2-1) 삼각형의 가로길이를 입력하세요. : ";
//	cin >> num1;
//
//	cout << "2-2) 삼각형의 세로길이를 입력하세요. : ";
//	cin >> num2;
//
//	Triangle tri(num1, num2);
//	tri.area();
//}
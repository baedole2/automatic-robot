#include <iostream>

struct Rectangle {
	double width;
	double height;
};


using namespace std;

int main() {
	
	//실습1 Rectangle 구조체 만들기
	//변수 width, height
	//구조체를 이용하여 변수를 생성하고 ,width와 height값을 콘솔로 입력 받아서 할당
	//width와 height값을 이용해 넓이를 계산하여 출력

	Rectangle rect;

	cout << "가로 길이를 입력하세요. :";
	cin >> rect.width;

	cout << "세로 길이를 입력하세요. :";
	cin >> rect.height;

	cout << "넓이는 : " << rect.width * rect.height;
}
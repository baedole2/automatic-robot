//// 실습1 추상클래스
//// (1) Shape 클래스를 상속받는 Circle 클래스, Rect클래스, Tria 클래스를 구현해주세요.
//// (2) 도형의 이름을 출력하는 draw() 메소드를 구현해주세요.
//
//#include <iostream>
//
//using namespace std;
//
//class Shape {
//protected:
//	virtual void draw() = 0;
//};
//
//class Circle {
//public:
//	void draw() {
//		cout << "동그롸미 ○" << endl;
//	}
//};
//
//class Rect {
//public:
//	void draw() {
//		cout << "네모 □" << endl;
//	}
//};
//
//class Tria {
//public:
//	void draw() {
//		cout << "세모 △" << endl;
//	}
//};
//
//int main()
//{
//	Circle c;
//	Rect r;
//	Tria t;
//
//	c.draw();
//	r.draw();
//	t.draw();
//}
//

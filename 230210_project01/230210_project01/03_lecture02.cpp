//#include <iostream>
//
//using namespace std;
//
//class Elec {	//추상 클래스
//public:
//	virtual void on() = 0;	// 추상메소드 (순수 가상함수)
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
//		cout << "TV 켜기" << endl;
//	}
//	virtual void off() {
//		cout << "TV 끄기" << endl;
//	}
//};
//
//class Radio : public Elec {
//public:
//	void on() {
//		cout << "라디오 켜기" << endl;
//	}
//	virtual void off() {
//		cout << "라디오 끄기" << endl;
//	}
//
//};
//
//int main() {
//	//Elec elec; -> 불가능. 추상 메소드가 있는 부모클래스이기 떄문에.
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
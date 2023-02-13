//// 실습 1 간식바구니
//// (1) Candy 클래스와 Chocolate 클래스를 만들어주세요.
//// 조건 1. Candy 클래스는 맛, 가격, 상품이름, 제조회사를 의미하는 변수를 가지고 있어야 합니다.
//// 조건 2. Chocolate 클래스는 모양, 가격, 상품이름, 제조회사를 의미하는 변수를 가지고 있어야 합니다.
//// 조건 3. Candy 클래스와 Chocolate클래스는 모두 같은 상위 클래스(Snack)로부터 상속을 받아야 합니다.
//// 
//// (2) 메인 함수에 snackBasket이라는 이름의 배열을 만들어주세요.
//// 위에서 만든 Candy 클래스와 Chocolate 클래스로 각각 두개의 객체 만들기
//// 만든 총 4개의 객체를 snackBasket 이라는 배열에 넣어주세요.
//// 4개의 인스턴스를 모두 넣었다면 메인 하수에서 반복문을 통해 snackBasket 안에
//// 들어있는 간식들의 상품 이름, 맛, 모양을 출력해주세요.
////
////
////
//
//
//#include <iostream>
//
//using namespace std;
//
//class Snack {
//	int price = 0;
//	string name;
//	string made_by;
//public:
//	void set_price(int price) { this->price = price; };
//	void set_name(string name) { this->name = name; };
//	void set_made_by(string made_by) { this->made_by = made_by; };
//
//	int get_price() { return price;};
//	string get_name() { return name; };
//	string get_made_by() { return made_by; };
//
//	// 자식 클래스의 메소드를 사용하기위해 가상함수로 만듬
//	virtual string get_flavor() { return ""; };
//	virtual string get_shape() { return ""; };
//};
//
//class Candy : public Snack {
//	string flavor ="";
//public:
//	Candy(string flavor, int price, string name, string made_by) {
//		set_flavor(flavor);
//		set_price(price);
//		set_name(name);
//		set_made_by(made_by);
//	};
//	void set_flavor(string flavor) { this->flavor = flavor; };
//	
//	string get_flavor() { return flavor; };
//};
//
//class Chocolate : public Snack {
//	string shape;
//public:
//	Chocolate( string shape, int price, string name, string made_by) {
//		set_shape(shape);
//		set_price(price);
//		set_name(name);
//		set_made_by(made_by);
//	};
//	void set_shape(string shape) { this->shape = shape; };
//	
//	string get_shape() { return shape; };
//};
//
//int main() {
//	// 동적 메모리 할당 + 내용 입력
//	Snack* snackBasket[4] = { new Candy("홍삼",300,"거친 으르신의 사탕","오리온"),
//							 new Candy("누룽지",800,"상냥한 으르신의 사탕","롯데"),
//							 new Chocolate("별",700,"얄팍한 애송이의 초콜릿","해태"),
//							 new Chocolate("번개",500,"비겁한 애송이의 초콜릿","삼양") };
//
//	
//	cout << "용진제과 상품 목록입니다.\n";
//	for (int i = 0; i < 4; i++){
//		cout << "제품명 : " << snackBasket[i]->get_name() << endl;
//		cout << "제조사 : " << snackBasket[i]->get_made_by() << endl;
//		cout << "가격 : " << snackBasket[i]->get_price() << endl;
//
//		// 맛의 내용이 default가 아닐 경우 Candy class 항목 출력
//		if (snackBasket[i]->get_flavor() != "") 
//			cout << "맛 : " << snackBasket[i]->get_flavor() << endl;
//		else	// 맛의 내용이 default 일 경우 Chocolate class 항목 출력
//			cout << "모양 : " << snackBasket[i]->get_shape() << endl;
//		cout << "--------------------" << endl;
//	}
//
//	// 동적 메모리 초기화
//	for (int i = 0; i < 4; i++) {
//		delete snackBasket[i];
//	}
//}
// 실습1 static 멤버
// (1) 간식 바구니 프로그램을 활용하여 아래 사진과 같은 프로그램 만들기.
// *notion 첨부 2023-02-13 메모
//


#include <iostream>
#include <vector>

using namespace std;

class Snack {
	static int snack_count;

	int price = 0;
	string name;
	string made_by;
public:

	static int get_snack_count() {
		return snack_count;
	}

	Snack() {
		snack_count++;;
	}

	void set_price(int price) { this->price = price; };
	void set_name(string name) { this->name = name; };
	void set_made_by(string made_by) { this->made_by = made_by; };

	int get_price() { return price;};
	string get_name() { return name; };
	string get_made_by() { return made_by; };

	// 자식 클래스의 메소드를 사용하기위해 가상함수로 만듬
	virtual string get_flavor() { return ""; };
	virtual string get_shape() { return ""; };
};

class Candy : public Snack {
	string flavor ="";

public:
	Candy(string flavor, int price, string name, string made_by) {
		set_flavor(flavor);
		set_price(price);
		set_name(name);
		set_made_by(made_by);
		
	};


	void set_flavor(string flavor) { this->flavor = flavor; };
	
	string get_flavor() { return flavor; };
};

class Chocolate : public Snack {
	string shape;

public:
	Chocolate( string shape, int price, string name, string made_by) {
		set_shape(shape);
		set_price(price);
		set_name(name);
		set_made_by(made_by);
	};
	void set_shape(string shape) { this->shape = shape; };
	
	string get_shape() { return shape; };
};

int Snack::snack_count = 0;

int main() {
	// 동적 메모리 할당 + 내용 입력
	Snack* snackBasket[4] = { new Candy("홍삼",300,"거친 으르신의 사탕","오리온"),
							 new Candy("누룽지",800,"상냥한 으르신의 사탕","롯데"),
							 new Chocolate("별",700,"얄팍한 애송이의 초콜릿","해태"),
							 new Chocolate("번개",500,"비겁한 애송이의 초콜릿","삼양") };

	int input = 99;
	string input_str;

	vector<Snack*>mySnackBasket;

	while (input)
	{
		cout << "과자 바구니에 추가할 간식을 고르세요.( 1: 사탕, 2: 초콜릿, 0: 종료 ) : ";
		cin >> input;
		switch (input) {
		case 1:
			cout << "맛을 입력하세요. : ";
			cin >> input_str;
			for (int i = 0; i < 4; i++) {
				if (input_str == snackBasket[i]->get_flavor()) {
					mySnackBasket.push_back(new Candy(snackBasket[i]->get_flavor(), snackBasket[i]->get_price(),
													  snackBasket[i]->get_name(), snackBasket[i]->get_made_by()));
				}
			}
			break;
		case 2:

			cout << "모양을 입력하세요. : ";
			cin >> input_str;
			for (int i = 0; i < 4; i++) {
				if (input_str == snackBasket[i]->get_shape()) {
					mySnackBasket.push_back(new Chocolate(snackBasket[i]->get_shape(), snackBasket[i]->get_price(),
														  snackBasket[i]->get_name(), snackBasket[i]->get_made_by()));
				}
			}
			break;
		case 0:	//종료
			cout << endl << endl << endl;
			break;
		default:
			cout << "0-2 사이의 숫자를 입력하세요." << endl;
			break;
		}
	}

	cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::get_snack_count()-4 << " 개입니다! " << endl;
	cout << "과자 바구니에 담긴 간식 확인하기!!" << endl;

	int size = mySnackBasket.size();
	for (int i = 0; i < size; i++)
	{
		cout << mySnackBasket[i]->get_name() << endl;
	}


	for (int i = 0; i < size; i++) {
		delete mySnackBasket.at(i); //
	}
	//
	for (int i = 0; i < size; i++) {
		mySnackBasket.pop_back();
	}


	// 동적 메모리 초기화 + 프로그램 종료
	for (int i = 0; i < 4; i++) {
		delete snackBasket[i];
	}

}
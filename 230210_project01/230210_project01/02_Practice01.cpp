//// �ǽ� 1
//// (1) Candy Ŭ������ Chocolate Ŭ������ ������ּ���.
//// ���� 1. Candy Ŭ������ ��, ����, ��ǰ�̸�, ����ȸ�縦 �ǹ��ϴ� ������ ������ �־�� �մϴ�.
//// ���� 2. Chocolate Ŭ������ ���, ����, ��ǰ�̸�, ����ȸ�縦 �ǹ��ϴ� ������ ������ �־�� �մϴ�.
//// ���� 3. Candy Ŭ������ ChocolateŬ������ ��� ���� ���� Ŭ����(Snack)�κ��� ����� �޾ƾ� �մϴ�.
//// 
//// (2) ���� �Լ��� snackBasket�̶�� �̸��� �迭�� ������ּ���.
//// ������ ���� Candy Ŭ������ Chocolate Ŭ������ ���� �ΰ��� ��ü �����
//// ���� �� 4���� ��ü�� snackBasket �̶�� �迭�� �־��ּ���.
//// 4���� �ν��Ͻ��� ��� �־��ٸ� ���� �ϼ����� �ݺ����� ���� snackBasket �ȿ�
//// ����ִ� ���ĵ��� ��ǰ �̸��� ������ּ���.
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
//};
//
//class Candy : public Snack {
//	string flavor;
//public:
//	Candy(string flavor, int price, string name, string made_by) {
//		set_flavor(flavor);
//		set_price(price);
//		set_name(name);
//		set_made_by(made_by);
//	};
//	void set_flavor(string flavor) { this->flavor = flavor; };
//	// string get_flavor() { return flavor; };
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
//	// string get_shape() { return shape; };
//};
//
//int main() {
//
//	Snack snackBasket[4] = { Candy("ȫ��",300,"��ģ �������� ����","������"),
//							 Candy("������",800,"����� �������� ����","�Ե�"),
//							 Chocolate("��",700,"������ �ּ����� ���ݸ�","����"),
//							 Chocolate("����",500,"����� �ּ����� ���ݸ�","���") };
//
//	
//	cout << "�������� ��ǰ ����Դϴ�.\n";
//	for (int i = 0; i < 4; i++){
//		cout << "��ǰ�� : " << snackBasket[i].get_name() << endl;
//		cout << "������ : " << snackBasket[i].get_made_by() << endl;
//		cout << "���� : " << snackBasket[i].get_price() << endl;
//		cout << "--------------------" << endl;
//	}
//}
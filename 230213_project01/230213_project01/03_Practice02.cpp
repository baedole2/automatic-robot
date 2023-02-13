// �ǽ�1 static ���
// (1) ���� �ٱ��� ���α׷��� Ȱ���Ͽ� �Ʒ� ������ ���� ���α׷� �����.
// *notion ÷�� 2023-02-13 �޸�
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

	// �ڽ� Ŭ������ �޼ҵ带 ����ϱ����� �����Լ��� ����
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
	// ���� �޸� �Ҵ� + ���� �Է�
	Snack* snackBasket[4] = { new Candy("ȫ��",300,"��ģ �������� ����","������"),
							 new Candy("������",800,"����� �������� ����","�Ե�"),
							 new Chocolate("��",700,"������ �ּ����� ���ݸ�","����"),
							 new Chocolate("����",500,"����� �ּ����� ���ݸ�","���") };

	int input = 99;
	string input_str;

	vector<Snack*>mySnackBasket;

	while (input)
	{
		cout << "���� �ٱ��Ͽ� �߰��� ������ ������.( 1: ����, 2: ���ݸ�, 0: ���� ) : ";
		cin >> input;
		switch (input) {
		case 1:
			cout << "���� �Է��ϼ���. : ";
			cin >> input_str;
			for (int i = 0; i < 4; i++) {
				if (input_str == snackBasket[i]->get_flavor()) {
					mySnackBasket.push_back(new Candy(snackBasket[i]->get_flavor(), snackBasket[i]->get_price(),
													  snackBasket[i]->get_name(), snackBasket[i]->get_made_by()));
				}
			}
			break;
		case 2:

			cout << "����� �Է��ϼ���. : ";
			cin >> input_str;
			for (int i = 0; i < 4; i++) {
				if (input_str == snackBasket[i]->get_shape()) {
					mySnackBasket.push_back(new Chocolate(snackBasket[i]->get_shape(), snackBasket[i]->get_price(),
														  snackBasket[i]->get_name(), snackBasket[i]->get_made_by()));
				}
			}
			break;
		case 0:	//����
			cout << endl << endl << endl;
			break;
		default:
			cout << "0-2 ������ ���ڸ� �Է��ϼ���." << endl;
			break;
		}
	}

	cout << "���� �ٱ��Ͽ� ��� ������ ������ " << Snack::get_snack_count()-4 << " ���Դϴ�! " << endl;
	cout << "���� �ٱ��Ͽ� ��� ���� Ȯ���ϱ�!!" << endl;

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


	// ���� �޸� �ʱ�ȭ + ���α׷� ����
	for (int i = 0; i < 4; i++) {
		delete snackBasket[i];
	}

}
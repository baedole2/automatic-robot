//// �ǽ�1 ������ �ǽ� ���� ����
//// (1) �Ʒ� �ǽ� ���α׷� �ڵ� �����غ���
//// ���� ��, ���� ������ ���α׷� ���� �ܼ� â�� ���� ���̰� ĸ��!
//// *notion ÷�� 2023-02-14 �޸�
////
//
//
//#include <iostream>
//#include <vector>
//#include "Snack.h"
//#include "Candy.h"
//#include "Chocolate.h"
//
//using namespace std;
//
//int main() {
//	// ���� �޸� �Ҵ� + ���� �Է�
//	Snack* snackBasket[4] = { new Candy("ȫ��",300,"��ģ �������� ����","������"),
//							 new Candy("������",800,"����� �������� ����","�Ե�"),
//							 new Chocolate("��",700,"������ �ּ����� ���ݸ�","����"),
//							 new Chocolate("����",500,"����� �ּ����� ���ݸ�","���") };
//
//	int input = 99;
//	string input_str;
//
//	vector<Snack*>mySnackBasket;
//
//	while (input)
//	{
//		cout << "���� �ٱ��Ͽ� �߰��� ������ ������.( 1: ����, 2: ���ݸ�, 0: ���� ) : ";
//		cin >> input;
//		switch (input) {
//		case 1:
//			cout << "���� �Է��ϼ���. : ";
//			cin >> input_str;
//			for (int i = 0; i < 4; i++) {
//				if (input_str == snackBasket[i]->get_flavor()) {
//					mySnackBasket.push_back(new Candy(snackBasket[i]->get_flavor(), snackBasket[i]->get_price(),
//													  snackBasket[i]->get_name(), snackBasket[i]->get_made_by()));
//				}
//			}
//			break;
//		case 2:
//
//			cout << "����� �Է��ϼ���. : ";
//			cin >> input_str;
//			for (int i = 0; i < 4; i++) {
//				if (input_str == snackBasket[i]->get_shape()) {
//					mySnackBasket.push_back(new Chocolate(snackBasket[i]->get_shape(), snackBasket[i]->get_price(),
//														  snackBasket[i]->get_name(), snackBasket[i]->get_made_by()));
//				}
//			}
//			break;
//		case 0:	//����
//			cout << endl << endl << endl;
//			break;
//		default:
//			cout << "0-2 ������ ���ڸ� �Է��ϼ���." << endl;
//			break;
//		}
//	}
//
//	cout << "���� �ٱ��Ͽ� ��� ������ ������ " << Snack::get_snack_count()-4 << " ���Դϴ�! " << endl;
//	cout << "���� �ٱ��Ͽ� ��� ���� Ȯ���ϱ�!!" << endl;
//
//	int size = mySnackBasket.size();
//	for (int i = 0; i < size; i++)
//	{
//		cout << mySnackBasket[i]->get_name() << endl;
//	}
//
//
//	for (int i = 0; i < size; i++) {
//		delete mySnackBasket.at(i); //
//	}
//	//
//	for (int i = 0; i < size; i++) {
//		mySnackBasket.pop_back();
//	}
//
//
//	// ���� �޸� �ʱ�ȭ + ���α׷� ����
//	for (int i = 0; i < 4; i++) {
//		delete snackBasket[i];
//	}
//
//}
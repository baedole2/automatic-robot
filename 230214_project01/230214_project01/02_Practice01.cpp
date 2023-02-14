//// 실습1 마지막 실습 파일 분할
//// (1) 아래 실습 프로그램 코드 분할해보기
//// 분할 후, 폴더 구조와 프로그램 실행 콘솔 창이 같이 보이게 캡쳐!
//// *notion 첨부 2023-02-14 메모
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
//	// 동적 메모리 할당 + 내용 입력
//	Snack* snackBasket[4] = { new Candy("홍삼",300,"거친 으르신의 사탕","오리온"),
//							 new Candy("누룽지",800,"상냥한 으르신의 사탕","롯데"),
//							 new Chocolate("별",700,"얄팍한 애송이의 초콜릿","해태"),
//							 new Chocolate("번개",500,"비겁한 애송이의 초콜릿","삼양") };
//
//	int input = 99;
//	string input_str;
//
//	vector<Snack*>mySnackBasket;
//
//	while (input)
//	{
//		cout << "과자 바구니에 추가할 간식을 고르세요.( 1: 사탕, 2: 초콜릿, 0: 종료 ) : ";
//		cin >> input;
//		switch (input) {
//		case 1:
//			cout << "맛을 입력하세요. : ";
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
//			cout << "모양을 입력하세요. : ";
//			cin >> input_str;
//			for (int i = 0; i < 4; i++) {
//				if (input_str == snackBasket[i]->get_shape()) {
//					mySnackBasket.push_back(new Chocolate(snackBasket[i]->get_shape(), snackBasket[i]->get_price(),
//														  snackBasket[i]->get_name(), snackBasket[i]->get_made_by()));
//				}
//			}
//			break;
//		case 0:	//종료
//			cout << endl << endl << endl;
//			break;
//		default:
//			cout << "0-2 사이의 숫자를 입력하세요." << endl;
//			break;
//		}
//	}
//
//	cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::get_snack_count()-4 << " 개입니다! " << endl;
//	cout << "과자 바구니에 담긴 간식 확인하기!!" << endl;
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
//	// 동적 메모리 초기화 + 프로그램 종료
//	for (int i = 0; i < 4; i++) {
//		delete snackBasket[i];
//	}
//
//}
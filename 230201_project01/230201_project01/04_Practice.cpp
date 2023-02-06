#include <iostream>
#include <string>

int main()
{
	//// 실습1 (if 문)
	//int age;

	//std::cout << "나이를 입력하세요 : ";
	//std::cin >> age;

	//if (age >= 1 && age <= 7){
	//	std::cout << "유아 입니다." << std::endl;
	//}
	//else if (age >= 8 && age <= 13){
	//	std::cout << "초등학생 입니다." << std::endl;
	//}
	//else if (age >= 14 && age <= 16){
	//	std::cout << "중학생 입니다." << std::endl;
	//}
	//else if (age >= 17 && age <= 19){
	//	std::cout << "고등학생 입니다." << std::endl;
	//}
	//else if (age >= 20 && age < 200){
	//	std::cout << "성인 입니다." << std::endl;
	//}
	//else if (age >= 200){
	//	std::cout << "나이가 너무 많습니다...!" << std::endl;
	//}
	//else{
	//	std::cout << "입력범위가 아닙니다." << std::endl;
	//}

	//std::cout << "----------------\n";
	//// 실습2 (if 문)
	//
	//std::string name;

	//std::cout << "이름을 입력하세요 : ";
	//std::cin >> name;

	//if (name == "홍길동")
	//{
	//	std::cout << "남자 입니다." << std::endl;
	//}
	//else if (name == "성춘향")
	//{
	//	std::cout << "여자 입니다." << std::endl;
	//}
	//else
	//{
	//	std::cout << "몰?루겠어요 입니다." << std::endl;
	//}

	//std::cout << "----------------\n";
	//// 실습3 (삼항연산자 이용)
	//int number;

	//std::cout << "숫자를 입력하세요 : ";
	//std::cin >> number;

	//(number % 5 == 0) ? std::cout << " " << number << " 는(은) 5의 배수 입니다.\n"
	//	: std::cout << " " << number << " 는(은) 5의 배수가 아닙니다.\n";

	//std::cout << "----------------\n";
	//// 실습4
	//int cal1, cal2;
	//char character;

	//std::cout << "첫번째 숫자를 입력하세요 : ";
	//std::cin >> cal1;
	//std::cout << "두번째 숫자를 입력하세요 : ";
	//std::cin >> cal2;

	//std::cout << "계산을 할 연산자를 입력하세요 (+ - * /): ";
	//std::cin >> character;


	//switch (character)
	//{
	//case 43:	// 더하기
	//	std::cout << "****연산결과 -> " << cal1 << " + " << cal2 << " = " << cal1 + cal2 << "입니다.\n";
	//	break;
	//case 45:	// 빼기
	//	std::cout << "****연산결과 -> " << cal1 << " - " << cal2 << " = " << cal1 - cal2 << "입니다.\n";
	//	break;
	//case 42:	// 곱하기
	//	std::cout << "****연산결과 -> " << cal1 << " * " << cal2 << " = " << cal1 * cal2 << "입니다.\n";
	//	break;
	//case 47:	// 나누기, 몫 나머지 모두.
	//	std::cout << "****연산결과 -> " << cal1 << " / " << cal2 <<
	//		" = 몫 : " << cal1 / cal2 << " , 나머지 : " << cal1 % cal2 << " 입니다.\n";
	//	break;
	//}
}
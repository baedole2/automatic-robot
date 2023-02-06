//#include <iostream>
//#include <string>
//int main()
//{
//	int a = 10;
//	double b = 3.14;
//	short c = 3;
//	std::string str1 = "5";
//	std::string str2 = "10";
//
//	std::cout << a + b << std::endl;
//	std::cout << a - b << std::endl;
//	std::cout << a * b << std::endl;
//	std::cout << a / c << std::endl;
//	std::cout << a % c << std::endl;
//
//	std::cout << str1 + str2 + std::to_string(c) << std::endl;
//	// std::to_string(숫자);   숫자열을 문자로 바꾸는 함수.
//	// 5(숫자) -> "5"(문자)
//
//	std::cout << a << std::endl;	//10
//	std::cout << a++ << std::endl;	//10 -> 현재 동작 종료후 1 증가
//	std::cout << a << std::endl;	//11
//
//	std::cout << ++a << std::endl;	//12 -> 현재 동작 시작부터 1증가
//	std::cout << a << std::endl;	//12
//
//	// 논리 연산자
//	std::cout << "--------------------" << std::endl;
//	std::cout << !false << std::endl;			//true
//	std::cout << !(!false) << std::endl;		//false
//	// AND 연산자
//	std::cout << (false && false) << std::endl;	//false
//	std::cout << (true && false) << std::endl;	//false
//	std::cout << (true && true) << std::endl;	//true
//	// OR 연산자
//	std::cout << (false || false) << std::endl;	//false
//	std::cout << (true || false) << std::endl;	//true
//	std::cout << (true || true) << std::endl;	//true
//
//	std::cout << ((2 > 1 && -2 < 1) || 5 > 2) << std::endl;	//true
//
//
//}
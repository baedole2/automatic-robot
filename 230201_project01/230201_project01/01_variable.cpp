//#include <iostream>
//
//int main()
//{
//	// 정수
//	int number1 = 5;
//	short number2 = 10;
//	long number3 = 15;
//
//	// 실수
//	float number4 = 3.14;
//	double number5 = 1.7;
//
//	bool a = true;
//	bool b = false;
//
//	char character1 = 100;
//	char character2 = 'a';
//
//	// 문자열
//	std::string str = "hi";
//
//	std::cout << "안녕하세요.\n";
//	std::cout << std::endl;
//	std::cout << number1;
//	std::cout << std::endl;
//	std::cout << number2;
//	std::cout << std::endl;	
//	std::cout << number3;
//	std::cout << std::endl;	
//	std::cout << number4;
//	std::cout << std::endl;	
//	std::cout << number5;
//	std::cout << std::endl;
//	// bool type 출력
//	std::cout << a;
//	std::cout << std::endl;
//	std::cout << b;
//	std::cout << std::endl;
//	// char string 출력
//	std::cout << character1;
//	std::cout << std::endl;
//	std::cout << character2;
//	std::cout << std::endl;
//	std::cout << str;
//	std::cout << std::endl;
//
//	std::cout << "--------------------";
//	std::cout << std::endl;
//
//	std::cout << str << number1 << number2 << std::endl;
//
//	// 입력. 입력을 위해서는 초기화는 딱히 필요없다.
//	// 선언하고 사용을 하지 않으면 회색 밑줄이 생김.
//	//int int1;
//	//int int2;
//	int int1, int2;
//	std::cout << "숫자 두 개를 입력해 주세요. ";
//	//std::cin >> int1 >> int2;
//	std::cin >> int1;
//	std::cin >> int2;
//	std::cout << std::endl;
//	std::cout << int1 + int2;
//	std::cout << std::endl;
//
//
//	// 실습문제 1.
//	// "이름을 입력하세요." 라는 문구를 출력하고 사용자로부터 이름을 입력받기.
//	// "나이를 입력하세요." 라는 문구를 출력하고 사용자로부터 나이를 입력받기.
//	//이름과 나이의 입력이 끝나면 "안녕하세요! XXX남(OO세)" 라는 문구를 출력.
//	std::string name;
//	int age;
//
//	std::cout << "이름을 입력하세요. :";
//	std::cin >> name;
//	std::cout << std::endl;
//	
//	std::cout << "나이를 입력하세요. :";
//	std::cin >> age;
//	std::cout << std::endl;
//
//	std::cout << "안녕하세요! " << name << "님 (" << age << "세)\n";
//	
//
//}
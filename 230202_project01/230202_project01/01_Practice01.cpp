//#include <iostream>
//#include <string>
//
//int main()
//{
	//실습1 구구단 만들기
	//5단만 출력, 1~9단 모두 출력

	//std::cout << "구구단 5단 출력\n";

	//for (int i = 0; i < 9; i++)
	//{
	//	std::cout << "5 * " << i + 1 << " = " << (i + 1) * 5 << std::endl;
	//}

	//std::cout << "--------------------\n";
	//std::cout << "구구단 1단 to 9단 출력\n";
	//std::cout << "--------------------\n";
	//for (int i = 1; i < 10; i++) // 앞의 숫자
	//{
	//	for (int j = 1; j < 10; j++) // 뒤의 숫자
	//	{
	//		std::cout << i  << " * " << j << " = " << i*j << std::endl;
	//	}
	//	std::cout << "--------------------\n";
	//}

	//실습2 1부터 n까지의 합 구하기
	//1부터 사용자가 입력한 숫자까지의 합을 출력하는 코드 작성

	//int input;
	//int output = 0;

	//std::cout << "1부터 n까지의 합 구하기\n\n";
	//std::cout << "숫자(양의 정수)를 입력하세요 : ";
	//std::cin >> input;

	//for (int i = 0; i <= input; i++)
	//{
	//	output = output + i;
	//}
	//std::cout << "1부터 " << input << "까지의 합은 : " << output;

	//실습3 while문 사용
	//앞에서 진행한 실습1,2 를 while문 기반으로 작성해보기
	//for문과 while문을 비교하여 생각해보기

	////실습3-1
	//std::cout << "구구단 5단 출력\n";

	//int i = 1;
	//int j = 0;
	//while (i < 10)
	//{
	//	std::cout << "5 * " << i << " = " << i * 5 << std::endl;
	//	i++;
	//}

	//std::cout << "--------------------\n";
	//std::cout << "구구단 1단 to 9단 출력\n";
	//std::cout << "--------------------\n";
	//
	//i = 1;
	//j = 1;
	//
	//while (i < 10) // 앞의 숫자
	//{
	//	while (j < 10) // 뒤의 숫자
	//	{
	//		std::cout << i << " * " << j << " = " << i * j << std::endl;
	//		j++;
	//	}
	//	i++;
	//	j = 1;
	//	std::cout << "--------------------\n";
	//}


	////실습3-2
	//int input;
	//int output = 0;
	//i = 0;	// 실습 3-1에서 선언을 했기때문에 초기화만 합니다.

	//std::cout << "1부터 n까지의 합 구하기\n\n";
	//std::cout << "숫자(양의 정수)를 입력하세요 : ";
	//std::cin >> input;


	//while (i <= input)
	//{
	//	output = output + i;
	//	i++;
	//}
	//std::cout << "1부터 " << input << "까지의 합은 : " << output;


	//실습4 사용자가 입력한 숫자를 더하기
	//사용자가 입력한 숫자들을 계속 더하는 프로그램 만들기
	// *사용자는 더하고 싶은 숫자를 횟수 제한 없이 입력할 수 있다.
	// **단 0을 입력하면 종료 및 합계 출력

	//int input;
	//int output = 0;

	//std::cout << "사용자가 입력한 숫자 더하기\n\n";
	//std::cout << "숫자를 입력하세요 (0: exit) : ";
	//std::cin >> input;
	//output = output + input;

	//while (input != 0)
	//{
	//	std::cout << "숫자를 입력하세요 (0: exit) : ";
	//	std::cin >> input;
	//	output = output + input;
	//}
	//std::cout << "사용자가 입력한 수의 합은 : " << output << std::endl;

	//[번외] 실습
	//입력한 숫자만큼 별 찍기
	//	input : 5
	//	output :
	//	*
	//	**
	//	***
	//	****
	//	*****
	//int input;
	//int j = 0;
	//int i = 0;
	//std::cout << "숫자를 입력하세요.\n입력한 만큼 별이 피라미드처럼 나옵니다. : ";
	//std::cin >> input;
	//for (i = 0; i < input; i++)	//줄바꿈용도
	//{
	//	for (j = 0; j <= i; j++)	// 별 몇개쓸지
	//	{
	//		std::cout << "*";
	//	}
	//	std::cout << std::endl;
	//	j = 0;
	//}
//}
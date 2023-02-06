//#include <iostream>
//#include <string>
//
//int main()
//{
//	if (5 > 3)
//	{
//		std::cout << "얍\n";
//	}
//
//	int a;
//	std::cin >> a;
//	if (a < 10)
//	{
//		std::cout << "입력한 수가 10보다 작습니다.";
//	}
//	else if (a == 10)
//	{
//		std::cout << "10을 입력하셨군요!";
//	}
//	else
//	{
//		std::cout << "입력한 수가 10보다 큽니다.";
//	}
//
//	성적입력하면 판별해주는 코드
//	 A : 100~90 (90포함)
//	 B : ~ 80
//	 C : ~ 70
//	 D : ~ 60
//	 E : ~ 50
//	
//	int score;
//
//	std::cout << "성적을 입력하세요 : ";
//	std::cin >> score;
//
//	if (score > 100 || score < 0)
//	{
//		std::cout << "입력 범위 오류입니다. 다시 입력해주세요. " << std::endl;
//	}
//	else if (score >= 90)
//	{
//		std::cout << "A" << std::endl;
//	}
//	else if (score >= 80)
//	{
//		std::cout << "B" << std::endl;
//	}
//
//	else if (score >= 70)
//	{
//		std::cout << "C" << std::endl;
//	}
//
//	else if (score >= 60)
//	{
//		std::cout << "D" << std::endl;
//	}
//	else
//	{
//		std::cout << "F" << std::endl;
//	}
//
//	// 중첩된 if문
//	std::string userID, userPw;
//	std::string inputId = "user01", inputPw = "1234";
//	std::cout << "아이디를 입력해주세요.";
//	std::cin >> userID;
//	std::cout << "비밀번호를 입력해주세요.";
//	std::cin >> userPw;
//
//	if (userID == inputId)
//	{
//		if (userPw == inputPw)
//		{
//			std::cout << "로그인 성공!\n";
//		}
//		else
//		{
//			std::cout << "비밀번호가 틀렸습니다.\n 로그인 실패\n";
//		}
//	}
//	else
//	{
//		std::cout << "아이디가 틀렸습니다.\n 로그인 실패\n";
//	}
//	
//	 switch 문
//	int a = 0;
//
//	switch (a)
//	{
//	case 3:
//		std::cout << "3입니다.";
//		break;
//	case 5:
//		std::cout << "5입니다.";
//		break;
//	default:
//		std::cout << "예상한 수가 아닙니다..";
//		// default는 break 없어도 됨
//	}
//
//
//
//	int a = 0;
//	char grade;
//
//	std::cout << "성적을 입력하세요. :";
//	std::cin >> a;
//	switch (a/10)
//	{
//	case 9:
//		std::cout << "A입니다.";
//		grade = 'A';
//		break;
//	case 8:
//		std::cout << "B입니다.";
//		grade = 'B';
//		break;
//	case 7:
//		std::cout << "C입니다.";
//		grade = 'C';
//		break;
//	case 6:
//		std::cout << "D입니다.";
//		grade = 'D';
//		break;
//	case 5:case 4:case 3:case 2:case 1:case 0:
//		std::cout << "F입니다.";
//		grade = 'F';
//		break;
//	default:
//		std::cout << "점수의 범위는 0~99 입니다.";
//		// default는 break 없어도 됨
//	}
//	std::cout << std::endl;
//	grade == 'F' ? std::cout << "재수강" : std::cout << "참 잘했어요.";
//
//
//	if (grade == 'F')
//	{
//		std::cout << "재수강";
//	}
//	else
//	{
//		std::cout << "참 잘했어요.";
//	}
//
//	// 홀수 짝수 출력 프로그램 작성하기
//	// 숫자를 입력받고
//	// 입력받은 수가 홀수라면 "홀수입니다" 출력
//	// 입력받은 수가 짝수라면 "짝수입니다" 출력
//
//	int number;
//
//	std::cout << "수를 입력하세요. : ";
//	std::cin >> number;
//
//	if (number % 2 == 0)
//	{
//		std::cout << "짝수~" << std::endl;
//	}
//	else
//	{
//		std::cout << "홀수~" << std::endl;
//	}
//	(number % 2 == 0) ? std::cout << "짝수~!" : std::cout << "홀수~!";
//
//
//	
//}
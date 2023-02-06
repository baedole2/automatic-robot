#include <iostream>
#include <string>

int add(int n1, int n2){
	return n1 + n2;
}
int minus(int n1, int n2) {
	if (n1 > n2){
		return n1 - n2;
	}
	else{
		return n2 - n1;
	}
}
int multiple(int n1, int n2) {
	return n1 * n2;
}
double divide(int n1, int n2) {
	return (double)n1 / (double)n2;	//강제형변환으로 실수 리턴
}
int bigNumCheck(int n1, int n2, int n3)
{
	if (n1 >= n2 && n1 >= n3) {
		return n1;
	}
	else if (n2 >= n1 && n2 >= n3) {
		return n2;
	}
	else
		return n3;
}
void checkOddEven(int n1){
	if (n1 % 2 == 0) {
		std::cout << "짝수~!\n";
	}
	else {
		std::cout << "홀수~★\n";
	}
}

int main()
{
	//실습1 사칙연산 함수 만들기
	//두개의정수를 매개변수로 받아 그 합을 리턴하는 add 함수를 만드세요.
	//두개의정수를 매개변수로 받아 그 합을 리턴하는 minus 함수를 만드세요.
	//  *단, 인수의 순서에 상관없이 큰 수에서 작은 수를 뺀 결과를 리턴.
	//두개의정수를 매개변수로 받아 그 합을 리턴하는 multiple 함수를 만드세요.
	//두개의정수를 매개변수로 받아 그 합을 리턴하는 divide 함수를 만드세요.
	//  *단, divide 함수는 실수를 리턴 (hint, 강제형변환)
	//main함수에서 위의 4개의 함수를 한번씩 호출하여 리턴된 값을 출력하세요.
	
	
	int num1;	//변수 선언
	int num2;
	int num3;
	int a;

	std::cout << "첫번째 숫자를 입력하세용 : ";	// 숫자 입력
	std::cin >> num1;

	std::cout << "두번째 숫자를 입력하세용용 : ";
	std::cin >> num2;
	// 함수 한번씩 출력
	std::cout << add(num1, num2) << std::endl;
	std::cout << minus(num1, num2) << std::endl;
	std::cout << multiple(num1, num2) << std::endl;
	std::cout << divide(num1, num2) << std::endl;

	//번외1 하나의 정수를 매개변수로 받아서 그 수가 짝수이면 "짝수",
	//홀수이면 "홀수" 라고 출력하는 함수 작성

	checkOddEven(num1);

	std::cout << "세번째 숫자를 입력하세용용용 : ";
	std::cin >> num3;
	//번외2 실습.세 개의 수를 매개변수로 받아서 그중 가장 큰 수를 반환하는 함수 작성.
	a = bigNumCheck(num1, num2, num3);
	std::cout << "셋 중 제일 큰 수는 " << a << " 였습니다!!\n";
	
}
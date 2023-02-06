#include <iostream>

int main()
{
	////실습1 배열 사용해보기
	////city라는 배열 변수를 만들고, 5개의 나라 이름을 값으로 지정
	////for문 혹은 for-each문을 활용하여 city 안의 모든 워소를 출력

	//std::string nation[] = {"Korea","Japan", "U.S.A","Ukraine","Polland"};

	//for (std::string nat : nation){
	//	std::cout << nat << std::endl;
	//}


	//실습2 배열 활용하기
	//grade라는 배열 변수를 선언하고, 학생 5인의 성적 입력받기
	//for문 혹은 for-each문을 활용하여 학생 5인의 성적 평균 산출

	std::string student[] = { "믹키유천","영웅재중","유노윤호","최강창민","시아준수" };
	double score[5] = { };
	double totalScore =0;

	int byte = sizeof(score) / sizeof(score[0]);

	for (int i = 0; i < byte; i++)
	{
		std::cout << student[i] << " 학생의 점수를 입력하세요. : ";
		std::cin >> score[i];
		std::cout << std::endl;
	}

	for (double sc : score) {
		totalScore = totalScore + sc;
	}

	// totalScore/5  이부분을 숫자 5 대신 학생 수의 값을 따오고 싶은데 어떻게하면 좋을까요?
	std::cout << "성적 평균 : " << totalScore / byte;

}
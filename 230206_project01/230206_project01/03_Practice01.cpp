#include <iostream>

int main() {

	////실습1 동적 배열 사용해보기
	////사용자로부터 x,y 2개의 자연수를 입력 받기
	////만약 사용자가 x와 y에 0이나 음수를 입력한다면 에러 메세지를 출력 후 다시 입력 받기.
	////x*y 의 크기를 갖는 이차원 동작 배열 arr을 선언
	////arr[0][0]부터 arr[x][y] 까지 순서대로 1부터 x*y 저장
	////arr[0][0]부터 arr[x][y] 까지 저장된 값 출력

	//int x, y;
	//
	//std::cout << "자연수 x 를 입력하세요. : ";
	//std::cin >> x;

	//std::cout << "자연수 y 를 입력하세요. : ";
	//std::cin >> y;

	//while(x <= 0 || y <= 0)
	//{
	//	std::cout << "x와 y 모두 양수를 입력해 주세요." << std::endl;
	//	std::cout << "자연수 x 를 입력하세요. : ";
	//	std::cin >> x;

	//	std::cout << "자연수 y 를 입력하세요. : ";
	//	std::cin >> y;
	//}

	//// 2차원 배열의 선언 방식
	//int** arr = new int* [x];	// 행의 길이가 X
	//
	//for (int i = 0; i < x; i++) {
	//	arr[i] = new int[y];	// 열의 길이가 y
	//}

	//// 행렬 안에 수치를 집어넣기
	//for (int i = 0; i < x; i++) {
	//	for (int j = 0; j < y; j++) {
	//		arr[i][j] = y * i + j + 1;
	//		std::cout << arr[i][j] << " ";
	//	}
	//	std::cout << std::endl;
	//}

	////// 출력
	////for (int i = 0; i < x; i++) {
	////	for (int j = 0; j < y; j++) {
	////		std::cout << arr[i][j] << " ";
	////	}
	////	std::cout << std::endl;
	////}


	//// 해제
	//for (int i = 0; i < x; i++) {
	//	delete[] arr[i];	// y의 해제
	//}
	//	
	//delete[] arr;			// x의 해제


	//번외 실습2 배열 활용하기
	//grade라는 배열 변수를 선언하고 학생 5인성적 입력 받기
	//for문 혹은 for-each문을 활용하여 학생 5인의 성적 평균 산출


	int students;
	double score = 0;
	double total = 0;

	std::cout << "입력할 학생의 인원 수를 입력하세요 : ";
	std::cin >> students;

	double* grade = new double[students];

	for (int i = 0; i < students; i++)
	{
		std::cout << i + 1 << "번 학생의 성적을 입력하세요 : ";
		std::cin >> score;
		grade[i] = score;
		total += grade[i];
		std::cout << std::endl;
	}
	std::cout << "평균 : " << total / students;
	
	delete[] grade;

}


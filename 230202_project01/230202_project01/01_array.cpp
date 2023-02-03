#include <iostream>

int main() {
	std::string friend1 = "홍길동";
	std::string friend2 = "성춘향";

	std::string friends[2];
	friends[0] = "홍길동";
	friends[1] = "성춘향";
	friends[1] = "코딩온";

	int i;
	i = 0;
	
	//int i = 0;

	std::string friends2[2] = { "홍길동" , "성춘향" };
	// 총갯수가 2개 라는뜻.  but 홍길동은 0번째, 성춘향은 1번째


	std::cout << friends2[0];

	int nums[3] = { 1,2,3 };
	std::cout << nums[2];
	// 0번째,1번째,"2" 번째 자리인 3을 출력

	double nums2[4] = { 1.5 ,2.5 , 3.5, 4.5 };
	std::cout << nums[3];
	//0번째,1번째,2번째, "3" 번째 자리인 4.5 출력

	//다차원 배열
	// 2차원 배열
	std::string fruits1[2][3] = { {"apple" , "grape","1"},{"orange","banana","2"}};


	// 3차원 배열
	// 제일 바깥 개수 -> 그다음 안쪽 갯수 -> 제일 안쪽 갯수
	std::string fruits2[2][3][2] = {
		{{"a1","b1"}, {"c1","d1"}, {"e1","f1"}},
		{{"a2","b2"}, {"c2","d2"}, {"e2","f2"}}
	};

}
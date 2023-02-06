//#include <iostream>
//#include <vector>
//
//int main() {
//	// std::vector<int> v;		vector<자료형>변수이름
//	// std::vector<int> v(3):	//크기가 3인 벡터 배열 생성
//	//std::vector<int> v(3, 1);	//크기가 3인 벡터 배열 생성
//								//  + 모든 원소를1로 초기화
//	// std::vector<int> v = {1,2,3}; // 크기가 3인 벡터 배열 선언 및 초기화
//	//std::vector<int> v = { 1,2,3,4,5 };
//
//	int num;
//	std::cin >> num;
//	std::vector<int>v;	//벡터 선언
//	v.assign(num, 1); //num 크기만큼 벡터 배열 크기를 선언, 모든 원소 1로 초기화
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		std::cout << v.at(i) << " "; // v.at(i) -> 벡터 v의 i 번째 원소 값.
//	}
//
//	v.resize(6);		//배열의 크기를 resize. 커진 길이만큼 0으로 초기화.
//	v.push_back(10);	//배열의 마지막에 원하는 원소를 추가함.
//	//벡터의 크기는 추가한 원소의 갯수만큼 늘어남.
//	std::cout << std::endl;
//	v.pop_back();//제일 마지막에 있는 원소를 삭제. 0으로 변하는게 아닌 배열에서의 삭제.
//	for (int i = 0; i < v.size(); i++)
//	{
//		std::cout << v.at(i) << " ";
//	}
//	std::cout << std::endl;
//
//	std::cout << v.front() << std::endl;	//가장 첫번째 0번쨰 인덱스를 출력
//	std::cout << v.back() << std::endl;	//가장 마지막 n번째 인덱스를 출력
//
//	v.insert(v.begin() + 2, 99);		//원하는 위치에 원하는 값을 넣어줄 수 있음.	
//	std::cout << std::endl;			//2번 index에 99를 추가하는 코드
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		std::cout << v.at(i) << " ";
//	}
//	std::cout << std::endl;
//
//	v.erase(v.begin() + 3, v.begin() + 5);	//index 3에서 5-1 까지 삭제 -> 3,4 삭제
//	for (int i = 0; i < v.size(); i++)
//	{
//		std::cout << v.at(i) << " ";
//	}
//	std::cout << std::endl;
//
//	//v.clear();	// 전부 삭제
//	//for (int i = 0; i < v.size(); i++)
//	//{
//	//	std::cout << v.at(i) << " ";
//	//}
//	//std::cout << std::endl;
//
//
//	//for-each문 출력
//	for (int& vv : v) {	//배열 자체의 값을 바꾸고 싶을때
//		vv = vv + 1;
//		std::cout << vv << " ";
//	}
//	std::cout << std::endl;
//
//	for (int vv : v) {	//출력만 하고 싶을때
//
//		std::cout << vv << " ";
//	}
//	std::cout << std::endl;
//
//
//	std::cout << "----------------" << std::endl;
//	//2차원 벡터
//	std::vector<std::vector<int>>v2;
//	v2.assign(3, std::vector<int>(2, 1));	// 3의 행, 2의 렬을 가진 2차 벡터
//
//	for (int i = 0; i < v2.size(); i++)	// 가장 겉에있는 배열의 사이즈 -> 3
//	{
//		for (int j = 0; j < v2.at(i).size(); j++) {	//안에 있는 배열의 원소의 사이즈 -> 2
//			std::cout << v2.at(i).at(j) << " ";
//			//std::cout << v2[i][j] << std::endl;
//		}
//		std::cout << std::endl;
//	}
//
//
//	for (std::vector<int>vv2 : v2)
//	{
//		for (int vvv2 : vv2) {
//			std::cout << vvv2 << " ";
//		}
//		std::cout << std::endl;
//	}
//
//
//
//	return 0;
//
//}
//#include <iostream>
//#include <vector> // 벡터를 사용하기위해 선언
//
//
//int main() {
//
//	//실습1 vector 사용해보기
//	// 벡터를 이용하여 이전 실습 해결
//	int x, y;
//
//	std::cout << "자연수 x 를 입력하세요. : ";
//	std::cin >> x;
//
//	std::cout << "자연수 y 를 입력하세요. : ";
//	std::cin >> y;
//
//	while(x <= 0 || y <= 0)
//	{
//		std::cout << "x와 y 모두 양수를 입력해 주세요." << std::endl;
//		std::cout << "자연수 x 를 입력하세요. : ";
//		std::cin >> x;
//
//		std::cout << "자연수 y 를 입력하세요. : ";
//		std::cin >> y;
//	}
//
//	// 2차원 배열의 선언 방식
//	std::vector<std::vector<int>>v;	// 이중벡터 선언
//	v.assign(x, std::vector<int>(y,0));	//x의 행, y의 열, 0으로 원소 초기화
//
//	// 행렬 안에 수치를 집어넣기
//	for (int i = 0; i < v.size(); i++) {			//v의 크기 = x행의 갯수
//		for (int j = 0; j < v.at(i).size(); j++) {	//v의 원소1개의 크기 = y렬의 갯수
//			v.at(i).at(j) = y * i + j + 1;
//			std::cout << v.at(i).at(j) << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	//벡터는 해제할 필요가 없으니 delete 관련 문구도 없음.
//	
//
//	//실습2
//	//사용자가 입력한 숫자들을 배열에 담고, 그 수의 합 구하기
//	int num = 1;
//	std::vector<int>vInput;
//
//	std::cout << "사용자가 입력한 숫자 더하기\n\n";
//
//	while (num != 0){
//		std::cout << "숫자를 입력하세요 (0: exit) : ";
//		std::cin >> num;
//		vInput.push_back(num);
//	}
//
//	for (int i = 0; i < vInput.size(); i++)	{
//		num = num + vInput.at(i);
//	}
//
//	std::cout << "사용자가 입력한 수의 합은 : " << num;
//
//
//
//}
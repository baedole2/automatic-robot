//#include <iostream>
//#include <fstream>	//file stream. 파일을 불러오기위해 사용
//#include <string>
//
//// using namespace std;
//using std::ifstream;
//
//int main() {
//	// std::ifstream;
//	ifstream file;
//	file.open("test.txt");	//파일 접근
//	if (file.fail()) {
//		std::cout << "파일 없음" << std::endl;
//		return -1;	// 아무거나 쓴다고한들 메인함수가 int
//					// 정수형을 입력해야 한다.
//	}
//
//	std::string str, str2, line;
//
//	//file >> str >> str2;	// str에 파일내용 저장
//
//	//while (file >> str >> str2)	{
//	//	std::cout << str << " " << str2;
//	//	std::cout << std::endl;
//	//}
//	//std::getline(file, line);	// 한줄 읽는 코드
//								// 먼저 읽게되면 그 이후는 안읽음
//								// 읽는건 출력하는게 아니다. 데이터만 담아둠.
//	while (std::getline(file, line)){
//		std::cout << line << std::endl;
//	}
//
//	//std::cout << str << str2;	// 기본은 공백까지만 읽는다.
//	//							// 따라서 공백만큼 불러오기 필요
//
//	file.close();	// file 닫기
//					// 소멸자가 자동으로 없애줌.
//					// 내가 스스로 만든 클래스는 닫기 선언을 해줘야한다.
//
//	return 0;
//}
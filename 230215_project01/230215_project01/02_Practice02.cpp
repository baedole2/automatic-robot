//// 프로젝트2 타임어택 끝말잇기 게임
//// 1) 제한 시간 30초 동안 플레이어는 끝말잇기 규칙에 따라 단어를 입력
//// 2) 제한 시간이 종료되면 게임을 종료 시키고, 입력한 단어의 개수를 출력
//
//#include <iostream>
//#include <ctime>	//시간 측정을 위해서
//
//using std::cout;
//using std::cin;
//using std::endl;
//
//
//int main() {
//	// 1) 제한 시간 30초 동안 플레이어는 끝말잇기 규칙에 따라 단어를 입력
//	// 앞 단어의 마지막 문자로 시작하는 단어여야 한다.
//	// 같은 단어는 쓸 수 없다.
//	// *3번 틀리면 그 즉시 탈락
//	// 2) 제한 시간이 종료되면 게임을 종료 시키고, 입력한 단어의 개수를 출력
//
//	clock_t startTime = clock();
//
//	clock_t endTime = clock();
//	cout << "걸린 시간 : " << (endTime - startTime) / CLOCKS_PER_SEC << endl;
//}
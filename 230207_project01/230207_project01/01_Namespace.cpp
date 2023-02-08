//#include <iostream>
//
//namespace ns_test {
//	int num = 0;
//
//	void test() {
//		std::cout << num << std::endl;
//		std::cout << "hello world" << std::endl;
//	}
//}
//
//// using namespace std;	// std 네임스페이스 내에 있는
//						// 모든 요소에 대한 접근을 풀어줌.
//// using namespace ns_test;
//
//using namespace ns_test;	// ns_test 네임스페이스 내에 있는
//							// 모든 요소에 대한 접근을 풀어줌
//void bbb() {
//	num = 5;
//	std::cout << "aaa";
//}
//
//void aaa() {
//	num = 5;
//	std::cout << "aaa" << std::endl;
//}
//
//
//int main() {
//	num = 5;
//	test();
//	aaa();
//
//	return 0;
//}
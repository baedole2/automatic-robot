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
//// using namespace std;	// std ���ӽ����̽� ���� �ִ�
//						// ��� ��ҿ� ���� ������ Ǯ����.
//// using namespace ns_test;
//
//using namespace ns_test;	// ns_test ���ӽ����̽� ���� �ִ�
//							// ��� ��ҿ� ���� ������ Ǯ����
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
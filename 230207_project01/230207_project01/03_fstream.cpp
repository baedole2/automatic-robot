//#include <iostream>
//#include <fstream>	//file stream. ������ �ҷ��������� ���
//#include <string>
//
//// using namespace std;
//using std::ifstream;
//
//int main() {
//	// std::ifstream;
//	ifstream file;
//	file.open("test.txt");	//���� ����
//	if (file.fail()) {
//		std::cout << "���� ����" << std::endl;
//		return -1;	// �ƹ��ų� ���ٰ��ѵ� �����Լ��� int
//					// �������� �Է��ؾ� �Ѵ�.
//	}
//
//	std::string str, str2, line;
//
//	//file >> str >> str2;	// str�� ���ϳ��� ����
//
//	//while (file >> str >> str2)	{
//	//	std::cout << str << " " << str2;
//	//	std::cout << std::endl;
//	//}
//	//std::getline(file, line);	// ���� �д� �ڵ�
//								// ���� �аԵǸ� �� ���Ĵ� ������
//								// �д°� ����ϴ°� �ƴϴ�. �����͸� ��Ƶ�.
//	while (std::getline(file, line)){
//		std::cout << line << std::endl;
//	}
//
//	//std::cout << str << str2;	// �⺻�� ��������� �д´�.
//	//							// ���� ���鸸ŭ �ҷ����� �ʿ�
//
//	file.close();	// file �ݱ�
//					// �Ҹ��ڰ� �ڵ����� ������.
//					// ���� ������ ���� Ŭ������ �ݱ� ������ ������Ѵ�.
//
//	return 0;
//}
//#include <iostream>
//#include <vector>
//
//int main() {
//	// std::vector<int> v;		vector<�ڷ���>�����̸�
//	// std::vector<int> v(3):	//ũ�Ⱑ 3�� ���� �迭 ����
//	//std::vector<int> v(3, 1);	//ũ�Ⱑ 3�� ���� �迭 ����
//								//  + ��� ���Ҹ�1�� �ʱ�ȭ
//	// std::vector<int> v = {1,2,3}; // ũ�Ⱑ 3�� ���� �迭 ���� �� �ʱ�ȭ
//	//std::vector<int> v = { 1,2,3,4,5 };
//
//	int num;
//	std::cin >> num;
//	std::vector<int>v;	//���� ����
//	v.assign(num, 1); //num ũ�⸸ŭ ���� �迭 ũ�⸦ ����, ��� ���� 1�� �ʱ�ȭ
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		std::cout << v.at(i) << " "; // v.at(i) -> ���� v�� i ��° ���� ��.
//	}
//
//	v.resize(6);		//�迭�� ũ�⸦ resize. Ŀ�� ���̸�ŭ 0���� �ʱ�ȭ.
//	v.push_back(10);	//�迭�� �������� ���ϴ� ���Ҹ� �߰���.
//	//������ ũ��� �߰��� ������ ������ŭ �þ.
//	std::cout << std::endl;
//	v.pop_back();//���� �������� �ִ� ���Ҹ� ����. 0���� ���ϴ°� �ƴ� �迭������ ����.
//	for (int i = 0; i < v.size(); i++)
//	{
//		std::cout << v.at(i) << " ";
//	}
//	std::cout << std::endl;
//
//	std::cout << v.front() << std::endl;	//���� ù��° 0���� �ε����� ���
//	std::cout << v.back() << std::endl;	//���� ������ n��° �ε����� ���
//
//	v.insert(v.begin() + 2, 99);		//���ϴ� ��ġ�� ���ϴ� ���� �־��� �� ����.	
//	std::cout << std::endl;			//2�� index�� 99�� �߰��ϴ� �ڵ�
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		std::cout << v.at(i) << " ";
//	}
//	std::cout << std::endl;
//
//	v.erase(v.begin() + 3, v.begin() + 5);	//index 3���� 5-1 ���� ���� -> 3,4 ����
//	for (int i = 0; i < v.size(); i++)
//	{
//		std::cout << v.at(i) << " ";
//	}
//	std::cout << std::endl;
//
//	//v.clear();	// ���� ����
//	//for (int i = 0; i < v.size(); i++)
//	//{
//	//	std::cout << v.at(i) << " ";
//	//}
//	//std::cout << std::endl;
//
//
//	//for-each�� ���
//	for (int& vv : v) {	//�迭 ��ü�� ���� �ٲٰ� ������
//		vv = vv + 1;
//		std::cout << vv << " ";
//	}
//	std::cout << std::endl;
//
//	for (int vv : v) {	//��¸� �ϰ� ������
//
//		std::cout << vv << " ";
//	}
//	std::cout << std::endl;
//
//
//	std::cout << "----------------" << std::endl;
//	//2���� ����
//	std::vector<std::vector<int>>v2;
//	v2.assign(3, std::vector<int>(2, 1));	// 3�� ��, 2�� ���� ���� 2�� ����
//
//	for (int i = 0; i < v2.size(); i++)	// ���� �ѿ��ִ� �迭�� ������ -> 3
//	{
//		for (int j = 0; j < v2.at(i).size(); j++) {	//�ȿ� �ִ� �迭�� ������ ������ -> 2
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
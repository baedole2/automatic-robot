#include <iostream>

int main() {
	std::string friend1 = "ȫ�浿";
	std::string friend2 = "������";

	std::string friends[2];
	friends[0] = "ȫ�浿";
	friends[1] = "������";
	friends[1] = "�ڵ���";

	int i;
	i = 0;
	
	//int i = 0;

	std::string friends2[2] = { "ȫ�浿" , "������" };
	// �Ѱ����� 2�� ��¶�.  but ȫ�浿�� 0��°, �������� 1��°


	std::cout << friends2[0];

	int nums[3] = { 1,2,3 };
	std::cout << nums[2];
	// 0��°,1��°,"2" ��° �ڸ��� 3�� ���

	double nums2[4] = { 1.5 ,2.5 , 3.5, 4.5 };
	std::cout << nums[3];
	//0��°,1��°,2��°, "3" ��° �ڸ��� 4.5 ���

	//������ �迭
	// 2���� �迭
	std::string fruits1[2][3] = { {"apple" , "grape","1"},{"orange","banana","2"}};


	// 3���� �迭
	// ���� �ٱ� ���� -> �״��� ���� ���� -> ���� ���� ����
	std::string fruits2[2][3][2] = {
		{{"a1","b1"}, {"c1","d1"}, {"e1","f1"}},
		{{"a2","b2"}, {"c2","d2"}, {"e2","f2"}}
	};

}
#include <iostream>

int main()
{
	////�ǽ�1 �迭 ����غ���
	////city��� �迭 ������ �����, 5���� ���� �̸��� ������ ����
	////for�� Ȥ�� for-each���� Ȱ���Ͽ� city ���� ��� ���Ҹ� ���

	//std::string nation[] = {"Korea","Japan", "U.S.A","Ukraine","Polland"};

	//for (std::string nat : nation){
	//	std::cout << nat << std::endl;
	//}


	//�ǽ�2 �迭 Ȱ���ϱ�
	//grade��� �迭 ������ �����ϰ�, �л� 5���� ���� �Է¹ޱ�
	//for�� Ȥ�� for-each���� Ȱ���Ͽ� �л� 5���� ���� ��� ����

	std::string student[] = { "��Ű��õ","��������","������ȣ","�ְ�â��","�þ��ؼ�" };
	double score[5] = { };
	double totalScore =0;

	int byte = sizeof(score) / sizeof(score[0]);

	for (int i = 0; i < byte; i++)
	{
		std::cout << student[i] << " �л��� ������ �Է��ϼ���. : ";
		std::cin >> score[i];
		std::cout << std::endl;
	}

	for (double sc : score) {
		totalScore = totalScore + sc;
	}

	// totalScore/5  �̺κ��� ���� 5 ��� �л� ���� ���� ������ ������ ����ϸ� �������?
	std::cout << "���� ��� : " << totalScore / byte;

}
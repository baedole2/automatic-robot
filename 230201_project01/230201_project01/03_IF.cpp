//#include <iostream>
//#include <string>
//
//int main()
//{
//	if (5 > 3)
//	{
//		std::cout << "��\n";
//	}
//
//	int a;
//	std::cin >> a;
//	if (a < 10)
//	{
//		std::cout << "�Է��� ���� 10���� �۽��ϴ�.";
//	}
//	else if (a == 10)
//	{
//		std::cout << "10�� �Է��ϼ̱���!";
//	}
//	else
//	{
//		std::cout << "�Է��� ���� 10���� Ů�ϴ�.";
//	}
//
//	�����Է��ϸ� �Ǻ����ִ� �ڵ�
//	 A : 100~90 (90����)
//	 B : ~ 80
//	 C : ~ 70
//	 D : ~ 60
//	 E : ~ 50
//	
//	int score;
//
//	std::cout << "������ �Է��ϼ��� : ";
//	std::cin >> score;
//
//	if (score > 100 || score < 0)
//	{
//		std::cout << "�Է� ���� �����Դϴ�. �ٽ� �Է����ּ���. " << std::endl;
//	}
//	else if (score >= 90)
//	{
//		std::cout << "A" << std::endl;
//	}
//	else if (score >= 80)
//	{
//		std::cout << "B" << std::endl;
//	}
//
//	else if (score >= 70)
//	{
//		std::cout << "C" << std::endl;
//	}
//
//	else if (score >= 60)
//	{
//		std::cout << "D" << std::endl;
//	}
//	else
//	{
//		std::cout << "F" << std::endl;
//	}
//
//	// ��ø�� if��
//	std::string userID, userPw;
//	std::string inputId = "user01", inputPw = "1234";
//	std::cout << "���̵� �Է����ּ���.";
//	std::cin >> userID;
//	std::cout << "��й�ȣ�� �Է����ּ���.";
//	std::cin >> userPw;
//
//	if (userID == inputId)
//	{
//		if (userPw == inputPw)
//		{
//			std::cout << "�α��� ����!\n";
//		}
//		else
//		{
//			std::cout << "��й�ȣ�� Ʋ�Ƚ��ϴ�.\n �α��� ����\n";
//		}
//	}
//	else
//	{
//		std::cout << "���̵� Ʋ�Ƚ��ϴ�.\n �α��� ����\n";
//	}
//	
//	 switch ��
//	int a = 0;
//
//	switch (a)
//	{
//	case 3:
//		std::cout << "3�Դϴ�.";
//		break;
//	case 5:
//		std::cout << "5�Դϴ�.";
//		break;
//	default:
//		std::cout << "������ ���� �ƴմϴ�..";
//		// default�� break ��� ��
//	}
//
//
//
//	int a = 0;
//	char grade;
//
//	std::cout << "������ �Է��ϼ���. :";
//	std::cin >> a;
//	switch (a/10)
//	{
//	case 9:
//		std::cout << "A�Դϴ�.";
//		grade = 'A';
//		break;
//	case 8:
//		std::cout << "B�Դϴ�.";
//		grade = 'B';
//		break;
//	case 7:
//		std::cout << "C�Դϴ�.";
//		grade = 'C';
//		break;
//	case 6:
//		std::cout << "D�Դϴ�.";
//		grade = 'D';
//		break;
//	case 5:case 4:case 3:case 2:case 1:case 0:
//		std::cout << "F�Դϴ�.";
//		grade = 'F';
//		break;
//	default:
//		std::cout << "������ ������ 0~99 �Դϴ�.";
//		// default�� break ��� ��
//	}
//	std::cout << std::endl;
//	grade == 'F' ? std::cout << "�����" : std::cout << "�� ���߾��.";
//
//
//	if (grade == 'F')
//	{
//		std::cout << "�����";
//	}
//	else
//	{
//		std::cout << "�� ���߾��.";
//	}
//
//	// Ȧ�� ¦�� ��� ���α׷� �ۼ��ϱ�
//	// ���ڸ� �Է¹ް�
//	// �Է¹��� ���� Ȧ����� "Ȧ���Դϴ�" ���
//	// �Է¹��� ���� ¦����� "¦���Դϴ�" ���
//
//	int number;
//
//	std::cout << "���� �Է��ϼ���. : ";
//	std::cin >> number;
//
//	if (number % 2 == 0)
//	{
//		std::cout << "¦��~" << std::endl;
//	}
//	else
//	{
//		std::cout << "Ȧ��~" << std::endl;
//	}
//	(number % 2 == 0) ? std::cout << "¦��~!" : std::cout << "Ȧ��~!";
//
//
//	
//}
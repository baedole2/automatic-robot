#include <iostream>

int main() {

	////�ǽ�1 ���� �迭 ����غ���
	////����ڷκ��� x,y 2���� �ڿ����� �Է� �ޱ�
	////���� ����ڰ� x�� y�� 0�̳� ������ �Է��Ѵٸ� ���� �޼����� ��� �� �ٽ� �Է� �ޱ�.
	////x*y �� ũ�⸦ ���� ������ ���� �迭 arr�� ����
	////arr[0][0]���� arr[x][y] ���� ������� 1���� x*y ����
	////arr[0][0]���� arr[x][y] ���� ����� �� ���

	//int x, y;
	//
	//std::cout << "�ڿ��� x �� �Է��ϼ���. : ";
	//std::cin >> x;

	//std::cout << "�ڿ��� y �� �Է��ϼ���. : ";
	//std::cin >> y;

	//while(x <= 0 || y <= 0)
	//{
	//	std::cout << "x�� y ��� ����� �Է��� �ּ���." << std::endl;
	//	std::cout << "�ڿ��� x �� �Է��ϼ���. : ";
	//	std::cin >> x;

	//	std::cout << "�ڿ��� y �� �Է��ϼ���. : ";
	//	std::cin >> y;
	//}

	//// 2���� �迭�� ���� ���
	//int** arr = new int* [x];	// ���� ���̰� X
	//
	//for (int i = 0; i < x; i++) {
	//	arr[i] = new int[y];	// ���� ���̰� y
	//}

	//// ��� �ȿ� ��ġ�� ����ֱ�
	//for (int i = 0; i < x; i++) {
	//	for (int j = 0; j < y; j++) {
	//		arr[i][j] = y * i + j + 1;
	//		std::cout << arr[i][j] << " ";
	//	}
	//	std::cout << std::endl;
	//}

	////// ���
	////for (int i = 0; i < x; i++) {
	////	for (int j = 0; j < y; j++) {
	////		std::cout << arr[i][j] << " ";
	////	}
	////	std::cout << std::endl;
	////}


	//// ����
	//for (int i = 0; i < x; i++) {
	//	delete[] arr[i];	// y�� ����
	//}
	//	
	//delete[] arr;			// x�� ����


	//���� �ǽ�2 �迭 Ȱ���ϱ�
	//grade��� �迭 ������ �����ϰ� �л� 5�μ��� �Է� �ޱ�
	//for�� Ȥ�� for-each���� Ȱ���Ͽ� �л� 5���� ���� ��� ����


	int students;
	double score = 0;
	double total = 0;

	std::cout << "�Է��� �л��� �ο� ���� �Է��ϼ��� : ";
	std::cin >> students;

	double* grade = new double[students];

	for (int i = 0; i < students; i++)
	{
		std::cout << i + 1 << "�� �л��� ������ �Է��ϼ��� : ";
		std::cin >> score;
		grade[i] = score;
		total += grade[i];
		std::cout << std::endl;
	}
	std::cout << "��� : " << total / students;
	
	delete[] grade;

}


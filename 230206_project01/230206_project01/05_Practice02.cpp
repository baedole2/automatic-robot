//#include <iostream>
//#include <vector> // ���͸� ����ϱ����� ����
//
//
//int main() {
//
//	//�ǽ�1 vector ����غ���
//	// ���͸� �̿��Ͽ� ���� �ǽ� �ذ�
//	int x, y;
//
//	std::cout << "�ڿ��� x �� �Է��ϼ���. : ";
//	std::cin >> x;
//
//	std::cout << "�ڿ��� y �� �Է��ϼ���. : ";
//	std::cin >> y;
//
//	while(x <= 0 || y <= 0)
//	{
//		std::cout << "x�� y ��� ����� �Է��� �ּ���." << std::endl;
//		std::cout << "�ڿ��� x �� �Է��ϼ���. : ";
//		std::cin >> x;
//
//		std::cout << "�ڿ��� y �� �Է��ϼ���. : ";
//		std::cin >> y;
//	}
//
//	// 2���� �迭�� ���� ���
//	std::vector<std::vector<int>>v;	// ���ߺ��� ����
//	v.assign(x, std::vector<int>(y,0));	//x�� ��, y�� ��, 0���� ���� �ʱ�ȭ
//
//	// ��� �ȿ� ��ġ�� ����ֱ�
//	for (int i = 0; i < v.size(); i++) {			//v�� ũ�� = x���� ����
//		for (int j = 0; j < v.at(i).size(); j++) {	//v�� ����1���� ũ�� = y���� ����
//			v.at(i).at(j) = y * i + j + 1;
//			std::cout << v.at(i).at(j) << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	//���ʹ� ������ �ʿ䰡 ������ delete ���� ������ ����.
//	
//
//	//�ǽ�2
//	//����ڰ� �Է��� ���ڵ��� �迭�� ���, �� ���� �� ���ϱ�
//	int num = 1;
//	std::vector<int>vInput;
//
//	std::cout << "����ڰ� �Է��� ���� ���ϱ�\n\n";
//
//	while (num != 0){
//		std::cout << "���ڸ� �Է��ϼ��� (0: exit) : ";
//		std::cin >> num;
//		vInput.push_back(num);
//	}
//
//	for (int i = 0; i < vInput.size(); i++)	{
//		num = num + vInput.at(i);
//	}
//
//	std::cout << "����ڰ� �Է��� ���� ���� : " << num;
//
//
//
//}
// ������Ʈ1 �轺Ų��� 31 ����
// ���� �ּ� 1������ �ִ� 3���� ���ӵ� ���ڸ� ���ϰ�
// 31 �̶�� ���ڸ� ���ϴ� ����� ���� ����.
//		1) ����ڴ� ������ �Է��� ���ڸ�ŭ.
//		2) ��ǻ�ʹ� ���� ���ڸ�ŭ.
//		3) �� �����, ��ǻ�� ���P 1~3������ ���ڸ� ����!

#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;



int main() {
	std::srand(time(NULL));	// ���� ����

	int input;
	int com_input;
	int num = 0;
	bool isGameOver = false;
	bool isPlayerWin = false;

	cout << "�轺Ų ��� 31 ����" << endl;
	
	while (isGameOver == false) {
		cout << "--------------------" << endl;
		cout << "���ڸ� �Է��ϼ��� ( 1-3 ) : ";
		cin >> input;

		if (input == 1 || input == 2 || input == 3) {
			cout << "����ڰ� ���� " << input << "���� �����߽��ϴ�." << endl;
			for (int i = 0; i < input; i++) {
				cout << ++num << " ";
				if (num == 31){
					isGameOver = true;
					isPlayerWin = true;
					break;
				}
			}
			cout  << endl << endl;
			com_input = rand() % 3 + 1;	// 1~3 ���� ����
			if (isGameOver == false) {
				cout << "��ǻ�Ͱ� ���� " << com_input << "���� �����߽��ϴ�." << endl;
				for (int i = 0; i < com_input; i++) {
					cout << ++num << " ";
					if (num == 31) {
						isGameOver = true;
						break;
					}
				}
			}
			cout << endl;
		}
		else {
			cout << "�Է°��� ������ϴ�. ������ ���ڸ� �Է��ϼ���." << endl;
		}
	}

	(isPlayerWin == true) ?
		cout << endl << "���� ����. ��ǻ�� �� �¸��Դϴ�." << endl
		: cout << endl << "���� ����. ����� �� �¸��Դϴ�." << endl;
}
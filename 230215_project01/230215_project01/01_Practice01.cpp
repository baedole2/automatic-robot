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
	int num = 0;
	bool isGameOver = false;
	bool isPlayerLose = false;
	bool isPlayerTurn = true;

	cout << "�轺Ų ��� 31 ����" << endl;

	while (isGameOver == false) {
		if (isPlayerTurn == true) {
			cout << "--------------------" << endl;
			cout << "���ڸ� �Է��ϼ��� ( 1-3 ) : ";
			cin >> input;
		}
		else
			input = rand() % 3 + 1;

		if (input >= 1 && input <= 3) {
			(isPlayerTurn) ? cout << "�����" : cout << "��ǻ��";
			cout << " �� ���� " << input << "���� �����߽��ϴ�." << endl;
			for (int i = 0; i < input; i++) {
				cout << ++num << " ";
				if (num == 31 && isPlayerTurn == true) {
					isGameOver = true;
					isPlayerLose = true;
					break;
				}
				else if (num == 31 && isPlayerTurn == false){
					isGameOver = true;
					isPlayerLose = false;
					break;
				}
			}
			cout << endl;
			if (isGameOver == true)	// �������� ������ Ż��
				break;
		}
		else {
			cout << "�Է°��� ������ϴ�. 1-3 ������ ���ڸ� �Է��ϼ���." << endl;
		}
		isPlayerTurn = !isPlayerTurn;
	}

	(isPlayerLose == true) ?
		cout << endl << "���� ����. ��ǻ�� �� �¸��Դϴ�." << endl
		: cout << endl << "���� ����. ����� �� �¸��Դϴ�." << endl;
}
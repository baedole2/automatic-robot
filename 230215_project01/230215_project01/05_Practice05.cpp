// ������Ʈ5 �߱�����
// 1) ����ڴ� 1���� 9���� �� 3���� ���ڸ� �̾�
// ��ǻ�Ͱ� �������� ���� ���� 3���� �� (�ߺ� X)
// - ������ �ڸ��� ���� ��� ������ strike
// - �ڸ��� �ٸ����� 3���� ���� �� ���� �Ǿ� ������ ball
//

#include <iostream>

using namespace std;

int main() {
	srand(time(NULL));
	int num_count = 3;	// ������� ������ ����
	int strike = 0;
	int ball = 0;
	int count = 0;	// �õ��� Ƚ��
	bool isGameOver = false;

	cout << "�߱� ����" << endl;

	int* input_num = new int[num_count];	// �Է��� ���� �迭
	int* num = new int[num_count];	// ������ ���� �迭
	int* input = new int[num_count];	// �Էµ� Ƚ���� �°�

	// ��ǻ�� ���� ����
	for (int i = 0; i < num_count; i++) {
		num[i] = rand() % 9 + 1;
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j]) {
				i--;
				continue;
			}
		}
	}
	cout << endl << endl;
	while (isGameOver == false) {
		cout << "1 ~ 9 ������ ���� 3���� �Է��ϼ���. (�̿��� ���� : ����)\n";
			cin >> input[0] >> input[1] >> input[2];

		for (int i = 0; i < num_count; i++) {
			// ���� �� �Է����� Ż��
			if (input[i] <= 0 || input[i] > 9) {
				cout << "���� ���� �Է��Դϴ�. ������ �����մϴ�." << endl;
				return 0;
			}
			input_num[i] = input[i];
		}
		count++;	// �Է�Ƚ�� ����

		for (int i = 0; i < 3; i++) {
			if (input_num[i] == num[i])
				strike++;	// ��Ʈ����ũ üũ
			for (int j = 0; j < 3; j++) {
				if (input_num[i] == num[j] && input_num[i] != num[i])
					ball++;	// ��üũ
			}
		}
		if (strike == 3)	// ��Ʈ����ũ 3 �Ǹ� ����
			isGameOver = true;
		else {	// �ƴҰ�� �ʱ�ȭ �� ��Ʈ����ũ, �� ���
			cout << "Strike : " << strike << "\t\tBall : " << ball << endl << endl;
			strike = 0;
			ball = 0;
		}
	}
	cout << count << "�� ���� ������ϴ�. " << endl;

	delete[] input;
	delete[] num;
	delete[] input_num;
}
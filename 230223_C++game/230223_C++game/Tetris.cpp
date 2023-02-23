#include <iostream>
#include <string>
#include "Blocks.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void clear_screen() {	// ChatGPT
	system("cls"); // windows �ü������ ȭ���� ����� ��ɾ�
}

int main() {
	// ����ȭ���� �׸��� �ڵ�
	const int tile_garo = 100;
	const int tile_sero = 25;

	int refresh = 0;
	int input;
	string buffer;	// ȭ�� �ø�Ŀ ������
	int mainScreen[tile_sero][tile_garo] = { {0} };

	int block[BLOCK_SIZE][BLOCK_SIZE] = { {0} };

	while (1) {
		//clear_screen();	// ȭ�� �ʱ�ȭ

		for (int i = 0; i < tile_sero; i++) {
			for (int j = 0; j < tile_garo; j++) {
				mainScreen[i][j] = 0;
				buffer += mainScreen[i][j];
			}
			buffer += "\n";
		}
		// ȭ�� ���
		cout << buffer;





		cout << "1. ������ / 2. L�� / 3. �� L�� / 4. T / 5. ���� / 6. �� ���� / 7. �׸�\n" << endl;
		cout << "Ű�� �Է��ϸ� ȭ���� ���ŵ�" << endl;
		cout << "���� " << refresh << "ȸ ���ŵ�.";
		cin >> input;
		refresh++;

		// Ű�� �Է��ϸ� ����� �迭�� ���ͼ� ǥ��
		switch (input) {
		case 1:
			// ������ ǥ��
		case 2:
			// L�� ǥ��
		case 3:
			// �� L�� ǥ��
		case 4:
			// T�� ǥ��
		case 5:
			// ���� ǥ��
		case 6:
			// �� ���� ǥ��
		case 7:
			// �׸� ǥ��
		default:
			cout << "�Է� ����" << endl;
			continue;
		}
		buffer.clear();
	}
}
// �ǽ�1 �ζ� ���α׷� �����
// 1 ~45 ���� 6���� ��ȣ ��÷�ϱ�
// 6���� ��ȣ�� ���� �ߺ����� �ʾƾ� ��!

#include <iostream>
#include <cstdlib>

// ������ ���ڸ� �̴� �ڵ�
using std::cout;
using std::endl;

int main() {
	std::srand(time(NULL));

	int atari[6] = { 0 ,};
	int random_num; // 1~45 ����
	bool is_duplicate_num = true;	// �ߺ�üũ

	cout << "������ �ζ� ��ȣ�Դϴ�." << endl;

	for (int i = 0; i < 6; i++) {
		random_num = rand() % 45 + 1;
		atari[i] = random_num;
		for (int j = 0; j < i; j++) {
			if (atari[j] == atari[i])	// �ߺ��� ���
				i--;	// i�� �ϳ� ��Ƽ� ���� �ܰ踦 �ٽ� �ݺ�.
		}
	}

	for (int i = 0; i < 6; i++){
		cout << atari[i] << " ";
	}

	return 0;
}

// �ڵ� �ʹ� ������.

//while (is_duplicate_num == true) {
//	// �ζ� ��ȣ ������ ���� �� �迭�� ������� * 6���ݺ�
//	for (int i = 0; i < 6; i++) {
//		random_num = rand() % 45 + 1;
//		atari[i] = random_num;
//		for (int j = 0; j < i; j++) {
//			if (atari[j] == atari[i])	// �ߺ��� ���
//				i--;	// i�� �ϳ� ��Ƽ� ���� �ܰ踦 �ٽ� �ݺ�.
//		}
//	}
	// �迭���� ��� ��
	// �ϳ��� ������ ���´ٸ� �ٽ� ������ ���� �� �迭�� ���� * 6�� �ݺ�
	//for (int j = 0; j < 5; j++) {
	//	for (int i = 1; i < 6-j; i++) {
	//		if (atari[j] == atari[j + i]) {
	//			is_duplicate_num = true;
	//			break;
	//		}
	//		else
	//			is_duplicate_num = false;
	//	}
	//	if (is_duplicate_num == true)
	//		break;
	//	else
	//		is_duplicate_num = false;
	//}
//}
// ������Ʈ2 Ÿ�Ӿ��� �����ձ� ����
// 1) ���� �ð� 30�� ���� �÷��̾�� �����ձ� ��Ģ�� ���� �ܾ �Է�
// 2) ���� �ð��� ����Ǹ� ������ ���� ��Ű��, �Է��� �ܾ��� ������ ���

#include <iostream>
#include <ctime>	//�ð� ������ ���ؼ�

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	int word_count = 0;
	int wrong_count = 0;
	string input;
	string word = "airplane";
	string word_save = "airplane";	// �� �����ִ� ĭ
	bool isGameOver = false;

	cout << "�����ձ� ����" << endl;
	while (isGameOver == false) {
		clock_t startTime = clock();
		cout << word_save << endl;	// �ܾ� ���� ��� ������
		cout << "���� �ܾ �Է��ϼ���. : ";
		cin >> input;

		int word_size = word.size();
		if (word[word_size - 1] == input[0]) {// ���þ��� ���� ���� �Է��� ���� �պκ� ��ġ ��
			word = input;
			word_save += "->" + input;
			word_count++;
		}
		else {
			cout << "�߸��� �Է��Դϴ�. " << endl << endl;
			wrong_count++;
			(wrong_count >= 3) ? isGameOver = true : isGameOver = false;
			continue;
		}

		clock_t endTime = clock();
		int elapsedTime = (endTime - startTime) / CLOCKS_PER_SEC;
		cout << "�Է±��� �ɸ� �ð� : " << elapsedTime << endl << endl;

		if (elapsedTime >= 30) {	// �ð��ʰ� �й�
			cout << "30�ʸ� �ʰ��Ͽ����ϴ�. Ÿ�� ����!" << endl;
			isGameOver = true;
			continue;
		}
	}

	cout << "���� ����!" << endl << "�Է��� �� �ܾ� ���� : " << word_count;
}
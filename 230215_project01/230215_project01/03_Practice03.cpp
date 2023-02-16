// ������Ʈ3 ���� ���� ���߱�
// 1) ��ǻ�Ͱ� 1~25������ �� �� �������� 6���� �� ���� (�ߺ� x)
// 2) ����ڵ� 1~25������ �� �� ���ϴ� ���� 6�� �Է� (�ߺ� x)
// 3) �� �迭�� ���ؼ� �� ������ ����ϱ�!
//		3-1) �� ���� ������ ���ϸ� 7��, 1���� ���߸� 6��, 2�� ���߸� 5��...
//		3-2) 6���� ��� ���߸� 1��

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {

	int input;
	int random_num;
	int prize = 0;
	int count = 6;
	vector<int> num;
	vector<int> com_num;

	std::srand(time(NULL));

	cout << "���ڴ� 1 ~ 25 ������ ���ڸ� �Է��� �� �ֽ��ϴ�." << endl;

	for (int i = 0; i < count; i++) {
		cout << i + 1 << "��° ��ȣ�� �Է��ϼ���. : ";
		cin >> input;
		if (input >= 1 && input <= 25)
			num.push_back(input);
		else {
			cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���." << endl;
			i--;
			continue;
		}
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j]) {	// ������� �ߺ��˻�_�����
				cout << "�̹� �Էµ� �����Դϴ�. �ٽ� �Է����ּ���." << endl;
				num.pop_back();
				i--;
			}
		}
	}
	for (int i = 0; i < count; i++) {
		random_num = std::rand() % 25 + 1;	//	��������
		com_num.push_back(random_num);
		for (int j = 0; j < i; j++) {
			if (com_num[i] == com_num[j]) {	// ������� �ߺ��˻�_��ǻ��
				com_num.pop_back();
				i--;
			}
		}
	}
	cout << "--------------------\n��÷��ȣ ����!" << endl;

	for (int i = 0; i < num.size(); i++) {
		for (int j = 0; j < com_num.size(); j++) {
			if (num[i] == com_num[j])
				prize++;
		}
		cout << com_num[i] << " ";
	}
	cout << "\n1 ~ 7����� ����� ���� �� �ֽ��ϴ�." << endl;
	cout << "���: " << prize << "���� ���ڰ� ��ġ�մϴ�. " << 7 - prize << "�� �Դϴ�!";
}
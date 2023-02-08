//[����] �ǽ�.���� ĳ���� �����ϰ� develop ��Ű�� ���α׷�
// (1) Character ��� Ŭ���� �ۼ�
// (2) Character Ŭ������ ĳ���� �̸�, level, item ���� �Ӽ����� ������ �־�� ��.
// (3) ����ڿ��� �ַܼ� ĳ���� �̸� �Է¹ް�, ĳ���� �����ϱ�. (�̸��� �Է¹��� ������, level, item ���� 0���� �ʱ�ȭ) = > ������ ���
// (4) ����ڿ��� ���� ĳ���� ��� �������� �Է��ϰ� �ϱ�. (0: ����. 0�� �Է��� ������ ��� ����� �Է��� ��ȣ�� �ش��ϴ� �۾��� ��� �ϸ� ��.)
// 1�� �Է��ϸ�, �̸� �����ϵ���
// 2�� �Է��ϸ�, level up(level �� 1�� �ö󰡰�)
// 3�� �Է��ϸ�, item ����(item ������ 1�� ����)
// 4�� �Է��ϸ�, item ���(item ������ 1�� ����)
// 0�� �Է��ϸ�, ���� ����.
// (5) �� ����� ��� Character �� �޼ҵ�� ������� �־�� ��. �Ѥ�����


#include <iostream>

using namespace std;

class Character {
	string name;
	int level;
	int items;
public:
	Character(string name) {
		this->name = name;
		level = 0;
		items = 0;
	}

	string get_name() {
		return name;
	}

	int get_level() {
		return level;
	}

	int get_items() {
		return items;
	}

	void set_name(string name) {
		this->name = name;	//Ŭ������ �̸��� �Ű������� �̸��� ��ڴ�
	}

	void set_level1up() {
		this->level = level+1;
	}
	
	void set_items1up() {
		this->items = items+1;	
	}

	void set_items1down() {
		this->items = items - 1;
	}

};

int main() {
	//����
	string name;

	int action = 99;	//�ʱⰪ ����. 0�϶� ����� ���� ������� ���� ����
	string action_s;

	//ĳ���� ����
	cout << "ĳ���͸� �����մϴ�.\n�̸��� �Է��ϼ��� : ";
	cin >> name;

	//ĳ���� ������
	Character character(name);

	//���ӽ���, �ݺ�
	while (action != 0)
	{
		cout << "\n��� " << character.get_name() << " / "
			 << "���� : " << character.get_level() << " / "
		     << "������ ���� : " << character.get_items() << endl;
		cout << "�ൿ�� �����ϼ���.\n( 1 : �̸����� / 2 : ���� �� / 3 : ������ �ݱ� / 4 : ������ ��� / 0 : exit ) : ";
		cin >> action;

		switch (action) {
		case 1:
			cout << "\n�̸��� �����մϴ�. : ";
			cin >> action_s;	// 1�� �Է��ϸ�, �̸� �����ϵ���
			character.set_name(action_s);
			cout << "\n�̸��� ���������� �����߽��ϴ�.\n";
			break;
		case 2:
			cout << "\n��! ġƮ ���! ������ �ö󰩴ϴ�!\n";	// 2�� �Է��ϸ�, level up(level �� 1�� �ö󰡰�)
			character.set_level1up();
			break;
		case 3:
			cout << "\n��, �������� �߰��մϴ�. ����..\n";	// 3�� �Է��ϸ�, item ����(item ������ 1�� ����)
			character.set_items1up();
			break;
		case 4:		// 4�� �Է��ϸ�, item ���(item ������ 1�� ����)
			if (character.get_items() <= 0) {
				cout << "\n����, ����� �������� �����ϴ�!\n";
			}
			else {
				cout << "\n�������� ����մϴ� : \n";
				character.set_items1down();
			}
			break;
		case 0:
			cout << "\n\n\n\n\n\n������ �����մϴ�. �߰���~ ";	// 0�� �Է��ϸ�, ���� ����.
			return 0;
			break;
		default:
			cout << "\n�߸� �Է��ϼ̽��ϴ�. : \n";
			break;
		}
	}
}
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using std::ifstream;
using std::ofstream;

int main() {

	////�ǽ�1 ȸ�� ��� �ۼ��ϱ�
	////����ڿ��� 3���� ȸ���� ���� �̸� ��й�ȣ �Է¹ޱ�
	////����ڷκ��� �Էµ� ������ member.txt�� ���(���� ������)
	////member.txt�� ����� ȸ����� ��� (���� �б���)

	//string name[3] = {"" ,"",""};
	//string password[3] = { "","",""};


	//// ����� �Է�
	//cout << "3���� ȸ���� ���� �̸� ��й�ȣ�� ���������� �Է��ϼ���.\n";
	//for (int i = 0; i < 3; i++){
	//	cout << i+1 << "��° ȸ�� : ";
	//	cin >> name[i] >> password[i];
	//}

	//// ���� ����
	//ofstream file_w("member.txt");
	//if (file_w.fail())
	//	cout << "���� ����" << endl;

	//// �Էµ� ���� �ؽ�Ʈ ���Ϸ� �ű�
	//int i = 0;
	//while (i!=3) {
	//	file_w << name[i] + " " + password[i] + "\n";
	//	i++;
	//}
	//// �б� ���� ����
	//file_w.close();

	//cout << "----------ȸ�� ��� ���� �б�--------\n";

	//// ���� �д� �κ�.
	//ifstream file_r("member.txt");
	//if (file_r.fail())
	//	cout << "���� ����" << endl;
	//
	//// ���� ���� ���
	//string line;
	//while (getline(file_r, line)){
	//	cout << line << endl;
	//}

	//
	//file_r.close();

	//�ǽ� 2 ȸ�� ��θ� ������ �α��� ���
	//����ڿ��� "�̸��� �Է��ϼ���." ��� �޼����� ����ѵ� �̸� �Է¹ޱ�
	//����ڿ��� "��й�ȣ�� �Է��ϼ���." ��� �޼����� ����� �� ��� �Է¹ޱ�
	//member.txt���� �� �پ� "�̸�"�� "���"�� �˻��Ͽ� �α��� ������ "�α��� ����" ���� �� "�α��� ����" ���
	//���⼭ member.txt = �� �ǽ����� ���� ȸ�� ���

	//string inputName;
	//string inputPassword;

	//cout << "�̸��� �Է��ϼ���. : ";
	//cin >> inputName;

	//cout << "��й�ȣ�� �Է��ϼ���. : ";
	//cin >> inputPassword;

	//// ���� �д� �κ�.
	//ifstream file_r("member.txt");
	//if (file_r.fail())
	//	cout << "���� ����" << endl;

	//// ���� ���� ���
	//string line;
	//while (getline(file_r, line)) {
	//	if (inputName + " " + inputPassword == line)
	//	{
	//		cout << "�α��� ����!!";
	//		return 0;
	//	}
	//}
	//cout << "�α��� ����!!";

	//file_r.close();
	//return 0;


	//[����] �ǽ�.
	//�ǽ�2������ �α��� ���� �� ȸ���� ��ȭ��ȣ�� ����
	//ȸ�� ��ȭ��ȣ�� ���Ͽ� �����ϱ�

	string inputName;
	string inputPassword;
	string inputPhoneNum;	// ��ȭ��ȣ ���� �߰�


	cout << "�̸��� �Է��ϼ���. : ";
	cin >> inputName;

	cout << "��й�ȣ�� �Է��ϼ���. : ";
	cin >> inputPassword;

	// ���� �д� �κ�.
	ifstream file_r("member.txt");
	if (file_r.fail())
		cout << "���� ����" << endl;

	// ���� ���� ���
	string line;
	while (getline(file_r, line)) {
		if (inputName + " " + inputPassword == line) {
			cout << "�α��� ����!!\n��ȭ��ȣ�� �Է����ּ��� : ";
			cin >> inputPhoneNum;

			string tel_name, tel_num, content, temp="";
			// ��ȭ��ȣ�� tel���� ��ġ
			ifstream tel_r("member_tel.txt");
			ofstream tel_w;
			bool change = false;
			while (tel_r >> tel_name >> tel_num) {
				if (tel_name == inputName)
				{
					change = true;
					tel_num = inputPhoneNum;
				}
				temp += tel_name + " " + tel_num + "\n";

			}
			if (change)
			{
				tel_w.open("member_tel.txt");
				tel_w << temp;
			}
			else {
				tel_w.open("member_tel.txt", ios::app);
				tel_w << inputName << " " << inputPhoneNum << endl;
			}


			// 1. ��ġ�ؼ� ���� �̸��� ��ǲ�̸��� ������
			// �ش� ���� ��ȭ��ȣ�� �Է��� ��ȭ��ȣ�� ����
			// 2. �ű� �Է��� ��� ���� �Ʒ��� �Է�.
			
			cout << "member_tel.txt �� ����Ǿ����ϴ�.";
			tel_w.close();
			tel_r.close();
			return 0;
		}
	}
	cout << "�α��� ����!!";


	file_r.close();
	return 0;
}
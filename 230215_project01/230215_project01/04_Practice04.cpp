// ������Ʈ4 ������ �����
// ����ڷκ��� Ȧ�� n�� �Է¹޾� n*n ������ �����
// 
// *�������̶�?
// 1���� n���������� ���� ���簢������ �迭�� ����, ����, �밢�� �հ谡 ��� ������ ���� ��
// *notion �޸� 29. 2023-02-15 ����

#include <iostream>
#include <vector>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void check_range(int* x, int* y, int input) {	// ������ ����� ��� ������ ������ ����
	if (*x < 0) *x += input;
	if (*x > input - 1) *x -= input;
	if (*y < 0) *y += input;
	if (*y > input - 1) *y -= input;
}

int main() {

	int X = 0;
	int Y = 0;
	int input;

	cout << "�������� �� Ȥ�� ���� ���� �ڿ����� �Է����ּ���. : ";
	cin >> input;
	vector<vector<int>> vMaBangJin(input, vector<int>(input, X));	// �Է°� �޾Ƽ� ũ�� ����
	X = input / 2;	// ������
	Y = 0;
	for (int i = 0; i < pow(input,2) ; i++) {
		vMaBangJin[Y][X] = i+1; 
		// �̵�
		Y--; X++;
		// ������ ������� ���� ������ ����
		check_range(&X, &Y, input);
		// ���ڰ� �ԷµǾ� ������ ���� �� �Ʒ��� ��ĭ
		if (vMaBangJin[Y][X] >= 1 && vMaBangJin[Y][X] <= pow(input, 2)) {
			X--; Y++; Y++;
		}
		// ������ ������� ����
		check_range(&X, &Y, input);
	}
	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			cout << std::setw(3) << vMaBangJin[i][j];
		}
		cout << endl;
	}
}
#include <iostream>
#include <string>

int add(int n1, int n2){
	return n1 + n2;
}
int minus(int n1, int n2) {
	if (n1 > n2){
		return n1 - n2;
	}
	else{
		return n2 - n1;
	}
}
int multiple(int n1, int n2) {
	return n1 * n2;
}
double divide(int n1, int n2) {
	return (double)n1 / (double)n2;	//��������ȯ���� �Ǽ� ����
}
int bigNumCheck(int n1, int n2, int n3)
{
	if (n1 >= n2 && n1 >= n3) {
		return n1;
	}
	else if (n2 >= n1 && n2 >= n3) {
		return n2;
	}
	else
		return n3;
}
void checkOddEven(int n1){
	if (n1 % 2 == 0) {
		std::cout << "¦��~!\n";
	}
	else {
		std::cout << "Ȧ��~��\n";
	}
}

int main()
{
	//�ǽ�1 ��Ģ���� �Լ� �����
	//�ΰ��������� �Ű������� �޾� �� ���� �����ϴ� add �Լ��� ���弼��.
	//�ΰ��������� �Ű������� �޾� �� ���� �����ϴ� minus �Լ��� ���弼��.
	//  *��, �μ��� ������ ������� ū ������ ���� ���� �� ����� ����.
	//�ΰ��������� �Ű������� �޾� �� ���� �����ϴ� multiple �Լ��� ���弼��.
	//�ΰ��������� �Ű������� �޾� �� ���� �����ϴ� divide �Լ��� ���弼��.
	//  *��, divide �Լ��� �Ǽ��� ���� (hint, ��������ȯ)
	//main�Լ����� ���� 4���� �Լ��� �ѹ��� ȣ���Ͽ� ���ϵ� ���� ����ϼ���.
	
	
	int num1;	//���� ����
	int num2;
	int num3;
	int a;

	std::cout << "ù��° ���ڸ� �Է��ϼ��� : ";	// ���� �Է�
	std::cin >> num1;

	std::cout << "�ι�° ���ڸ� �Է��ϼ���� : ";
	std::cin >> num2;
	// �Լ� �ѹ��� ���
	std::cout << add(num1, num2) << std::endl;
	std::cout << minus(num1, num2) << std::endl;
	std::cout << multiple(num1, num2) << std::endl;
	std::cout << divide(num1, num2) << std::endl;

	//����1 �ϳ��� ������ �Ű������� �޾Ƽ� �� ���� ¦���̸� "¦��",
	//Ȧ���̸� "Ȧ��" ��� ����ϴ� �Լ� �ۼ�

	checkOddEven(num1);

	std::cout << "����° ���ڸ� �Է��ϼ����� : ";
	std::cin >> num3;
	//����2 �ǽ�.�� ���� ���� �Ű������� �޾Ƽ� ���� ���� ū ���� ��ȯ�ϴ� �Լ� �ۼ�.
	a = bigNumCheck(num1, num2, num3);
	std::cout << "�� �� ���� ū ���� " << a << " �����ϴ�!!\n";
	
}
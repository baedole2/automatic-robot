//#include <iostream>
//
//int main() {
//
//	//������,�����迭
//
//	int* p;	//�����͸� ����ϱ����ؼ� �ڷ��� ���ʿ� * �� �پ���Ѵ�.
//	int n = 5;
//	p = &n;	//p���ٰ� n�� �޸� �ּҸ� ��´ٰ� ����
//			//n�� �޸� �ּҰ���? ���� �𸥴�!
//			//���̷��� ����ϴ°�? p=n �ϸ� �ȵǴ� ����?
//
//	std::cout << p << std::endl;	//�����Ͱ� ����Ű�� ���� �޸��ּҸ� ������
//	std::cout << &n << std::endl;	//�޸��ּ� ������
//	std::cout << n << std::endl;
//	std::cout << *p << std::endl;	//������ �������� ��� ������ ����. 
//									//�����Ͱ� ����Ű�� ���� ������
//
//
//	int num;
//	std::cin >> num;
//	//int num_array[num];
//	int* num_array = new int[num];	//new�� class �� ���õ� ����.
//									// �ϴ��� �������θ� �˾Ƶ���
//	for (int i = 0; i < num; i++)
//	{
//		num_array[i] = 1;	//�ִ���̰� num�� �迭�� ��� ���ҿ� 1�� �־� �迭�� �ʱ�ȭ ��Ű�ڴ�.
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		std::cout << num_array[i]  << std::endl;	//�ִ���� num�� �迭�� ���ҵ��� ���
//	}
//
//
//	delete[] num_array;
//	delete p;
//
//}
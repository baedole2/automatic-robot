//#include <iostream>
//int main() {
//	//num�� �޾Ƽ� num X num �迭
//	int num;
//	std::cin >> num;
//	int** num_arr = new int* [num];
//
//	for (int i = 0; i < num; i++) {
//		num_arr[i] = new int[num];
//	}
//
//	for (int i = 0; i < num; i++) {
//		for (int j = 0; j < num; j++)
//		{
//			num_arr[i][j] = 1;
//		}
//	}
//
//	for (int i = 0; i < num; i++) {
//		for (int j = 0; j < num; j++)
//		{
//			std::cout << num_arr[i][j] << " ";
//		}
//		std::cout <<  std::endl;
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		delete[] num_arr[i];
//	}
//
//	delete[] num_arr;	
//
//
//	//vector �� �̿��ϸ� �� ����.
//
//}
//#include <iostream>
//
//int main() {
//
//	//포인터,동적배열
//
//	int* p;	//포인터를 사용하기위해선 자료형 앞쪽에 * 이 붙어야한다.
//	int n = 5;
//	p = &n;	//p에다가 n의 메모리 주소를 담는다고 선언
//			//n의 메모리 주소값은? 나도 모른다!
//			//왜이렇게 사용하는가? p=n 하면 안되는 이유?
//
//	std::cout << p << std::endl;	//포인터가 가르키는 것의 메모리주소를 보여줌
//	std::cout << &n << std::endl;	//메모리주소 보여줌
//	std::cout << n << std::endl;
//	std::cout << *p << std::endl;	//포인터 변수에만 사용 가능한 문법. 
//									//포인터가 가르키는 값을 보여줌
//
//
//	int num;
//	std::cin >> num;
//	//int num_array[num];
//	int* num_array = new int[num];	//new는 class 와 관련된 무엇.
//									// 일단은 형식으로만 알아두자
//	for (int i = 0; i < num; i++)
//	{
//		num_array[i] = 1;	//최대길이가 num인 배열에 모든 원소에 1로 넣어 배열을 초기화 시키겠다.
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		std::cout << num_array[i]  << std::endl;	//최대길이 num인 배열의 원소들을 출력
//	}
//
//
//	delete[] num_array;
//	delete p;
//
//}
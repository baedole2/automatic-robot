// 프로젝트4 마방진 만들기
// 사용자로부터 홀수 n을 입력받아 n*n 마방진 만들기
// 
// *마방진이란?
// 1에서 n제곱까지의 수를 정사각형으로 배열해 가로, 세로, 대각의 합계가 모두 같도록 만든 것
// *notion 메모 29. 2023-02-15 참조

#include <iostream>
#include <vector>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void check_range(int* x, int* y, int input) {	// 범위를 벗어났을 경우 안으로 들어오게 조정
	if (*x < 0) *x += input;
	if (*x > input - 1) *x -= input;
	if (*y < 0) *y += input;
	if (*y > input - 1) *y -= input;
}

int main() {

	int X = 0;
	int Y = 0;
	int input;

	cout << "마방진의 행 혹은 열의 수를 자연수로 입력해주세요. : ";
	cin >> input;
	vector<vector<int>> vMaBangJin(input, vector<int>(input, X));	// 입력값 받아서 크기 설정
	X = input / 2;	// 시작점
	Y = 0;
	for (int i = 0; i < pow(input,2) ; i++) {
		vMaBangJin[Y][X] = i+1; 
		// 이동
		Y--; X++;
		// 범위를 벗어났을때 범위 안으로 오게
		check_range(&X, &Y, input);
		// 숫자가 입력되어 있으면 복구 및 아래로 한칸
		if (vMaBangJin[Y][X] >= 1 && vMaBangJin[Y][X] <= pow(input, 2)) {
			X--; Y++; Y++;
		}
		// 범위를 벗어났을때 복구
		check_range(&X, &Y, input);
	}
	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			cout << std::setw(3) << vMaBangJin[i][j];
		}
		cout << endl;
	}
}
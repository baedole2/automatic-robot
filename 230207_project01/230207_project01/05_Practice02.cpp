//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//using std::ifstream;
//using std::ofstream;
//
//int main() {
//
//	////실습1 회원 명부 작성하기
//	////사용자에게 3명의 회원에 대한 이름 비밀번호 입력받기
//	////사용자로부터 입력된 정보를 member.txt에 기록(파일 쓰기모드)
//	////member.txt에 저장된 회원명부 출력 (파일 읽기모드)
//
//	//string name[3] = {"" ,"",""};
//	//string password[3] = { "","",""};
//
//
//	//// 사용자 입력
//	//cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요.\n";
//	//for (int i = 0; i < 3; i++){
//	//	cout << i+1 << "번째 회원 : ";
//	//	cin >> name[i] >> password[i];
//	//}
//
//	//// 파일 쓰기
//	//ofstream file_w("member.txt");
//	//if (file_w.fail())
//	//	cout << "파일 없음" << endl;
//
//	//// 입력된 값을 텍스트 파일로 옮김
//	//int i = 0;
//	//while (i!=3) {
//	//	file_w << name[i] + " " + password[i] + "\n";
//	//	i++;
//	//}
//	//// 읽기 파일 닫음
//	//file_w.close();
//
//	//cout << "----------회원 명부 파일 읽기--------\n";
//
//	//// 파일 읽는 부분.
//	//ifstream file_r("member.txt");
//	//if (file_r.fail())
//	//	cout << "파일 없음" << endl;
//	//
//	//// 파일 내용 출력
//	//string line;
//	//while (getline(file_r, line)){
//	//	cout << line << endl;
//	//}
//
//	//
//	//file_r.close();
//
//	//실습 2 회원 명부를 응용한 로그인 기능
//	//사용자에게 "이름을 입력하세요." 라는 메세지를 출력한뒤 이름 입력받기
//	//사용자에게 "비밀번호를 입력하세요." 라는 메세지를 출력한 뒤 비번 입력받기
//	//member.txt에서 한 줄씩 "이름"과 "비번"을 검사하여 로그인 성공시 "로그인 성공" 실패 시 "로그인 실패" 출력
//	//여기서 member.txt = 앞 실습에서 만든 회원 명부
//
//	//string inputName;
//	//string inputPassword;
//
//	//cout << "이름을 입력하세요. : ";
//	//cin >> inputName;
//
//	//cout << "비밀번호를 입력하세요. : ";
//	//cin >> inputPassword;
//
//	//// 파일 읽는 부분.
//	//ifstream file_r("member.txt");
//	//if (file_r.fail())
//	//	cout << "파일 없음" << endl;
//
//	//// 파일 내용 출력
//	//string line;
//	//while (getline(file_r, line)) {
//	//	if (inputName + " " + inputPassword == line)
//	//	{
//	//		cout << "로그인 성공!!";
//	//		return 0;
//	//	}
//	//}
//	//cout << "로그인 실패!!";
//
//	//file_r.close();
//	//return 0;
//
//
//	//[번외] 실습.
//	//실습2번에서 로그인 성공 시 회원의 전화번호를 묻고
//	//회원 전화번호를 파일에 저장하기
//
//	string inputName;
//	string inputPassword;
//	string inputPhoneNum;	// 전화번호 변수 추가
//
//
//	cout << "이름을 입력하세요. : ";
//	cin >> inputName;
//
//	cout << "비밀번호를 입력하세요. : ";
//	cin >> inputPassword;
//
//	// 파일 읽는 부분.
//	ifstream file_r("member.txt");
//	if (file_r.fail())
//		cout << "파일 없음" << endl;
//
//	// 파일 내용 출력
//	string line;
//	while (getline(file_r, line)) {
//		if (inputName + " " + inputPassword == line) {
//			cout << "로그인 성공!!\n전화번호를 입력해주세요 : ";
//			cin >> inputPhoneNum;
//
//			string name;
//
//			ifstream mem_tel_r("member_tel.txt");
//			ofstream temp_w("temp.txt", ios::app);
//
//			while (getline(mem_tel_r, line)) {
//				//temp.txt에 member_tel.txt 를 옮겨쓰기)
//				temp_w << line << endl;
//			}
//
//
//			//member_tel.txt 초기화
//			ofstream mem_tel_w("member_tel.txt");
//			mem_tel_w << "";
//
//			ifstream temp_r("temp.txt");
//			while (getline(temp_r, line)) {
//				//temp.text 확인. 이름비교후 맞으면 저장했던거 입력. 아니면 그대로 카피
//
//				temp_r >> name;
//
//				if (inputName == name) {
//					ofstream mem_tel_w("member_tel.txt", ios::app);
//					line = inputName + " " + inputPhoneNum + "\n";
//					mem_tel_w << line << endl;
//				}
//				else {
//					ofstream mem_tel_w("member_tel.txt", ios::app);
//					mem_tel_w << line << endl;
//				}
//			}
//			//remove("temp.txt");
//
//			cout << "member_tel.txt 에 저장되었습니다.";
//
//			return 0;
//		}
//	}
//	cout << "로그인 실패!!";
//
//
//	file_r.close();
//	return 0;
//}
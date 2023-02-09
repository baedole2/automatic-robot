//#include <iostream>
//
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;
//
//class Person {
//protected:
//	string name;
//private:
//	string gender;
//public:
//	Person() {
//		cout << "Person 생성자 실행됨.\n";
//	}
//	Person(string name) {
//		cout << "Person 생성자22 실행됨.\n";
//		this->name = name;
//	}
//
//	int age;
//
//	void talk() {
//		cout << "말하기\n";
//	}
//	void cat() {
//		cout << "먹기\n";
//	}
//	void sleep() {
//		cout << "잠자기\n";
//	}
//};
//
////중복되는 코드를 줄이기위해 상속
////Person 클래스의 내용물을 이용하는(상속)
////Student 클래스를 선언
//class Student : public Person {	// public 선언으로 Person의 모든 기능을 따올 수 있음
//	string stu_id;				// protected 은 public 부분을 protected로 바뀌어서 정보를 가져옴
//public:				
//	Student() {
//		cout << "Student 생성자 실행됨.\n";
//	}// private는 모두 private로 가져오게 된다. 
//	Student(string str) : Person("aaa"){
//		cout << "Student 생성자22 실행됨.\n";
//	}
//
//
//	void study() {				// 아무것도 안쓸경우 private가 디폴트가 된다.
//
//		cout << "공부하기\n";
//	}
//
//	//void test() {
//	//	name = "학생1";
//	//	//gender = "여자";	
//	//	age = 5;
//	//}
//};
//
//int main() {
//	class Prof : public Person {
//		void test() {
//			name = "aaaa";
//		}
//	};
//	Student s;
//	//s.name = "홍길동";	protected라서 상속은 받았으나 상속 받은곳과 클래스가 아니라 출력 불가능
//	s.age = 21;
//
//	return 0;
//}
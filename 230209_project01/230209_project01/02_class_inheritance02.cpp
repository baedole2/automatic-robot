//#include <iostream>
//
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;
//
////private > protected > public
//class Person {
//protected:
//	string name;
//public:
//	Person(string name) {
//		this->name = name;
//	}
//	string get_name() {
//		return name;
//	}
//};
//
//class Student : public Person { // �⺻�� private
//	string stu_id;
//public:
//	Student() : Person("aaaa") {
//		name = "ȫ�浿";
//	}
//	Student(string name, string stu_id) : Person(name) {
//		this->stu_id = stu_id;
//	}
//	Student(string name) : Person("ccccc") {  }
//	Student(int a) : Person("bbbb") {  }
//};
//
//
//int main() {
//	Student s2; // ȫ�浿
//	cout << s2.get_name();
//	Student s4("������"); // ccccc
//	Student s3(1); // bbbb
//	Student s("ȫ�浿", "1111111"); // ȫ�浿
//
//	return 0;
//}
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Person {
//protected:
//	string name;
//	static int count;// static 메소드 안에서는 일반 멤버에 접근 할 수 없음.
//public:
//	static void static_method() {
//		cout << "스태틱 메소드 테스트" << endl;
//	}
//	
//	 static  int get_count() {
//		return count;
//	}
//
//	Person() {
//		this->name = "아무개";
//		count++;
//	}
//	virtual ~Person() {
//		cout << "사람의 소멸자입니다." << endl;
//		count--;
//	}
//	virtual void info() {	// 가상함수. 순수가상함수와 다르다(추상메소드)
//		cout << "사람입니다." << endl;
//
//	}
//
//	void set_name(string name) {
//		this->name = name;
//	}
//
//	string get_name() {
//		return name;
//	}
//};
//
//int Person::count = 0;// 스태틱 초기화 하는법
//
//class Student : public Person {
//	string stu_id;
//public:
//	~Student() {
//		cout << "학생의 소멸자입니다." << endl;
//	}
//	void info() {
//		cout << "학생입니다." << endl;
//	}
//	void test() {
//		cout << "학생의 test 함수입니다." << endl;
//	}
//};
//
//class Instructor : public Person {
//	string stu_id;
//public:
//	~Instructor() {
//		cout << "강사의 소멸자입니다." << endl;
//	}
//	void info() {
//		cout << "강사입니다." << endl;
//	}
//};
//
//int main() {
//
//	//업캐스팅
//	//부모클래스로 자식의 머시기를 만드는 방식
//	//Person s = Student();	// ~Person();
//	//s.info();
//
//	//Person* ss = new Student();	//주소값이 담기는 포인터
//	//ss->info();	// 포인터 일때는 이런식으로 함수를 호출한다
//	//(*ss).info();	// 이런방식도 가능
//	// ss->test(); 오류. Person에ㅔ 없는 멤버에는 접근할 수 없음.
//	//delete ss;	//동적메모리기 때문에 해제를 해줘야한다.
//
//	//Student stu;	// stu 변수이름으로 Student 객체 생성
//	// 빌드중 메모리가 할당됨 = 반납할 필요 없음. 자동해제
//	//Person* sss = &stu;
//	//sss->info();
//
//	//Person* per_arr[3] = { new Student(), new Instructor(), new Student() };
//	//for (int i = 0; i < 3; i++) {
//	//	per_arr[i]->info();
//	//}
//
//	//for (int i = 0; i < 3; i++) {
//	//	delete per_arr[i];
//	//}
//
//	//Person person[2] = { Student(),Student() };
//	
//	//Person* p = new Student();
//	//// p->test();	접근 불가능
//	//Student* s = (Student*)p;
//	//s->test();	// 접근가능
//	//
//	//p->set_name("홍길동");
//	//cout << p->get_name() << " " << s->get_name() << endl;
//	//p->set_name("성춘향");
//	//cout << p->get_name() << " " << s->get_name() << endl;
//
//	//Student& s1 = *(Student*)p;	// 뒷부분 다운캐스팅 한걸 변수에 담아둔다.
//	//// p로 접근하면 주소값이 나온다. -> 현재 포인터 상태
//	//// Person 포인터를 Student 포인터로 바꾼다.
//	//// 이후 Student 포인터의 값을 찾도록 * 을 앞에 붙인다.
//
//	//// 참조변수 선언시 알아서 변수의 주소값을 체크
//	//// 값을 변수에 입력 -> 값에 이어진 주소를 체크
//
//	//s1.set_name("코디");
//	//cout << p->get_name() << " " << s->get_name() << endl;
//
//	//Student s2 = *(Student*)p;
//	//s2.set_name("코양");
//	//cout << p->get_name() << " " << s2.get_name() << endl;
//	//
//
//
//	//int a = 1;
//	//int k = 2;
//	//int& b = a;	// 참조변수
//	//int* c = &a;
//
//	//cout << a << " " << b << " " << *c << endl;
//
//	//b = k;
//
//	//cout << a << " " << b << " " << *c << endl;
//
//	//a = 3;
//
//	//cout << a << " " << b << " " << *c << endl;
//
//	//c = &k;
//	//k = 4;
//
//
//	//cout << a << " " << b << " " << *c << endl;
//
//
//	//
//	//delete p;
//
//	//--------------------------
//	// 스태틱 static
//	// static 멤버는 모든 객체가 하나의 공간을 공유합니다.
//	// name static 멤버 X -> 객체 별로 공간이 따로 할당됨.
//	Person::static_method();
//	cout << Person::get_count() << endl;
//
//	Person p;
//	p.info();
//	p.static_method();
//
//	Person p1;
//	p1.set_name("홍길동");
//
//	Person p2;
//
//	cout <<  Person::get_count() << "명" << endl;
//
//	Person* p3[5];
//	for (int i = 0; i < 5; i++){
//		p3[i] = new Person();
//	}
//
//	cout << Person::get_count() << "명" << endl;
//
//	for (int i = 0; i < 5; i++) {
//		delete p3[i];
//	}
//
//	cout << Person::get_count() << "명" << endl;
//
//	vector<Person*> persons = { new Person(), new Person() };
//	
//	cout << Person::get_count() << "명" << endl;
//
//	persons.push_back(new Person());
//
//	cout << Person::get_count() << "명" << endl;
//
//	cout << persons.size() << "사이즈" << endl;
//
//	int size = persons.size();
//
//	for (int i = 0; i < size; i++) {
//		delete persons.at(i);
//		persons.pop_back();
//	}
//
//	cout << Person::get_count() << "명" << endl;
//
//
//	return 0;
//}
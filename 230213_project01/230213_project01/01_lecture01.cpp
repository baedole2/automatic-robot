//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Person {
//protected:
//	string name;
//	static int count;// static �޼ҵ� �ȿ����� �Ϲ� ����� ���� �� �� ����.
//public:
//	static void static_method() {
//		cout << "����ƽ �޼ҵ� �׽�Ʈ" << endl;
//	}
//	
//	 static  int get_count() {
//		return count;
//	}
//
//	Person() {
//		this->name = "�ƹ���";
//		count++;
//	}
//	virtual ~Person() {
//		cout << "����� �Ҹ����Դϴ�." << endl;
//		count--;
//	}
//	virtual void info() {	// �����Լ�. ���������Լ��� �ٸ���(�߻�޼ҵ�)
//		cout << "����Դϴ�." << endl;
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
//int Person::count = 0;// ����ƽ �ʱ�ȭ �ϴ¹�
//
//class Student : public Person {
//	string stu_id;
//public:
//	~Student() {
//		cout << "�л��� �Ҹ����Դϴ�." << endl;
//	}
//	void info() {
//		cout << "�л��Դϴ�." << endl;
//	}
//	void test() {
//		cout << "�л��� test �Լ��Դϴ�." << endl;
//	}
//};
//
//class Instructor : public Person {
//	string stu_id;
//public:
//	~Instructor() {
//		cout << "������ �Ҹ����Դϴ�." << endl;
//	}
//	void info() {
//		cout << "�����Դϴ�." << endl;
//	}
//};
//
//int main() {
//
//	//��ĳ����
//	//�θ�Ŭ������ �ڽ��� �ӽñ⸦ ����� ���
//	//Person s = Student();	// ~Person();
//	//s.info();
//
//	//Person* ss = new Student();	//�ּҰ��� ���� ������
//	//ss->info();	// ������ �϶��� �̷������� �Լ��� ȣ���Ѵ�
//	//(*ss).info();	// �̷���ĵ� ����
//	// ss->test(); ����. Person���� ���� ������� ������ �� ����.
//	//delete ss;	//�����޸𸮱� ������ ������ ������Ѵ�.
//
//	//Student stu;	// stu �����̸����� Student ��ü ����
//	// ������ �޸𸮰� �Ҵ�� = �ݳ��� �ʿ� ����. �ڵ�����
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
//	//// p->test();	���� �Ұ���
//	//Student* s = (Student*)p;
//	//s->test();	// ���ٰ���
//	//
//	//p->set_name("ȫ�浿");
//	//cout << p->get_name() << " " << s->get_name() << endl;
//	//p->set_name("������");
//	//cout << p->get_name() << " " << s->get_name() << endl;
//
//	//Student& s1 = *(Student*)p;	// �޺κ� �ٿ�ĳ���� �Ѱ� ������ ��Ƶд�.
//	//// p�� �����ϸ� �ּҰ��� ���´�. -> ���� ������ ����
//	//// Person �����͸� Student �����ͷ� �ٲ۴�.
//	//// ���� Student �������� ���� ã���� * �� �տ� ���δ�.
//
//	//// �������� ����� �˾Ƽ� ������ �ּҰ��� üũ
//	//// ���� ������ �Է� -> ���� �̾��� �ּҸ� üũ
//
//	//s1.set_name("�ڵ�");
//	//cout << p->get_name() << " " << s->get_name() << endl;
//
//	//Student s2 = *(Student*)p;
//	//s2.set_name("�ھ�");
//	//cout << p->get_name() << " " << s2.get_name() << endl;
//	//
//
//
//	//int a = 1;
//	//int k = 2;
//	//int& b = a;	// ��������
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
//	// ����ƽ static
//	// static ����� ��� ��ü�� �ϳ��� ������ �����մϴ�.
//	// name static ��� X -> ��ü ���� ������ ���� �Ҵ��.
//	Person::static_method();
//	cout << Person::get_count() << endl;
//
//	Person p;
//	p.info();
//	p.static_method();
//
//	Person p1;
//	p1.set_name("ȫ�浿");
//
//	Person p2;
//
//	cout <<  Person::get_count() << "��" << endl;
//
//	Person* p3[5];
//	for (int i = 0; i < 5; i++){
//		p3[i] = new Person();
//	}
//
//	cout << Person::get_count() << "��" << endl;
//
//	for (int i = 0; i < 5; i++) {
//		delete p3[i];
//	}
//
//	cout << Person::get_count() << "��" << endl;
//
//	vector<Person*> persons = { new Person(), new Person() };
//	
//	cout << Person::get_count() << "��" << endl;
//
//	persons.push_back(new Person());
//
//	cout << Person::get_count() << "��" << endl;
//
//	cout << persons.size() << "������" << endl;
//
//	int size = persons.size();
//
//	for (int i = 0; i < size; i++) {
//		delete persons.at(i);
//		persons.pop_back();
//	}
//
//	cout << Person::get_count() << "��" << endl;
//
//
//	return 0;
//}
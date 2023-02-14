#pragma once	//�ѹ� �о�� �߰������� ���� �ʴ� ���. ����ð��� ���� �� ����.
#include <iostream>

using std::string;

#ifndef __PERSON_H__ // if not define : __PERSON_H__ �� ���ǵǾ� ���� �ʴٸ�
#define __PERSON_H__ // --PERSON-H__ �� �����Ѵ�. #endif�� ������ �������� ������

//����� �߰�ȣ �������
class Person {
	string name;
	static int count;
public:
	static void static_method();
	static int get_count();
	Person();
	virtual ~Person();
	virtual void info();
	void set_name(string name);
	string get_name();
};
//int Person::count = 0;

#endif // !__PERSON_H__ // if not define : __PERSON_H__ �� ���ǵǾ� ���� �ʴٸ�
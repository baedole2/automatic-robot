#pragma once
#include <iostream>
#include "Person.h"

#ifndef __STUDENT_H__ // if not define : __PERSON_H__ �� ���ǵǾ� ���� �ʴٸ�
#define __STUDENT_H__ // --PERSON-H__ �� �����Ѵ�. #endif�� ������ �������� ������

class Student : public Person {
	string stu_id;
public:
	~Student();
	void info();
	void test();
};
#endif
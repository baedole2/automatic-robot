#pragma once	//한번 읽어가면 추가적으로 읽지 않는 기능. 빌드시간을 줄일 수 있음.
#include <iostream>

using std::string;

#ifndef __PERSON_H__ // if not define : __PERSON_H__ 가 정의되어 있지 않다면
#define __PERSON_H__ // --PERSON-H__ 를 정의한다. #endif가 나오기 전까지의 내용을

//헤더에 중괄호 없어야함
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

#endif // !__PERSON_H__ // if not define : __PERSON_H__ 가 정의되어 있지 않다면
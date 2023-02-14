#pragma once
#include <iostream>

using std::string;

#ifndef __SNACK_H__
#define __SNACK_H__

class Snack {
	static int snack_count;

	int price;
	string name;
	string made_by;
public:

	static int get_snack_count();

	Snack();

	void set_price(int price);
	void set_name(string name);
	void set_made_by(string made_by);

	int get_price();
	string get_name();
	string get_made_by();

	// 자식 클래스의 메소드를 사용하기위해 가상함수로 만듬
	virtual string get_flavor();
	virtual string get_shape();
};
#endif // !1
#pragma once
#include <iostream>
#include "Snack.h"

#ifndef __CANDY_H__
#define __CANDY_H__

class Candy : public Snack {
	string flavor = "";
public:
	Candy(string flavor, int price, string name, string made_by);
	void set_flavor(string flavor);
	string get_flavor();
};
#endif // !__CANDY_H__
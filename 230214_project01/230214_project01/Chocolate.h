#pragma once
#include "Snack.h"

#ifndef __CHOCOLATE_H__
#define __CHOCOLATE_H__

class Chocolate : public Snack {
	string shape;

public:
	Chocolate(string shape, int price, string name, string made_by);
	void set_shape(string shape);
	string get_shape();
};
#endif // !__CHOCOLATE_H__
#pragma once
#include <iostream>
#include "Person.h"

#ifndef __Instructor__
#define __Instructor__

class Instructor : public Person {
public:
	~Instructor();
	void info();
};

#endif // !__Instructor__

#pragma once
#include "System.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

#ifndef __TITLESCREEN_H__
#define __TITLESCREEN_H__

class TitleScreen {
public:
	void print_titleScreen();
	void set_title_screen(int cursorPos);
};

#endif // !__TITLESCREEN_H__

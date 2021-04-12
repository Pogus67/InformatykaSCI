#pragma once
#include <iostream>

class Szescian
{
public:
	Szescian();
	Szescian(unsigned int num1);
	~Szescian();

	void setingnum1(unsigned int newnum1);
	unsigned int pole(unsigned int num1);
	unsigned int obwod(unsigned int num1);
private:
	unsigned int num1;
};
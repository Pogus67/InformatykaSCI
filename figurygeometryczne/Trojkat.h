#pragma once
#include <iostream>

class Trojkat
{
public:
	Trojkat();
	Trojkat(unsigned int num1, unsigned int num2, unsigned int num3, unsigned int num4);
	~Trojkat();

	void setingnum1(unsigned int newnum1);
	void setingnum2(unsigned int newnum2);
	void setingnum3(unsigned int newnum3);
	void setingnum4(unsigned int newnum4);
	unsigned int obwod(unsigned int num1, unsigned int num2, unsigned int num3);
	unsigned int pole(unsigned int num1, unsigned int num4);
private:
	unsigned int num1;
	unsigned int num2;
	unsigned int num3;
	unsigned int num4;
};
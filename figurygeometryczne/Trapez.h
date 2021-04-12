#pragma once
#include <iostream>

class Trapez
{
public:
	Trapez();
	Trapez(unsigned int num1, unsigned int num2, unsigned int num3, unsigned int num4);
	~Trapez();

	void setingnum1(unsigned int newnum1);
	void setingnum2(unsigned int newnum2);
	void setingnum3(unsigned int newnum3);
	void setingnum4(unsigned int newnum4);
	unsigned int obwod(unsigned int num1, unsigned int num2, unsigned int num3);
	unsigned int pole(unsigned int num1, unsigned int num3, unsigned int num4);
private:
	int num1;
	int num2;
	int num3;
	int num4;
};
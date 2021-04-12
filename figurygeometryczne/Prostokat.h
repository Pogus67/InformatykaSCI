#pragma once
#include <iostream>

class Prostokat
{
public:
	Prostokat();
	Prostokat(unsigned int num1, unsigned int num2);
	~Prostokat();

	void setingnum(unsigned int newnum1);
	void setingnumtwo(unsigned int newnum2);
	unsigned int obwod(unsigned int num1, unsigned int num2);
	unsigned int pole(unsigned int num1, unsigned int num2);
private:
	unsigned int num1;
	unsigned int num2;

};
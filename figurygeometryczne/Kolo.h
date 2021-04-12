#pragma once
#include <iostream>

class Kolo
{
public:
	Kolo();
	Kolo(unsigned int num1);
	~Kolo();

	void setingnum(unsigned int newnum1);
	void setingnumtwo(unsigned int newnum2);
	float obwod(unsigned int num1);
	float pole(unsigned int num1);
private:
	unsigned int num1;

};
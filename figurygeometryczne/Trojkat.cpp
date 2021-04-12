#include "Trojkat.h"
#include <iostream>

Trojkat::Trojkat()
{
	this->num1 = 0;
	this->num2 = 0;
	this->num3 = 0;
	this->num4 = 0;
}

Trojkat::Trojkat(unsigned int num1, unsigned int num2, unsigned int num3, unsigned int num4)
{
	this->num1 = num1;
	this->num2 = num2;
	this->num3 = num3;
	this->num4 = num4;
} 

Trojkat::~Trojkat()
{

}
unsigned int Trojkat::obwod(unsigned int num1, unsigned int num2, unsigned int num3)
{
	unsigned int obwod;

	obwod = num1 + num2 + num3;
	std::cout << "Obwod wynosi: " << obwod << std::endl;
	return 0;
}

unsigned int Trojkat::pole(unsigned int num1, unsigned int num4)
{
	unsigned int pole;

	pole = (num1 * num4) / 2;
	std::cout << "Pole wynosi: " << pole << std::endl;
	return 0;
}
#include "Prostokat.h"
#include <iostream>

Prostokat::Prostokat()
{
	this->num1 = 0;
	this->num2 = 0;
}

Prostokat::Prostokat(unsigned int num1, unsigned int num2)
{
	this->num1 = num1;
	this->num2 = num2;
} 

Prostokat::~Prostokat()
{

}

unsigned int Prostokat::obwod(unsigned int num1, unsigned int num2)
{
	unsigned int obwod;

	obwod = num1 * 2 + num2 * 2;;
	std::cout << "Obwod wynosi: " << obwod << std::endl;
	return 0;
}

unsigned int Prostokat::pole(unsigned int num1, unsigned int num2)
{
	unsigned int pole;

	pole = num1 * num2;
	std::cout << "Pole wynosi: " << pole << std::endl;
	return 0;
}
#include "Szescian.h"
#include <iostream>

Szescian::Szescian()
{
	this->num1 = 0;
}

Szescian::Szescian(unsigned int num1)
{
	this->num1 = num1;
} 

Szescian::~Szescian()
{

}

unsigned int Szescian::obwod(unsigned int num1)
{
	unsigned int obwod;

	obwod = num1 * 12;
	std::cout << "Obwod wynosi: " << obwod << std::endl;
	return 0;
}

unsigned int Szescian::pole(unsigned int num1)
{
	unsigned int pole;

	pole = num1 * num1 * num1;
	std::cout << "Objetosc wynosi: " << pole << std::endl;
	return 0;
}
#include "Kolo.h"
#include <iostream>

Kolo::Kolo()
{
	this->num1 = 0;
}

Kolo::Kolo(unsigned int num1)
{
	this->num1 = num1;
} 

Kolo::~Kolo()
{

}

float Kolo::obwod(unsigned int num1)
{
	float obwod;

	obwod = 2 * 3.14 * num1;
	std::cout << "Obwod wynosi: " << obwod << std::endl;
	return 0;
}
float Kolo::pole(unsigned int num1)
{
	float pole;

	pole = num1 * num1 * 3.14;
	std::cout << "Pole wynosi: " << pole << std::endl;
	return 0;
}
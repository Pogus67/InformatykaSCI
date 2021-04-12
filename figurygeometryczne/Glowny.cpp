#include <iostream>
#include "Prostokat.h"
#include "Kolo.h"
#include "Trapez.h"
#include "Trojkat.h"
#include "Szescian.h"

// github - https://github.com/Pogus67/InformatykaSCI

int main()
{
	int x = 1;
	while (x = 1) {
		int wyba;
		std::cout << "|-------------------------Menu-------------------------|" << std::endl;
		std::cout << "  1.Kolo" << std::endl;
		std::cout << "  2.Prostokat" << std::endl;
		std::cout << "  3.Trapez" << std::endl;
		std::cout << "  4.Trojkat" << std::endl;
		std::cout << "  5.Szescian" << std::endl;
		std::cout << "|------------------------------------------------------|" << std::endl;

		std::cout << "Wybierz numer: ";
		std::cin >> wyba;

		if (wyba == 1)
		{
			Kolo kolowybor;
			unsigned int a;
			std::cout << "|-------------------------Kolo-------------------------|" << std::endl;
			std::cout << "Wpisz dlugosc srednicy: " << std::endl;
			std::cin >> a;

			kolowybor.obwod(a);
			kolowybor.pole(a);

			std::cout << "|------------------------------------------------------|" << std::endl;
		}
		else if (wyba == 2)
		{
			Prostokat prostokatwybor;
			unsigned int a, b;
			std::cout << "|-------------------------Prostokat-------------------------|" << std::endl;
			std::cout << "Wpisz wartosci" << std::endl;
			std::cout << "Dlugosc boku a: ";
			std::cin >> a;
			std::cout << "Dlugosc boku b: ";
			std::cin >> b;

			prostokatwybor.obwod(a, b);
			prostokatwybor.pole(a, b);

			std::cout << "|-----------------------------------------------------------|" << std::endl;
		}
		else if (wyba == 3)
		{
			Trapez trapezwybor;
			unsigned int a, b, c, d;
			std::cout << "|-------------------------Trapez-------------------------|" << std::endl;
			std::cout << "Wpisz wartosci" << std::endl;
			std::cout << "Dlugosc dolnego boku: ";
			std::cin >> a;
			std::cout << "Dlugosc bocznych bokow: ";
			std::cin >> b;
			std::cout << "Dlugosc gornego boku: ";
			std::cin >> c;
			std::cout << "Wysokosc: ";
			std::cin >> d;

			trapezwybor.obwod(a, b, c);
			trapezwybor.pole(a, c, d);

			std::cout << "|--------------------------------------------------------|" << std::endl;
		}
		else if (wyba == 4)
		{
			Trojkat trojkatwybor;
			unsigned int a, b, c, d;
			std::cout << "|-------------------------Trojkat-------------------------|" << std::endl;
			std::cout << "Wpisz wartosci" << std::endl;
			std::cout << "Dlugosc boku a: ";
			std::cin >> a;
			std::cout << "Dlugosc boku b: ";
			std::cin >> b;
			std::cout << "Dlugosc boku c: ";
			std::cin >> c;
			std::cout << "Wysokosc: ";
			std::cin >> d;

			trojkatwybor.obwod(a, b, c);
			trojkatwybor.pole(a, c, d);

			std::cout << "|---------------------------------------------------------|" << std::endl;
		}
		else if (wyba == 5)
		{
			Szescian szescianwybor;
			unsigned int a;
			std::cout << "|-------------------------Szescian-------------------------|" << std::endl;
			std::cout << "Wpisz wartosci" << std::endl;
			std::cout << "Dlugosc boku a: ";
			std::cin >> a;

			szescianwybor.obwod(a);
			szescianwybor.pole(a);

			std::cout << "|----------------------------------------------------------|" << std::endl;
		}
		else if (wyba > 5)
		{
			std::cout << "Zly numer!" << std::endl;
		}
		char pytanie;
		std::cout << "Chcesz kontynnuowac? (y/n): ";
		std::cin >> pytanie;
		if (pytanie == 'y')
		{
			x = 1;
		}
		else
		{
			return false;
		}

	}
}
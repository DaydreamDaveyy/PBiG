#include <iostream>
#include "menu_glowne.h"
#include "tworzenie_postaci.h"
#include "Bohater.h"
#include <fstream>

void menu_glowne()
{
	int wybor_menu = 0;
	std::string nazwa_pliku;

	std::cout << "=======PRZEZ B�OTO I GRUZY=======" << std::endl;
	std::cout << "Witaj w grze Przez B�oto i Gruzy!" << std::endl;

	do {
		std::cout << "Wybierz jedn� z opcji poni�ej aby kontynuowa�:" << std::endl;
		std::cout << "[1] Rozpocznij przygod�" << std::endl;
		std::cout << "[2] Za�aduj dru�yn�" << std::endl;
		std::cout << "[3] Stw�rz now� dru�yn�" << std::endl;
		std::cout << "[4] O grze" << std::endl;
		std::cout << "[5] Wyjd� z gry" << std::endl << std::endl;

		std::cout << "Tw�j wyb�r: ";
		std::cin >> wybor_menu;

		switch (wybor_menu)
		{
			case 1:
			case 2:
			{
				system("cls");

				std::ifstream wczytajDruzyne;

				std::cout << "Podaj nazw� pliku, w kt�rym zapisana jest dru�yna, kt�r� chcesz za�adowa�." << std::endl;
				std::cout << "Pami�taj, �e nazwa musi ko�czy� si� konc�wk� '.txt'! " << std::endl << std::endl;
				std::cout << "Nazwa pliku zapisu dru�yny: " << std::endl;
				std::cin >> nazwa_pliku;
				std::cout << std::endl;

				wczytajDruzyne.open(nazwa_pliku);
				if (!wczytajDruzyne) {
					std::cout << "Nie znaleziono pliku. Upewnij si�, �e plik istnieje i wpisujesz go poprawnie, a nast�pnie spr�buj jeszcze raz." << std::endl;
					std::cout << "Wci�nij klawisz Enter aby kontynuowa�." << std::endl;
					std::cin.ignore(2); //Warto�� 2 dla cin.ignore() - prawdopodobnie break "wciska enter" za u�ytkownika, wi�c funkcja musi kontynuowa� program dopiero za drugim klikni�ciem.
					system("cls");
				}
				else {
					
				}

				break;
			}
			case 3:
			{
				system("cls");
				tworzenie_postaci();
				break;
			}
			case 4:
			{
				system("cls");
				std::cout << "O �WIECIE GRY" << std::endl;
				std::cout << "=============" << std::endl;
				std::cout << "Gra Przez B�oto i Gruzy ma miejsce w mrocznym Starym �wiecie, uniwersum znanej gry fabularnej Warhammer Fantasy Roleplay." << std::endl;
				std::cout << "Graczowi przyjdzie mierzy� si� z bandytami, nieumar�ymi, demonami, intrygami, kultystami, staro�ytnymi istotami i nie tylko." << std::endl;
				std::cout << "Z uwagi na poruszane w�tki, gra przeznaczona jest dla graczy w wieku +16 i zawiera takie elementy jak:" << std::endl;
				std::cout << "    -seks" << std::endl;
				std::cout << "    -przekle�stwa" << std::endl;
				std::cout << "    -przemoc psychiczna i fizyczna" << std::endl;
				std::cout << "    -okultyzm" << std::endl << std::endl;
				std::cout << "O SYSTEMIE" << std::endl;
				std::cout << "==========" << std::endl;
				std::cout << "System rozgrywki oparty jest o zasady 2. edycji Warhammer Fantasy Roleplay." << std::endl;
				std::cout << "Do rozstrzygania test�w u�ywa si� kostek dziesi�cio�ciennych (k10) i stu�ciennych (k100)." << std::endl << std::endl;
				std::cout << "O AUTORZE" << std::endl;
				std::cout << "=========" << std::endl;
				std::cout << "Modification Studios, 2021-2022" << std::endl;
				std::cout << "Dawid Nowak - programowanie, fabu�a" << std::endl;
				std::cout << "=============================================================================================================================" << std::endl << std::endl;
				break;
			}
			case 5:
			{
				exit(0);
				break;
			}

			default:
			{
				system("cls");
				std::cout << "Niepoprawny numer opcji!" << std::endl << std::endl;
				break;
			}
		}
	} while (wybor_menu > 1);
}
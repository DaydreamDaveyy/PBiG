#include <iostream>
#include "menu_glowne.h"
#include "tworzenie_postaci.h"
#include "Bohater.h"
#include <fstream>

void menu_glowne()
{
	int wybor_menu = 0;
	std::string nazwa_pliku;

	std::cout << "=======PRZEZ B£OTO I GRUZY=======" << std::endl;
	std::cout << "Witaj w grze Przez B³oto i Gruzy!" << std::endl;

	do {
		std::cout << "Wybierz jedn¹ z opcji poni¿ej aby kontynuowaæ:" << std::endl;
		std::cout << "[1] Rozpocznij przygodê" << std::endl;
		std::cout << "[2] Za³aduj dru¿ynê" << std::endl;
		std::cout << "[3] Stwórz now¹ dru¿ynê" << std::endl;
		std::cout << "[4] O grze" << std::endl;
		std::cout << "[5] WyjdŸ z gry" << std::endl << std::endl;

		std::cout << "Twój wybór: ";
		std::cin >> wybor_menu;

		switch (wybor_menu)
		{
			case 1:
			case 2:
			{
				system("cls");

				std::ifstream wczytajDruzyne;

				std::cout << "Podaj nazwê pliku, w którym zapisana jest dru¿yna, któr¹ chcesz za³adowaæ." << std::endl;
				std::cout << "Pamiêtaj, ¿e nazwa musi koñczyæ siê koncówk¹ '.txt'! " << std::endl << std::endl;
				std::cout << "Nazwa pliku zapisu dru¿yny: " << std::endl;
				std::cin >> nazwa_pliku;
				std::cout << std::endl;

				wczytajDruzyne.open(nazwa_pliku);
				if (!wczytajDruzyne) {
					std::cout << "Nie znaleziono pliku. Upewnij siê, ¿e plik istnieje i wpisujesz go poprawnie, a nastêpnie spróbuj jeszcze raz." << std::endl;
					std::cout << "Wciœnij klawisz Enter aby kontynuowaæ." << std::endl;
					std::cin.ignore(2); //Wartoœæ 2 dla cin.ignore() - prawdopodobnie break "wciska enter" za u¿ytkownika, wiêc funkcja musi kontynuowaæ program dopiero za drugim klikniêciem.
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
				std::cout << "O ŒWIECIE GRY" << std::endl;
				std::cout << "=============" << std::endl;
				std::cout << "Gra Przez B³oto i Gruzy ma miejsce w mrocznym Starym Œwiecie, uniwersum znanej gry fabularnej Warhammer Fantasy Roleplay." << std::endl;
				std::cout << "Graczowi przyjdzie mierzyæ siê z bandytami, nieumar³ymi, demonami, intrygami, kultystami, staro¿ytnymi istotami i nie tylko." << std::endl;
				std::cout << "Z uwagi na poruszane w¹tki, gra przeznaczona jest dla graczy w wieku +16 i zawiera takie elementy jak:" << std::endl;
				std::cout << "    -seks" << std::endl;
				std::cout << "    -przekleñstwa" << std::endl;
				std::cout << "    -przemoc psychiczna i fizyczna" << std::endl;
				std::cout << "    -okultyzm" << std::endl << std::endl;
				std::cout << "O SYSTEMIE" << std::endl;
				std::cout << "==========" << std::endl;
				std::cout << "System rozgrywki oparty jest o zasady 2. edycji Warhammer Fantasy Roleplay." << std::endl;
				std::cout << "Do rozstrzygania testów u¿ywa siê kostek dziesiêcioœciennych (k10) i stuœciennych (k100)." << std::endl << std::endl;
				std::cout << "O AUTORZE" << std::endl;
				std::cout << "=========" << std::endl;
				std::cout << "Modification Studios, 2021-2022" << std::endl;
				std::cout << "Dawid Nowak - programowanie, fabu³a" << std::endl;
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
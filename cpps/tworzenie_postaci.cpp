#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
#include "tworzenie_postaci.h"

std::string czlowiek_profesja(int k100);
int czlowiek_wiek(int k100);
int czlowiek_waga(int k100);
std::string czlowiek_oczy(int k100);
std::string czlowiek_wlosy(int k100);
int czlowiek_rodzenstwo(int k100);
std::string czlowiek_miejsce_urodzenia_1(int k100);
std::string czlowiek_miejsce_urodzenia_2(int k100);
void czlowiek_cechy();
std::string elf_profesja(int k100);
int elf_wiek(int k100);
int elf_waga(int k100);
std::string elf_oczy(int k100);
std::string elf_wlosy(int k100);
int elf_rodzenstwo(int k100);
std::string elf_miejsce_urodzenia(int k100);
void elf_cechy();
std::string krasnolud_profesja(int k100);
int krasnolud_wiek(int k100);
int krasnolud_waga(int k100);
std::string krasnolud_oczy(int k100);
std::string krasnolud_wlosy(int k100);
int krasnolud_rodzenstwo(int k100);
std::string krasnolud_miejsce_urodzenia(int k100);
void krasnolud_cechy();
std::string niziolek_profesja(int k100);
int niziolek_wiek(int k100);
int niziolek_waga(int k100);
std::string niziolek_oczy(int k100);
std::string niziolek_wlosy(int k100);
int niziolek_rodzenstwo(int k100);
void niziolek_cechy();
std::string znak_gwiezdny(int k100);
std::string znaki_szczegolne(int k100);

int wybor_menu = 0, liczebnosc_druzyny = 0, tmp_numer = 0, tmp_id_postaci = 1, tmp_wiek = 0, tmp_wzrost = 0, tmp_waga = 0, tmp_rodzenstwo = 0, tmp_ww = 0, tmp_us = 0, tmp_k = 0, tmp_odp = 0, tmp_zr = 0, tmp_int = 0, tmp_sw = 0, tmp_ogl = 0, tmp_a = 0, tmp_zyw = 0, tmp_s = 0, tmp_wyt = 0, tmp_sz = 0, tmp_mag = 0, tmp_po = 0, tmp_pp = 0, tmp_pd_obec = 0, tmp_pd_raz = 0;
std::string tmp_plec, tmp_imie, tmp_rasa, tmp_profesja, nazwa_pliku, tmp_kolor_oczu, tmp_kolor_wlosow, tmp_znak_gwiezdny, tmp_miejsce_ur, czesc1, czesc2, tmp_znaki_szczegolne, sprawdzacz;

void tworzenie_postaci()
{
	std::cout << "=======TWORZENIE NOWEJ DRUŻYNY=======" << std::endl;
	std::cout << "Przed rozpoczęciem przygody stworzysz bohatera lub drużynę bohaterów, którzy będą Twoimi oczami i uszami w tym świecie." << std::endl;
	std::cout << "Różni bohaterowie rozpoczną przygodę z różnymi umiejętnościami, atrybutami, ekwipunkiem i, co najważniejsze, ścieżkami rozwoju." << std::endl << std::endl;

	//TWORZENIE PLIKU ZAPISU DRUŻYNY
	std::cout << "Zanim przejdziemy do tworzenia postaci, nadaj nazwę pliku, w którym zostaną one zapisane." << std::endl;
	std::cout << "Pamiętaj, że nazwa musi kończyć się końcówką '.txt'!" << std::endl;
	std::cout << "Przykład: MojaDruzyna.txt" << std::endl << std::endl;
	std::cout << "Podaj nazwę pliku zapisu: ";
	std::cin >> nazwa_pliku;

	std::ofstream plik_druzyny(nazwa_pliku);
	system("cls");

	//WYBRANIE LICZEBNOŚCI DRUŻYNY
	do {
		std::cout << "Wybierz liczebność początkowej drużyny: " << std::endl;
		std::cout << "[1] Samotny straceniec" << std::endl;
		std::cout << "[2] Dwójka wyrzutków" << std::endl;
		std::cout << "[3] Trójka głupców" << std::endl;
		std::cout << "[4] Czworo skazanych" << std::endl;
		std::cout << "[5] Niech los zadecyduje" << std::endl << std::endl;
	
		std::cout << "Twój wybór: ";
		std::cin >> wybor_menu;
		std::cout << std::endl;

		switch (wybor_menu)
		{
			case 1:
			{
				liczebnosc_druzyny = 1;
				break;
			}

			case 2:
			{
				liczebnosc_druzyny = 2;
				break;
			}

			case 3:
			{
				liczebnosc_druzyny = 3;
				break;
			}

			case 4:
			{
				liczebnosc_druzyny = 4;
				break;
			}

			case 5:
			{
				liczebnosc_druzyny = rand() % 3 + 1;
				std::cout << std::endl << "Wylosowana liczebność drużyny: " << liczebnosc_druzyny << "." << std::endl;
				std::cout << "Wciśnij klawisz Enter aby kontynuować." << std::endl;
				std::cin.ignore(2); //Wartość 2 dla cin.ignore() - prawdopodobnie break "wciska enter" za użytkownika, więc funkcja musi kontynuować program dopiero za drugim kliknięciem.
				break;
			}

			default:
			{
				system("cls");
				std::cout << "Niepoprawny wybór!" << std::endl;
				break;
			}
		}
	} while(wybor_menu < 1 || wybor_menu > 5);
	
	system("cls");
	
	for (int i = 0; i < liczebnosc_druzyny; i++)
	{
		if (liczebnosc_druzyny == 1) std::cout << "Stwórz swojego bohatera!" << std::endl << std::endl;
		else std::cout << "Stwórz postać nr " << i + 1 << "!" << std::endl << std::endl;

		//WYBRANIE PŁCI POSTACI
		do {
			std::cout << "Wybierz płeć postaci:" << std::endl;
			std::cout << "[1] Kobieta" << std::endl;
			std::cout << "[2] Mężczyzna" << std::endl;
			std::cout << "[3] Podążaj za ślepym trafem" << std::endl << std::endl;
			
			std::cout << "Twój wybór: ";
			std::cin >> wybor_menu;
			std::cout << std::endl;
			
			switch (wybor_menu)
			{
				case 1:
				{
					tmp_plec = "Kobieta";
					break;
				}
				case 2:
				{
					tmp_plec = "Mężczyzna";
					break;
				}
				case 3:
				{
					tmp_numer = rand() % 2;
					if (tmp_numer == 0) tmp_plec = "Kobieta";
					else tmp_plec = "Mężczyzna";
					std::cout << std::endl << "Wylosowana płeć: " << tmp_plec << "." << std::endl;
					std::cout << "Wciśnij klawisz Enter aby kontynuować." << std::endl;
					std::cin.ignore(2); //Wartość 2 dla cin.ignore() - prawdopodobnie break "wciska enter" za użytkownika, więc funkcja musi kontynuować program dopiero za drugim kliknięciem.
					break;
				}
				default:
				{
					system("cls");
					std::cout << "Niepoprawny wybór!" << std::endl;
					break;
				}
			}
		} while (wybor_menu > 3 || wybor_menu < 1);

		system("cls");

		//WYBRANIE RASY POSTACI
		do {
			std::cout << "Wybierz rasę postaci:" << std::endl;
			std::cout << "[1] Człowiek" << std::endl;
			std::cout << "[2] Elf" << std::endl;
			std::cout << "[3] Krasnolud" << std::endl;
			std::cout << "[4] Niziołek" << std::endl;
			std::cout << "[5] Zdaj się na szczęście" << std::endl << std::endl;
			
			std::cout << "Twój wybór: ";
			std::cin >> wybor_menu;
			std::cout << std::endl;
			
			switch (wybor_menu)
			{
				case 1:
				{
					tmp_rasa = "Człowiek";
					break;
				}
				case 2:
				{
					tmp_rasa = "Elf";
					break;
				}
				case 3:
				{
					tmp_rasa = "Krasnolud";
					break;
				}
				case 4:
				{
					tmp_rasa = "Niziołek";
					break;
				}
				case 5:
				{
					tmp_numer = rand() % 4 + 1;
					switch (tmp_numer) 
					{
						case 1:
						{
							tmp_rasa = "Człowiek";
							break;
						}
						case 2:
						{
							tmp_rasa = "Elf";
							break;
						}
						case 3:
						{
							tmp_rasa = "Krasnolud";
							break;
						}
						case 4:
						{
							tmp_rasa = "Niziołek";
							break;
						}
					}
					std::cout << std::endl << "Wylosowana rasa: " << tmp_rasa << "." << std::endl;
					std::cout << "Wciśnij klawisz Enter aby kontynuować." << std::endl;
					std::cin.ignore(2); //Wartość 2 dla cin.ignore() - prawdopodobnie break "wciska enter" za użytkownika, więc funkcja musi kontynuować program dopiero za drugim kliknięciem.
					break;
				}
				default:
				{
					system("cls");
					std::cout << "Niepoprawny wybór!" << std::endl;
					break;
				}
			}

		} while (wybor_menu > 5 || wybor_menu < 1);

		system("cls");

		//WYLOSOWANIE PROFESJI POSTACI
		tmp_numer = rand() % 100 + 1;
		if (tmp_rasa == "Człowiek") {
			tmp_profesja = czlowiek_profesja(tmp_numer);
		}
		else if (tmp_rasa == "Elf") {
			tmp_profesja = elf_profesja(tmp_numer);
		}
		else if (tmp_rasa == "Krasnolud") {
			tmp_profesja = krasnolud_profesja(tmp_numer);
		}
		else {
			tmp_profesja = niziolek_profesja(tmp_numer);
		}

		std::cout << "Wylosowana profesja: " << tmp_profesja << "." << std::endl << std::endl;
		std::cout << "Wciśnij klawisz Enter aby kontynuować." << std::endl;
		std::cin.ignore(2); //Wartość 2 dla cin.ignore() - prawdopodobnie coś "wciska enter" za użytkownika, więc funkcja musi kontynuować program dopiero za drugim kliknięciem.

		system("cls");

		//NADANIE IMIENIA POSTACI
		std::cout << "Nadaj imię swojej postaci:" << std::endl;
		std::cin >> tmp_imie;

		system("cls");

		//LOSOWANIE OPISU BOHATERA
		// 
		//WIEK
		//
		tmp_numer = rand() % 100 + 1;
		if (tmp_rasa == "Człowiek") {
			tmp_wiek = czlowiek_wiek(tmp_numer);
		}
		else if (tmp_rasa == "Elf") {
			tmp_wiek = elf_wiek(tmp_numer);
		}
		else if (tmp_rasa == "Krasnolud") {
			tmp_wiek = krasnolud_wiek(tmp_numer);
		}
		else {
			tmp_wiek = niziolek_wiek(tmp_numer);
		}
		//
		//WZROST
		//
		tmp_numer = rand() % 19+2;
		if (tmp_rasa == "Człowiek") {
			if (tmp_plec == "Mężczyzna") tmp_wzrost = 160 + tmp_numer;
			else tmp_wzrost = 150 + tmp_numer;
		}
		else if (tmp_rasa == "Elf") {
			if (tmp_plec == "Mężczyzna") tmp_wzrost = 170 + tmp_numer;
			else tmp_wzrost = 160 + tmp_numer;
		}
		else if (tmp_rasa == "Krasnolud") {
			if (tmp_plec == "Mężczyzna") tmp_wzrost = 145 + tmp_numer;
			else tmp_wzrost = 130 + tmp_numer;
		}
		else {
			if (tmp_plec == "Mężczyzna") tmp_wzrost = 110 + tmp_numer;
			else tmp_wzrost = 100 + tmp_numer;
		}
		//
		//WAGA
		//
		tmp_numer = rand() % 100 + 1;
		if (tmp_rasa == "Człowiek") {
			tmp_waga = czlowiek_waga(tmp_numer);
		}
		else if (tmp_rasa == "Elf") {
			tmp_waga = elf_waga(tmp_numer);
		}
		else if (tmp_rasa == "Krasnolud") {
			tmp_waga = krasnolud_waga(tmp_numer);
		}
		else {
			tmp_waga = niziolek_waga(tmp_numer);
		}
		//
		//KOLOR OCZU
		//
		tmp_numer = rand() % 10 + 1;
		if (tmp_rasa == "Człowiek") {
			tmp_kolor_oczu = czlowiek_oczy(tmp_numer);
		}
		else if (tmp_rasa == "Elf") {
			tmp_kolor_oczu = elf_oczy(tmp_numer);
		}
		else if (tmp_rasa == "Krasnolud") {
			tmp_kolor_oczu = krasnolud_oczy(tmp_numer);
		}
		else {
			tmp_kolor_oczu = niziolek_oczy(tmp_numer);
		}
		//
		//KOLOR WŁOSÓW
		//
		tmp_numer = rand() % 10 + 1;
		if (tmp_rasa == "Człowiek") {
			tmp_kolor_wlosow = czlowiek_wlosy(tmp_numer);
		}
		else if (tmp_rasa == "Elf") {
			tmp_kolor_wlosow = elf_wlosy(tmp_numer);
		}
		else if (tmp_rasa == "Krasnolud") {
			tmp_kolor_wlosow = krasnolud_wlosy(tmp_numer);
		}
		else {
			tmp_kolor_wlosow = niziolek_wlosy(tmp_numer);
		}
		//
		//ZNAK GWIEZDNY
		//
		tmp_numer = rand() % 100 + 1;
		tmp_znak_gwiezdny = znak_gwiezdny(tmp_numer);
		//
		//LICZBA RODZEŃSTWA
		//
		tmp_numer = rand() % 10 + 1;
		if (tmp_rasa == "Człowiek") {
			tmp_rodzenstwo = czlowiek_rodzenstwo(tmp_numer);
		}
		else if (tmp_rasa == "Elf") {
			tmp_rodzenstwo = elf_rodzenstwo(tmp_numer);
		}
		else if (tmp_rasa == "Krasnolud") {
			tmp_rodzenstwo = krasnolud_rodzenstwo(tmp_numer);
		}
		else {
			tmp_rodzenstwo = niziolek_rodzenstwo(tmp_numer);
		}
		//
		//MIEJSCE URODZENIA
		//
		if (tmp_profesja == "Berserker z Norski") tmp_miejsce_ur = "Norska";
		else if (tmp_profesja == "Kozak kislevski") tmp_miejsce_ur = "Kislev";
		else if (tmp_profesja == "Szermierz estalijski") tmp_miejsce_ur = "Estalia";
		else {
			if (tmp_rasa == "Człowiek") {
				tmp_numer = rand() % 10 + 1;
				czesc1 = czlowiek_miejsce_urodzenia_1(tmp_numer);
				tmp_numer = rand() % 10 + 1;
				czesc2 = czlowiek_miejsce_urodzenia_2(tmp_numer);
				tmp_miejsce_ur = czesc1 + ", " + czesc2;
			}
			else if (tmp_rasa == "Elf") {
				tmp_numer = rand() % 100 + 1;
				tmp_miejsce_ur = elf_miejsce_urodzenia(tmp_numer);
			}
			else if (tmp_rasa == "Krasnolud") {
				tmp_numer = rand() % 100 + 1;
				if (tmp_numer <= 30) {
					tmp_numer = rand() % 10 + 1;
					czesc1 = czlowiek_miejsce_urodzenia_1(tmp_numer);
					tmp_numer = rand() % 10 + 1;
					czesc2 = czlowiek_miejsce_urodzenia_2(tmp_numer);
					tmp_miejsce_ur = czesc1 + ", " + czesc2;
				}
				else tmp_miejsce_ur = krasnolud_miejsce_urodzenia(tmp_numer);
			}
			else {
				tmp_numer = rand() % 100 + 1;
				if (tmp_numer >= 51) {
					tmp_numer = rand() % 10 + 1;
					czesc1 = czlowiek_miejsce_urodzenia_1(tmp_numer);
					tmp_numer = rand() % 10 + 1;
					czesc2 = czlowiek_miejsce_urodzenia_2(tmp_numer);
					tmp_miejsce_ur = czesc1 + ", " + czesc2;
				}
				else tmp_miejsce_ur = "Kraina Zgromadzenia";
			}
		}
		//
		//ZNAKI SZCZEGÓLNE
		//
		if (tmp_rasa != "Elf") {
			tmp_numer = rand() % 100 + 1;
			tmp_znaki_szczegolne = znaki_szczegolne(tmp_numer);
			if (tmp_znaki_szczegolne == "Oczy różnego koloru") {
				if (tmp_rasa == "Człowiek") {
					do {
						tmp_numer = rand() % 10 + 1;
						sprawdzacz = czlowiek_oczy(tmp_numer);
					} while (sprawdzacz == tmp_kolor_oczu);
					tmp_kolor_oczu = tmp_kolor_oczu + "|" + sprawdzacz;
				}
				if (tmp_rasa == "Krasnolud") {
					do {
						tmp_numer = rand() % 10 + 1;
						sprawdzacz = krasnolud_oczy(tmp_numer);
					} while (sprawdzacz == tmp_kolor_oczu);
					tmp_kolor_oczu = tmp_kolor_oczu + "|" + sprawdzacz;
				}
				if (tmp_rasa == "Niziołek") {
					do {
						tmp_numer = rand() % 10 + 1;
						sprawdzacz = niziolek_oczy(tmp_numer);
					} while (sprawdzacz == tmp_kolor_oczu);
					tmp_kolor_oczu = tmp_kolor_oczu + "|" + sprawdzacz;
				}
			}
		}
		else tmp_znaki_szczegolne = "Brak";

		//LOSOWANIE CECH
		if (tmp_rasa == "Człowiek") czlowiek_cechy();
		else if (tmp_rasa == "Elf") elf_cechy();
		else if (tmp_rasa == "Krasnolud") krasnolud_cechy();
		else niziolek_cechy();

		//PRZEPISANIE POSTACI NA KARTĘ DRUŻYNY
		plik_druzyny << tmp_id_postaci << "/" << tmp_imie << "/" << tmp_rasa << "/" << tmp_profesja << "/" << tmp_plec << "/" << tmp_wiek << "/" << tmp_wzrost << "/" << tmp_waga << "/" << tmp_kolor_oczu << "/" << tmp_kolor_wlosow << "/" << tmp_znak_gwiezdny << "/" << tmp_rodzenstwo << "/" << tmp_miejsce_ur << "/" << tmp_znaki_szczegolne << "/" << tmp_ww << "/" << tmp_us << "/" << tmp_k << "/" << tmp_odp << "/" << tmp_zr << "/" << tmp_int << "/" << tmp_sw << "/" << tmp_ogl << "/" << tmp_a << "/" << tmp_zyw << "/" << tmp_s << "/" << tmp_wyt << "/" << tmp_sz << "/" << tmp_mag << "/" << tmp_po << "/" << tmp_pp << "/" << tmp_pd_obec << "/" << tmp_pd_raz << std::endl;
		tmp_id_postaci++;

		//PRZEDSTAWIENIE POSTACI
		std::cout << "PODSUMOWANIE PODSTAWOWYCH INFORMACJI" << std::endl;
		std::cout << "====================================" << std::endl << std::endl;

		if (liczebnosc_druzyny == 1 && tmp_plec == "Mężczyzna") {
			std::cout << tmp_imie << ", " << tmp_rasa << ", to dawny " << tmp_profesja << "." << std::endl;
			std::cout << "Teraz jednak postanowił wyruszyć na szlak przygody!" << std::endl << std::endl;
		}
		else if (liczebnosc_druzyny == 1) {
			std::cout << tmp_imie << ", " << tmp_rasa << ", dawna " << tmp_profesja << "." << std::endl;
			std::cout << "Teraz jednak postanowiła wyruszyć na szlak przygody!" << std::endl << std::endl;
		}
		else if (tmp_plec == "Mężczyzna") {
			std::cout << tmp_imie << ", " << tmp_rasa << ", to dawny " << tmp_profesja << "." << std::endl;
			std::cout << "Teraz jednak postanowił dołączyć do drużyny poszukiwaczy przygód!" << std::endl << std::endl;
		}
		else {
			std::cout << tmp_imie << ", " << tmp_rasa << ", dawna " << tmp_profesja << "." << std::endl;
			std::cout << "Teraz jednak postanowiła dołączyć do drużyny poszukiwaczy przygód!" << std::endl << std::endl;
		}

		std::cout << "OPIS I PRZESZŁOŚĆ BOHATERA" << std::endl;
		std::cout << "==========================" << std::endl << std::endl;

		std::cout << "Płeć: " << tmp_plec << std::endl;
		std::cout << "Wiek: " << tmp_wiek << " lat" << std::endl;
		std::cout << "Wzrost: " << tmp_wzrost << " cm" << std::endl;
		std::cout << "Waga: " << tmp_waga << " kg" << std::endl;
		std::cout << "Kolor oczu: " << tmp_kolor_oczu << std::endl;
		std::cout << "Kolor włosów: " << tmp_kolor_wlosow << std::endl;
		std::cout << "Znak gwiezdny: " << tmp_znak_gwiezdny << std::endl;
		std::cout << "Rodzeństwo: " << tmp_rodzenstwo << std::endl;
		std::cout << "Miejsce urodzenia: " << tmp_miejsce_ur << std::endl;
		std::cout << "Znaki szczególne: " << tmp_znaki_szczegolne << std::endl << std::endl;

		std::cout << "CECHY" << std::endl;
		std::cout << "=====" << std::endl << std::endl;

		std::cout << "Cechy główne:" << std::endl;
		std::cout << "Walka wręcz: " << tmp_ww << std::endl;
		std::cout << "Umiejętności strzeleckie: " << tmp_us << std::endl;
		std::cout << "Krzepa: " << tmp_k << std::endl;
		std::cout << "Odporność: " << tmp_odp << std::endl;
		std::cout << "Zręczność: " << tmp_zr << std::endl;
		std::cout << "Inteligencja: " << tmp_int << std::endl;
		std::cout << "Siła woli: " << tmp_sw << std::endl;
		std::cout << "Ogłada: " << tmp_ogl << std::endl << std::endl;

		std::cout << "Cechy drugorzędne:" << std::endl;
		std::cout << "Ataki: " << tmp_a << std::endl;
		std::cout << "Żywotność: " << tmp_zyw << std::endl;
		std::cout << "Siła: " << tmp_s << std::endl;
		std::cout << "Wytrzymałość: " << tmp_wyt << std::endl;
		std::cout << "Szybkość: " << tmp_sz << std::endl;
		std::cout << "Magia: " << tmp_mag << std::endl;
		std::cout << "Punkty obłędu: " << tmp_po << std::endl;
		std::cout << "Punkty Przeznaczenia: " << tmp_pp << std::endl;
		
		std::cout << "Wciśnij klawisz Enter aby kontynuować.";
		std::cin.ignore(2); //Wartość 2 dla cin.ignore() - prawdopodobnie coś "wciska enter" za użytkownika, więc funkcja musi kontynuować program dopiero za drugim kliknięciem.

		system("cls");
	}

	std::cout << "Drużyna została utworzona!" << std::endl;
	std::cout << "Zostaniesz teraz przeniesiony do menu głównego, skąd możesz zacząć swoją pierwszą przygodę!" << std::endl;
	std::cout << "Pamiętaj, aby najpierw załadować drużynę!" << std::endl << std::endl;
	std::cout << "Wciśnij klawisz Enter aby kontynować." << std::endl;
	std::cin.ignore(2); //Wartość 2 dla cin.ignore() - prawdopodobnie coś "wciska enter" za użytkownika, więc funkcja musi kontynuować program dopiero za drugim kliknięciem.

	system("cls");
}

std::string czlowiek_profesja(int k100) {
	switch(k100) {
		case 1:
		case 2:
			return "Akolita";
			break;
		case 3:
		case 4:
			return "Banita";
			break;
		case 5:
			return "Berserker z Norski";
			break;
		case 6:
		case 7:
			return "Chłop";
			break;
		case 8:
		case 9:
			return "Ciura obozowa";
			break;
		case 10:
		case 11:
			return "Cyrkowiec";
			break;
		case 12:
			return "Cyrulik";
			break;
		case 13:
		case 14:
			return "Fanatyk";
			break;
		case 15:
		case 16:
			return "Flisak";
			break;
		case 17:
		case 18:
			return "Giermek";
			break;
		case 19:
		case 20:
			return "Gladiator";
			break;
		case 21:
		case 22:
			return "Górnik";
			break;
		case 23:
			return "Guślarz";
			break;
		case 24:
		case 25:
			return "Hiena cmentarna";
			break;
		case 26:
		case 27:
			return "Kanciarz";
			break;
		case 28:
			return "Kozak kislevski";
			break;
		case 29:
		case 30:
			return "Leśnik";
			break;
		case 31:
		case 32:
			return "Łowca";
			break;
		case 33:
		case 34:
			return "Łowca nagród";
			break;
		case 35:
		case 36:
			return "Mieszczanin";
			break;
		case 37:
		case 38:
			return "Mytnik";
			break;
		case 39:
		case 40:
			return "Najemnik";
			break;
		case 41:
		case 42:
			return "Ochotnik";
			break;
		case 43:
		case 44:
			return "Ochroniarz";
			break;
		case 45:
		case 46:
			return "Oprych";
			break;
		case 47:
		case 48:
			return "Paź";
			break;
		case 49:
		case 50:
			return "Podżegacz";
			break;
		case 51:
		case 52:
			return "Porywacz zwłok";
			break;
		case 53:
		case 54:
			return "Posłaniec";
			break;
		case 55:
		case 56:
			return "Przemytnik";
			break;
		case 57:
		case 58:
			return "Przepatrywacz";
			break;
		case 59:
			return "Przewoźnik";
			break;
		case 60:
		case 61:
			return "Rybak";
			break;
		case 62:
		case 63:
			return "Rzemieślnik";
			break;
		case 64:
		case 65:
			return "Rzezimieszek";
			break;
		case 66:
		case 67:
			return "Skryba";
			break;
		case 68:
		case 69:
			return "Sługa";
			break;
		case 70:
		case 71:
			return "Strażnik";
			break;
		case 72:
		case 73:
			return "Strażnik dróg";
			break;
		case 74:
			return "Strażnik więzienny";
			break;
		case 75:
		case 76:
			return "Szczurołap";
			break;
		case 77:
			return "Szermierz estalijski";
			break;
		case 78:
		case 79:
			return "Szlachcic";
			break;
		case 80:
		case 81:
			return "Śmieciarz";
			break;
		case 82:
		case 83:
			return "Uczeń czarodzieja";
			break;
		case 84:
		case 85:
			return "Węglarz";
			break;
		case 86:
		case 87:
			return "Włóczykij";
			break;
		case 88:
		case 89:
			return "Woźnica";
			break;
		case 90:
			return "Zarządca";
			break;
		case 91:
		case 92:
			return "Złodziej";
			break;
		case 93:
		case 94:
			return "Żak";
			break;
		case 95:
		case 96:
			return "Żeglarz";
			break;
		case 97:
		case 98:
			return "Żołnierz";
			break;
		case 99:
		case 100:
			return "Żołnierz okrętowy";
			break;
		default:
			return "Banita";
			break;
	}
}

std::string elf_profesja(int k100) {
	switch (k100) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return "Banita";
			break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return "Cyrkowiec";
			break;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
			return "Kanciarz";
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
			return "Łowca";
			break;
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			return "Najemnik";
			break;
		case 30:
		case 31:
			return "Paź";
			break;
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
			return "Posłaniec";
			break;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return "Przepatrywacz";
			break;
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
			return "Rzecznik rodu";
			break;
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
			return "Rzemieślnik";
			break;
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
			return "Skryba";
			break;
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
			return "Uczeń czarodzieja";
			break;
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
			return "Włóczykij";
			break;
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
			return "Wojownik klanowy";
			break;
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return "Złodziej";
			break;
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
			return "Żak";
			break;
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
			return "Żeglarz";
			break;
		default:
			return "Banita";
			break;
	}
}

std::string krasnolud_profesja(int k100) {
	switch (k100) {
		case 1:
		case 2:
		case 3:
			return "Banita";
			break;
		case 4:
		case 5:
		case 6:
			return "Cyrkowiec";
			break;
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return "Gladiator";
			break;
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
			return "Goniec";
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return "Górnik";
			break;
		case 23:
		case 24:
		case 25:
			return "Hiena cmentarna";
			break;
		case 26:
		case 27:
		case 28:
		case 29:
			return "Łowca";
			break;
		case 30:
		case 31:
		case 32:
		case 33:
			return "Mieszczanin";
			break;
		case 34:
		case 35:
		case 36:
			return "Mytnik";
			break;
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
			return "Najemnik";
			break;
		case 43:
		case 44:
		case 45:
		case 46:
			return "Ochotnik";
			break;
		case 47:
		case 48:
		case 49:
		case 50:
			return "Ochroniarz";
			break;
		case 51:
		case 52:
			return "Podżegacz";
			break;
		case 53:
		case 54:
		case 55:
			return "Przemytnik";
			break;
		case 56:
		case 57:
		case 58:
		case 59:
			return "Rzemieślnik";
			break;
		case 60:
		case 61:
		case 62:
		case 63:
			return "Rzezimieszek";
			break;
		case 64:
		case 65:
			return "Skryba";
			break;
		case 66:
		case 67:
			return "Sługa";
			break;
		case 68:
		case 69:
			return "Strażnik";
			break;
		case 70:
		case 71:
		case 72:
		case 73:
			return "Strażnik więzienny";
			break;
		case 74:
		case 75:
		case 76:
		case 77:
			return "Szczurołap";
			break;
		case 78:
		case 79:
			return "Szlachcic";
			break;
		case 80:
		case 81:
		case 82:
		case 83:
			return "Tarczownik";
			break;
		case 84:
		case 85:
			return "Woźnica";
			break;
		case 86:
		case 87:
		case 88:
		case 89:
			return "Zabójca trolli";
			break;
		case 90:
		case 91:
		case 92:
			return "Złodziej";
			break;
		case 93:
		case 94:
			return "Żak";
			break;
		case 95:
			return "Żeglarz";
			break;
		case 96:
		case 97:
		case 98:
		case 99:
			return "Żołnierz";
			break;
		case 100:
			return "Żołnierz okrętowy";
			break;
		default:
			return "Banita";
			break;
	}
}

std::string niziolek_profesja(int k100) {
	switch (k100) {
		case 1:
		case 2:
		case 3:
			return "Banita";
			break;
		case 4:
		case 5:
			return "Ciura obozowa";
			break;
		case 6:
		case 7:
		case 8:
			return "Cyrkowiec";
			break;
		case 9:
			return "Cyrulik";
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			return "Hiena cmentarna";
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			return "Kanciarz";
			break;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return "Łowca";
			break;
		case 26:
		case 27:
			return "Łowca nagród";
			break;
		case 28:
		case 29:
			return "Mieszczanin";
			break;
		case 30:
		case 31:
			return "Mytnik";
			break;
		case 32:
		case 33:
		case 34:
		case 35:
			return "Najemnik";
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			return "Ochotnik";
			break;
		case 41:
		case 42:
			return "Paź";
			break;
		case 43:
		case 44:
		case 45:
			return "Podżegacz";
			break;
		case 46:
		case 47:
		case 48:
			return "Porywacz zwłok";
			break;
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
			return "Posłaniec";
			break;
		case 54:
		case 55:
		case 56:
			return "Przemytnik";
			break;
		case 57:
			return "Przewoźnik";
			break;
		case 58:
			return "Rybak";
			break;
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
			return "Rzemieślnik";
			break;
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
			return "Sługa";
			break;
		case 69:
		case 70:
		case 71:
		case 72:
			return "Strażnik";
			break;
		case 73:
		case 74:
			return "Strażnik dróg";
			break;
		case 75:
		case 76:
		case 77:
		case 78:
			return "Strażnik pól";
			break;
		case 79:
		case 80:
		case 81:
		case 82:
			return "Szczurołap";
			break;
		case 83:
			return "Śmieciarz";
			break;
		case 84:
		case 85:
		case 86:
			return "Węglarz";
			break;
		case 87:
		case 88:
		case 89:
		case 90:
			return "Włóczykij";
			break;
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			return "Złodziej";
			break;
		case 97:
		case 98:
			return "Żak";
			break;
		case 99:
		case 100:
			return "Żołnierz";
			break;
		default:
			return "Banita";
			break;
	}
}

int czlowiek_wiek(int k100) {
	switch (k100) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		return 16;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		return 17;
		break;
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
		return 18;
		break;
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
		return 19;
		break;
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
		return 20;
		break;
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
		return 21;
		break;
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
		return 22;
		break;
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
		return 23;
		break;
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
		return 24;
		break;
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
		return 25;
		break;
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
		return 26;
		break;
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
		return 27;
		break;
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
		return 28;
		break;
	case 66:
	case 67:
	case 68:
	case 69:
	case 70:
		return 29;
		break;
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
		return 30;
		break;
	case 76:
	case 77:
	case 78:
	case 79:
	case 80:
		return 31;
		break;
	case 81:
	case 82:
	case 83:
	case 84:
	case 85:
		return 32;
		break;
	case 86:
	case 87:
	case 88:
	case 89:
	case 90:
		return 33;
		break;
	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
		return 34;
		break;
	case 96:
	case 97:
	case 98:
	case 99:
	case 100:
		return 35;
		break;
	default:
		return 16;
		break;
	}
}

int elf_wiek(int k100) {
	switch (k100) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		return 30;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		return 35;
		break;
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
		return 40;
		break;
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
		return 45;
		break;
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
		return 50;
		break;
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
		return 55;
		break;
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
		return 60;
		break;
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
		return 65;
		break;
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
		return 70;
		break;
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
		return 75;
		break;
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
		return 80;
		break;
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
		return 85;
		break;
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
		return 90;
		break;
	case 66:
	case 67:
	case 68:
	case 69:
	case 70:
		return 95;
		break;
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
		return 100;
		break;
	case 76:
	case 77:
	case 78:
	case 79:
	case 80:
		return 105;
		break;
	case 81:
	case 82:
	case 83:
	case 84:
	case 85:
		return 110;
		break;
	case 86:
	case 87:
	case 88:
	case 89:
	case 90:
		return 115;
		break;
	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
		return 120;
		break;
	case 96:
	case 97:
	case 98:
	case 99:
	case 100:
		return 125;
		break;
	default:
		return 30;
		break;
	}
}

int krasnolud_wiek(int k100) {
	switch (k100) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		return 20;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		return 25;
		break;
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
		return 30;
		break;
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
		return 35;
		break;
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
		return 40;
		break;
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
		return 45;
		break;
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
		return 50;
		break;
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
		return 55;
		break;
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
		return 60;
		break;
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
		return 65;
		break;
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
		return 70;
		break;
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
		return 75;
		break;
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
		return 80;
		break;
	case 66:
	case 67:
	case 68:
	case 69:
	case 70:
		return 85;
		break;
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
		return 90;
		break;
	case 76:
	case 77:
	case 78:
	case 79:
	case 80:
		return 95;
		break;
	case 81:
	case 82:
	case 83:
	case 84:
	case 85:
		return 100;
		break;
	case 86:
	case 87:
	case 88:
	case 89:
	case 90:
		return 105;
		break;
	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
		return 110;
		break;
	case 96:
	case 97:
	case 98:
	case 99:
	case 100:
		return 115;
		break;
	default:
		return 20;
		break;
	}
}

int niziolek_wiek(int k100) {
	switch (k100) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		return 20;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		return 22;
		break;
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
		return 24;
		break;
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
		return 26;
		break;
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
		return 28;
		break;
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
		return 30;
		break;
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
		return 32;
		break;
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
		return 34;
		break;
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
		return 36;
		break;
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
		return 38;
		break;
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
		return 40;
		break;
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
		return 42;
		break;
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
		return 44;
		break;
	case 66:
	case 67:
	case 68:
	case 69:
	case 70:
		return 46;
		break;
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
		return 50;
		break;
	case 76:
	case 77:
	case 78:
	case 79:
	case 80:
		return 52;
		break;
	case 81:
	case 82:
	case 83:
	case 84:
	case 85:
		return 54;
		break;
	case 86:
	case 87:
	case 88:
	case 89:
	case 90:
		return 56;
		break;
	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
		return 58;
		break;
	case 96:
	case 97:
	case 98:
	case 99:
	case 100:
		return 60;
		break;
	default:
		return 20;
		break;
	}
}

int czlowiek_waga(int k100) {
	switch (k100) {
	case 1:
		return 50;
		break;
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		return 55;
		break;
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
		return 60;
		break;
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
		return 65;
		break;
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
		return 70;
		break;
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
		return 75;
		break;
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
		return 80;
		break;
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69:
	case 70:
		return 85;
		break;
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
	case 76:
	case 77:
	case 78:
	case 79:
	case 80:
		return 90;
		break;
	case 81:
	case 82:
	case 83:
	case 84:
	case 85:
	case 86:
	case 87:
	case 88:
	case 89:
	case 90:
		return 95;
		break;
	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
	case 96:
	case 97:
	case 98:
	case 99:
		return 100;
		break;
	case 100:
		return 110;
		break;
	default:
		return 50;
		break;
	}
}

int elf_waga(int k100) {
	switch (k100) {
	case 1:
		return 40;
		break;
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		return 45;
		break;
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
		return 50;
		break;
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
		return 55;
		break;
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
		return 60;
		break;
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
		return 65;
		break;
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
		return 70;
		break;
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69:
	case 70:
		return 75;
		break;
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
	case 76:
	case 77:
	case 78:
	case 79:
	case 80:
		return 80;
		break;
	case 81:
	case 82:
	case 83:
	case 84:
	case 85:
	case 86:
	case 87:
	case 88:
	case 89:
	case 90:
		return 85;
		break;
	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
	case 96:
	case 97:
	case 98:
	case 99:
		return 90;
		break;
	case 100:
		return 95;
		break;
	default:
		return 40;
		break;
	}
}

int krasnolud_waga(int k100) {
	switch (k100) {
	case 1:
		return 45;
		break;
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		return 50;
		break;
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
		return 55;
		break;
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
		return 60;
		break;
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
		return 65;
		break;
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
		return 70;
		break;
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
		return 75;
		break;
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69:
	case 70:
		return 80;
		break;
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
	case 76:
	case 77:
	case 78:
	case 79:
	case 80:
		return 85;
		break;
	case 81:
	case 82:
	case 83:
	case 84:
	case 85:
	case 86:
	case 87:
	case 88:
	case 89:
	case 90:
		return 90;
		break;
	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
	case 96:
	case 97:
	case 98:
	case 99:
		return 95;
		break;
	case 100:
		return 100;
		break;
	default:
		return 45;
		break;
	}
}

int niziolek_waga(int k100) {
	switch (k100) {
	case 1:
		return 35;
		break;
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		return 35;
		break;
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
		return 40;
		break;
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
		return 40;
		break;
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
		return 45;
		break;
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
		return 45;
		break;
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
		return 50;
		break;
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69:
	case 70:
		return 50;
		break;
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
	case 76:
	case 77:
	case 78:
	case 79:
	case 80:
		return 55;
		break;
	case 81:
	case 82:
	case 83:
	case 84:
	case 85:
	case 86:
	case 87:
	case 88:
	case 89:
	case 90:
		return 60;
		break;
	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
	case 96:
	case 97:
	case 98:
	case 99:
		return 65;
		break;
	case 100:
		return 70;
		break;
	default:
		return 35;
		break;
	}
}

std::string czlowiek_oczy(int k100) {
	switch (k100) {
	case 1:
		return "Szary";
		break;
	case 2:
		return "Ciemnoniebieski";
		break;
	case 3:
		return "Niebieski";
		break;
	case 4:
		return "Zielony";
		break;
	case 5:
		return "Piwny";
		break;
	case 6:
		return "Jasnobrązowy";
		break;
	case 7:
		return "Brązowy";
		break;
	case 8:
		return "Ciemnobrązowy";
		break;
	case 9:
		return "Fioletowy";
		break;
	case 10:
		return "Czarny";
		break;
	default:
		return "Szary";
		break;
	}
}

std::string elf_oczy(int k100) {
	switch (k100) {
	case 1:
		return "Szaroniebieski";
		break;
	case 2:
		return "Niebieski";
		break;
	case 3:
		return "Zielony";
		break;
	case 4:
		return "Orzechowy";
		break;
	case 5:
		return "Kasztanowy";
		break;
	case 6:
		return "Brązowy";
		break;
	case 7:
		return "Ciemnobrązowy";
		break;
	case 8:
		return "Srebrny";
		break;
	case 9:
		return "Fioletowy";
		break;
	case 10:
		return "Czarny";
		break;
	default:
		return "Szaroniebieski";
		break;
	}
}

std::string krasnolud_oczy(int k100) {
	switch (k100) {
	case 1:
		return "Szary";
		break;
	case 2:
		return "Ciemnoniebieski";
		break;
	case 3:
		return "Piwny";
		break;
	case 4:
		return "Jasnobrązowy";
		break;
	case 5:
		return "Jasnobrązowy";
		break;
	case 6:
		return "Brązowy";
		break;
	case 7:
		return "Brązowy";
		break;
	case 8:
		return "Ciemnobrązowy";
		break;
	case 9:
		return "Ciemnobrązowy";
		break;
	case 10:
		return "Fioletowy";
		break;
	default:
		return "Szary";
		break;
	}
}

std::string niziolek_oczy(int k100) {
	switch (k100) {
	case 1:
		return "Niebieski";
		break;
	case 2:
		return "Orzechowy";
		break;
	case 3:
		return "Orzechowy";
		break;
	case 4:
		return "Jasnobrązowy";
		break;
	case 5:
		return "Jasnobrązowy";
		break;
	case 6:
		return "Brązowy";
		break;
	case 7:
		return "Brązowy";
		break;
	case 8:
		return "Ciemnobrązowy";
		break;
	case 9:
		return "Ciemnobrązowy";
		break;
	case 10:
		return "Ciemnobrązowy";
		break;
	default:
		return "Niebieski";
		break;
	}
}

std::string czlowiek_wlosy(int k100) {
	switch (k100) {
	case 1:
		return "Popielaty";
		break;
	case 2:
		return "Ciemny blond";
		break;
	case 3:
		return "Blond";
		break;
	case 4:
		return "Rudy";
		break;
	case 5:
		return "Ciemno rudy";
		break;
	case 6:
		return "Jasnobrązowy";
		break;
	case 7:
		return "Brązowy";
		break;
	case 8:
		return "Brązowy";
		break;
	case 9:
		return "Ciemnobrązowy";
		break;
	case 10:
		return "Czarny";
		break;
	default:
		return "Popielaty";
		break;
	}
}

std::string elf_wlosy(int k100) {
	switch (k100) {
	case 1:
		return "Srebrny";
		break;
	case 2:
		return "Biały";
		break;
	case 3:
		return "Jasny blond";
		break;
	case 4:
		return "Ciemny blond";
		break;
	case 5:
		return "Miedziany";
		break;
	case 6:
		return "Jasnobrązowy";
		break;
	case 7:
		return "Kasztanowy";
		break;
	case 8:
		return "Brązowy";
		break;
	case 9:
		return "Ciemnobrązowy";
		break;
	case 10:
		return "Czarny";
		break;
	default:
		return "Srebrny";
		break;
	}
}

std::string krasnolud_wlosy(int k100) {
	switch (k100) {
	case 1:
		return "Popielaty";
		break;
	case 2:
		return "Blond";
		break;
	case 3:
		return "Ciemny rudy";
		break;
	case 4:
		return "Czerwony";
		break;
	case 5:
		return "Rudy";
		break;
	case 6:
		return "Brązowy";
		break;
	case 7:
		return "Brązowy";
		break;
	case 8:
		return "Ciemnobrązowy";
		break;
	case 9:
		return "Czarny";
		break;
	case 10:
		return "Kruczoczarny";
		break;
	default:
		return "Popielaty";
		break;
	}
}

std::string niziolek_wlosy(int k100) {
	switch (k100) {
	case 1:
		return "Popielaty";
		break;
	case 2:
		return "Ciemny blond";
		break;
	case 3:
		return "Blond";
		break;
	case 4:
		return "Blond";
		break;
	case 5:
		return "Rudy";
		break;
	case 6:
		return "Ciemno rudy";
		break;
	case 7:
		return "Jasnobrązowy";
		break;
	case 8:
		return "Brązowy";
		break;
	case 9:
		return "Ciemnobrązowy";
		break;
	case 10:
		return "Czarny";
		break;
	default:
		return "Popielaty";
		break;
	}
}

std::string znak_gwiezdny(int k100) {
	switch (k100) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		return "Bębniarz";
		break;
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		return "Dudy";
		break;
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
		return "Dwa Byki";
		break;
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
		return "Głupiec Mummit";
		break;
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
		return "Gwiazda Uroku";
		break;
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
		return "Gwiazda Wieczorna";
		break;
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
		return "Kocioł Rhyi";
		break;
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
		return "Lancet";
		break;
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
		return "Mędrzec Mammit";
		break;
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
		return "Pas Grungniego";
		break;
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
		return "Rozbity Wóz";
		break;
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
		return "Smok Dragomas";
		break;
	case 66:
	case 67:
	case 68:
	case 69:
	case 70:
		return "Sznur Limnera";
		break;
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
		return "Tancerka";
		break;
	case 76:
	case 77:
	case 78:
	case 79:
	case 80:
		return "Tłusty Kozioł";
		break;
	case 81:
	case 82:
	case 83:
	case 84:
	case 85:
		return "Vobist Ulotny";
		break;
	case 86:
	case 87:
	case 88:
	case 89:
	case 90:
		return "Wielki Krzyż";
		break;
	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
		return "Wół Gnuthus";
		break;
	case 96:
	case 97:
	case 98:
		return "Wymund Pustelnik";
		break;
	case 99:
	case 100:
		return "Złoty Kogut";
		break;
	default:
		return "Bębniarz";
		break;
	}
}

int czlowiek_rodzenstwo(int k100) {
	switch (k100) {
	case 1:
		return 0;
		break;
	case 2:
	case 3:
		return 1;
		break;
	case 4:
	case 5:
		return 2;
		break;
	case 6:
	case 7:
		return 3;
		break;
	case 8:
	case 9:
		return 4;
		break;
	case 10:
		return 5;
		break;
	default:
		return 0;
		break;
	}
}

int elf_rodzenstwo(int k100) {
	switch (k100) {
	case 1:
		return 0;
		break;
	case 2:
	case 3:
		return 1;
		break;
	case 4:
	case 5:
		return 1;
		break;
	case 6:
	case 7:
		return 2;
		break;
	case 8:
	case 9:
		return 2;
		break;
	case 10:
		return 3;
		break;
	default:
		return 0;
		break;
	}
}

int krasnolud_rodzenstwo(int k100) {
	switch (k100) {
	case 1:
		return 0;
		break;
	case 2:
	case 3:
		return 0;
		break;
	case 4:
	case 5:
		return 1;
		break;
	case 6:
	case 7:
		return 1;
		break;
	case 8:
	case 9:
		return 2;
		break;
	case 10:
		return 3;
		break;
	default:
		return 0;
		break;
	}
}

int niziolek_rodzenstwo(int k100) {
	switch (k100) {
	case 1:
		return 1;
		break;
	case 2:
	case 3:
		return 2;
		break;
	case 4:
	case 5:
		return 3;
		break;
	case 6:
	case 7:
		return 4;
		break;
	case 8:
	case 9:
		return 5;
		break;
	case 10:
		return 6;
		break;
	default:
		return 1;
		break;
	}
}

std::string czlowiek_miejsce_urodzenia_1(int k100) {
	switch (k100) {
	case 1:
		return "Averland";
		break;
	case 2:
		return "Hochland";
		break;
	case 3:
		return "Middenland";
		break;
	case 4:
		return "Nordland";
		break;
	case 5:
		return "Ostermark";
		break;
	case 6:
		return "Ostland";
		break;
	case 7:
		return "Reikland";
		break;
	case 8:
		return "Stirland";
		break;
	case 9:
		return "Talabecland";
		break;
	case 10:
		return "Wissenland";
		break;
	default:
		return "Averland";
		break;
	}
}

std::string czlowiek_miejsce_urodzenia_2(int k100) {
	switch (k100) {
	case 1:
		return "stolica prowincji";
		break;
	case 2:
		return "bogate miasto";
		break;
	case 3:
		return "miasto targowe";
		break;
	case 4:
		return "fort wojskowy";
		break;
	case 5:
		return "miasteczko";
		break;
	case 6:
		return "bogata wieś";
		break;
	case 7:
		return "wioska rolnicza";
		break;
	case 8:
		return "wioska rybacka";
		break;
	case 9:
		return "biedna wioska";
		break;
	case 10:
		return "samotna chata";
		break;
	default:
		return "stolica prowincji";
		break;
	}
}

std::string elf_miejsce_urodzenia(int k100) {
	switch (k100) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
		return "Altdorf";
		break;
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
		return "Marienburg";
		break;
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69:
	case 70:
		return "Las Laurelorn";
		break;
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
	case 76:
	case 77:
	case 78:
	case 79:
	case 80:
	case 81:
	case 82:
	case 83:
	case 84:
	case 85:
		return "Wielki Las";
		break;
	case 86:
	case 87:
	case 88:
	case 89:
	case 90:
	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
	case 96:
	case 97:
	case 98:
	case 99:
	case 100:
		return "Las Reikwald";
		break;
	default:
		return "Altdorf";
		break;
	}
}

std::string krasnolud_miejsce_urodzenia(int k100) {
	switch (k100) {
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
		return "Karak Norn (Góry Szare)";
		break;
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
		return "Karak Izor (Przeskok)";
		break;
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
		return "Karak Hirn (Góry Czarne)";
		break;
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69:
	case 70:
		return "Karak Kadrin (Góry Krańca Świata)";
		break;
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
	case 76:
	case 77:
	case 78:
	case 79:
	case 80:
		return "Karaz-a-Karak (Góry Krańca Świata)";
		break;
	case 81:
	case 82:
	case 83:
	case 84:
	case 85:
	case 86:
	case 87:
	case 88:
	case 89:
	case 90:
		return "Zhufbar (Góry Krańca Świata)";
		break;
	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
	case 96:
	case 97:
	case 98:
	case 99:
	case 100:
		return "Bark Varr (Czarna Zatoka)";
		break;
	default:
		return "Karak Norn (Góry Szare)";
		break;
	}
}

std::string znaki_szczegolne(int k100) {
	switch (k100) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		return "Bielmo na oku";
		break;
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		return "Blizna";
		break;
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
		return "Brak brwi";
		break;
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
		return "Brak palca";
		break;
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
		return "Brak zęba";
		break;
	case 26:
	case 27:
	case 28:
	case 29:
		return "Brodawki";
		break;
	case 30:
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
		return "Blada cera";
		break;
	case 36:
	case 37:
	case 38:
	case 39:
		return "Duży nos";
		break;
	case 40:
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
		return "Duży pieprzyk";
		break;
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
		return "Dziwny zapach ciała";
		break;
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
		return "Kolczyk w nosie";
		break;
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
		return "Kolczyk w uchu";
		break;
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
		return "Niewielka łysina";
		break;
	case 66:
	case 67:
	case 68:
	case 69:
	case 70:
		return "Oczy różnego koloru";
		break;
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
		return "Piegi";
		break;
	case 76:
	case 77:
	case 78:
	case 79:
	case 80:
		return "Poszarpane ucho";
		break;
	case 81:
	case 82:
	case 83:
	case 84:
		return "Ślady po ospie";
		break;
	case 85:
	case 86:
	case 87:
	case 88:
	case 89:
		return "Tatuaż";
		break;
	case 90:
	case 91:
	case 92:
	case 93:
	case 94:
		return "Wystające zęby";
		break;
	case 95:
	case 96:
	case 97:
	case 98:
		return "Wytrzeszczone oczy";
		break;
	case 99:
	case 100:
		return "Złamany nos";
		break;
	default:
		return "Bielmo na oku";
		break;
	}
}

void czlowiek_cechy() {
	tmp_ww = 20 + rand() % 19 + 2;
	tmp_us = 20 + rand() % 19 + 2;
	tmp_k = 20 + rand() % 19 + 2;
	tmp_odp = 20 + rand() % 19 + 2;
	tmp_zr = 20 + rand() % 19 + 2;
	tmp_int = 20 + rand() % 19 + 2;
	tmp_sw = 20 + rand() % 19 + 2;
	tmp_ogl = 20 + rand() % 19 + 2;
	tmp_a = 1;
	tmp_numer = rand() % 10 + 1;
	switch (tmp_numer) {
	case 1:
	case 2:
	case 3:
		tmp_zyw = 10;
		break;
	case 4:
	case 5:
	case 6:
		tmp_zyw = 11;
		break;
	case 7:
	case 8:
	case 9:
		tmp_zyw = 12;
		break;
	case 10:
		tmp_zyw = 13;
		break;
	default:
		tmp_zyw = 10;
		break;
	}
	tmp_s = tmp_k / 10;
	tmp_wyt = tmp_odp / 10;
	tmp_sz = 4;
	tmp_mag = 0;
	tmp_po = 0;
	tmp_numer = rand() % 10 + 1;
	switch (tmp_numer) {
	case 1:
	case 2:
	case 3:
	case 4:
		tmp_pp = 2;
		break;
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		tmp_pp = 3;
		break;
	default:
		tmp_pp = 2;
		break;
	}
	tmp_pd_obec = 0;
	tmp_pd_raz = 0;
}

void elf_cechy() {
	tmp_ww = 20 + rand() % 19 + 2;
	tmp_us = 30 + rand() % 19 + 2;
	tmp_k = 20 + rand() % 19 + 2;
	tmp_odp = 20 + rand() % 19 + 2;
	tmp_zr = 30 + rand() % 19 + 2;
	tmp_int = 20 + rand() % 19 + 2;
	tmp_sw = 20 + rand() % 19 + 2;
	tmp_ogl = 20 + rand() % 19 + 2;
	tmp_a = 1;
	tmp_numer = rand() % 10 + 1;
	switch (tmp_numer) {
	case 1:
	case 2:
	case 3:
		tmp_zyw = 9;
		break;
	case 4:
	case 5:
	case 6:
		tmp_zyw = 10;
		break;
	case 7:
	case 8:
	case 9:
		tmp_zyw = 11;
		break;
	case 10:
		tmp_zyw = 12;
		break;
	default:
		tmp_zyw = 9;
		break;
	}
	tmp_s = tmp_k / 10;
	tmp_wyt = tmp_odp / 10;
	tmp_sz = 5;
	tmp_mag = 0;
	tmp_po = 0;
	tmp_numer = rand() % 10 + 1;
	switch (tmp_numer) {
	case 1:
	case 2:
	case 3:
	case 4:
		tmp_pp = 1;
		break;
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		tmp_pp = 2;
		break;
	default:
		tmp_pp = 2;
		break;
	}
	tmp_pd_obec = 0;
	tmp_pd_raz = 0;
}

void krasnolud_cechy() {
	tmp_ww = 30 + rand() % 19 + 2;
	tmp_us = 20 + rand() % 19 + 2;
	tmp_k = 20 + rand() % 19 + 2;
	tmp_odp = 30 + rand() % 19 + 2;
	tmp_zr = 10 + rand() % 19 + 2;
	tmp_int = 20 + rand() % 19 + 2;
	tmp_sw = 20 + rand() % 19 + 2;
	tmp_ogl = 10 + rand() % 19 + 2;
	tmp_a = 1;
	tmp_numer = rand() % 10 + 1;
	switch (tmp_numer) {
	case 1:
	case 2:
	case 3:
		tmp_zyw = 11;
		break;
	case 4:
	case 5:
	case 6:
		tmp_zyw = 12;
		break;
	case 7:
	case 8:
	case 9:
		tmp_zyw = 13;
		break;
	case 10:
		tmp_zyw = 14;
		break;
	default:
		tmp_zyw = 11;
		break;
	}
	tmp_s = tmp_k / 10;
	tmp_wyt = tmp_odp / 10;
	tmp_sz = 3;
	tmp_mag = 0;
	tmp_po = 0;
	tmp_numer = rand() % 10 + 1;
	switch (tmp_numer) {
	case 1:
	case 2:
	case 3:
	case 4:
		tmp_pp = 1;
		break;
	case 5:
	case 6:
	case 7:
		tmp_pp = 2;
	case 8:
	case 9:
	case 10:
		tmp_pp = 3;
		break;
	default:
		tmp_pp = 1;
		break;
	}
	tmp_pd_obec = 0;
	tmp_pd_raz = 0;
}

void niziolek_cechy() {
	tmp_ww = 10 + rand() % 19 + 2;
	tmp_us = 30 + rand() % 19 + 2;
	tmp_k = 10 + rand() % 19 + 2;
	tmp_odp = 10 + rand() % 19 + 2;
	tmp_zr = 30 + rand() % 19 + 2;
	tmp_int = 20 + rand() % 19 + 2;
	tmp_sw = 20 + rand() % 19 + 2;
	tmp_ogl = 30 + rand() % 19 + 2;
	tmp_a = 1;
	tmp_numer = rand() % 10 + 1;
	switch (tmp_numer) {
	case 1:
	case 2:
	case 3:
		tmp_zyw = 8;
		break;
	case 4:
	case 5:
	case 6:
		tmp_zyw = 9;
		break;
	case 7:
	case 8:
	case 9:
		tmp_zyw = 10;
		break;
	case 10:
		tmp_zyw = 11;
		break;
	default:
		tmp_zyw = 8;
		break;
	}
	tmp_s = tmp_k / 10;
	tmp_wyt = tmp_odp / 10;
	tmp_sz = 4;
	tmp_mag = 0;
	tmp_po = 0;
	tmp_numer = rand() % 10 + 1;
	switch (tmp_numer) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
		tmp_pp = 2;
		break;
	case 8:
	case 9:
	case 10:
		tmp_pp = 3;
		break;
	default:
		tmp_pp = 2;
		break;
	}
	tmp_pd_obec = 0;
	tmp_pd_raz = 0;
}
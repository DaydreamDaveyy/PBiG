#pragma once
#include <iostream>
#include <string>

class Bohater 
{
private:

	int id_postaci;

	//BOHATER
	std::string imie;
	std::string rasa;
	std::string profesja_obecna;

	//OPIS BOHATERA
	std::string plec;
	int wiek;
	int wzrost;
	int waga;
	std::string kolor_oczu;
	std::string kolor_wlosow;
	std::string znak_gwiezdny;
	int rodzenstwo;
	std::string miejsce_urodzenia;
	std::string znaki_szczegolne;

	//STATYSTYKI
	int walka_wrecz;
	int umiejetnosci_strzeleckie;
	int krzepa;
	int odpornosc;
	int zrecznosc;
	int inteligencja;
	int sila_woli;
	int oglada;
	int ataki;
	int zywotnosc;
	int sila;
	int wytrzymalosc;
	int szybkosc;
	int magia;
	int punkty_obledu;
	int punkty_przeznaczenia;
	int pd_obecne;
	int pd_razem;

public:

	//METODY
	Bohater(int, std::string, std::string, std::string, std::string, int, int, int, std::string, std::string, std::string, int, std::string, std::string, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int); //konstruktor
};
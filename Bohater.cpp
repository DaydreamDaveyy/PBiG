#include <iostream>
#include <fstream>
#include <string>
#include "Bohater.h"

Bohater::Bohater(int id, std::string im, std::string ra, std::string prof, std::string ple, int wie, int wzr, int wag, std::string oczy, std::string wlosy, std::string znak, int rodz, std::string urodzenie, std::string znaki, int ww, int us, int k, int odp, int zr, int inteli, int sw, int ogl, int a, int zyw, int s, int wyt, int sz, int mag, int po, int pp, int pd_o, int pd_r)
{
	id_postaci = id;
	imie = im;
	rasa = ra;
	profesja_obecna = prof;
	plec = ple;
	wiek = wie;
	wzrost = wzr;
	waga = wag;
	kolor_oczu = oczy;
	kolor_wlosow = wlosy;
	znak_gwiezdny = znak;
	rodzenstwo = rodz;
	miejsce_urodzenia = urodzenie;
	znaki_szczegolne = znaki;
	walka_wrecz = ww;
	umiejetnosci_strzeleckie = us;
	krzepa = k;
	odpornosc = odp;
	zrecznosc = zr;
	inteligencja = inteli;
	sila_woli = sw;
	oglada = ogl;
	ataki = a;
	zywotnosc = zyw;
	sila = s;
	wytrzymalosc = wyt;
	szybkosc = sz;
	magia = mag;
	punkty_obledu = po;
	punkty_przeznaczenia = pp;
	pd_obecne = pd_o;
	pd_razem = pd_r;
}
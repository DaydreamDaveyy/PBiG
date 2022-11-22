//BIBLIOTEKI
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "menu_glowne.h"

//KOD G£ÓWNY
int main()
{
	setlocale(LC_ALL, "");
	srand((unsigned int)time(NULL));

	menu_glowne();		//Uruchomienie menu g³ównego

	return 0;
}
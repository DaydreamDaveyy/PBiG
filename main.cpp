//BIBLIOTEKI
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "menu_glowne.h"

//KOD G��WNY
int main()
{
	setlocale(LC_ALL, "");
	srand((unsigned int)time(NULL));

	menu_glowne();		//Uruchomienie menu g��wnego

	return 0;
}
#include "game.h"
#include <iostream>

using std::cout;
using std::cin;
#if 1
using std::string;
#endif

int16_t genBoard(int16_t choose)
{
	/*Genera el tablero*/

	const int16_t table{3}; /*tamaño de la matriz 3x3*/
	string board[table][table]{"[]","[]","[]\n",
							   "[]","[]","[]"};

	for (int i=0; i < 3; i++)
	{
		for (int j=0; j < 3; j++)
		{
			cout << board[i][j];
		}
	}
	return 0;
}

void presentation()
{
	int16_t choose{}; /*Aqui se escoge x o y*/

	cout << "Bienvenido al tres en raya\n";
	cout << "Seleccion 1:x o 2:y: "; cin >> choose;
	if (choose == 1) { cout << "ahora eres x\n"; genBoard(choose);}
	else if (choose == 2) { cout << "Ahora eres o\n"; genBoard(choose);}
	else { cout << "Elija una opcion valida"; }
}
// X-0.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"
#include <iostream>
using namespace std;

char Board[8] = {}; // Сюда записываем X и O. 9 членов -1 каждому. йоу

// функция игрового поля
void game_menu()
{
	cout << "*****     Game menu     *****" << "\n" << endl;
	cout << "--| " << "7" << " --|-- " << "8" << " --|-- " << "9" << " |-- \n";
	cout << "--| " << "4" << " --|-- " << "5" << " --|-- " << "6" << " |-- \n";
	cout << "--| " << "1" << " --|-- " << "2" << " --|-- " << "3" << " |-- \n\n\n";
}

void Move(int pos, char XO)
{
	 
}

void Check()
{
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n#####     Current game     #####" << "\n" << endl;
	cout << "--| " << Board[6] << " --|-- " << Board[7] << " --|-- " << Board[8] << " |-- \n";
	cout << "--| " << Board[3] << " --|-- " << Board[4] << " --|-- " << Board[5] << " |-- \n";
	cout << "--| " << Board[0] << " --|-- " << Board[1] << " --|-- " << Board[2] << " |-- \n\n\n";
	cout << "#####                      #####" << "\n" << endl;
}
void Print_x(int move)
{
	Board[move - 1] = 'X';
}

void Print_o(int move)
{
	Board[move - 1] = 'O';
}

bool Win_x()
{
	if ((Board[0] && Board[4] && Board[8] == 'X') || (Board[0] && Board[3] && Board[6] == 'X') || (Board[0] && Board[4] && Board[8] == 'X') || (Board[7] && Board[4] && Board[1] == 'X')
		|| (Board[2] && Board[5] && Board[8] == 'X') || (Board[6] && Board[7] && Board[8] == 'X') || (Board[3] && Board[4] && Board[5] == 'X') || (Board[0] && Board[1] && Board[2] == 'X'))
	{
		return true;
	}
		return false;
}

bool Win_o()
{
	if ((Board[0] && Board[4] && Board[8] == 'O') || (Board[0] && Board[3] && Board[6] == 'O') || (Board[0] && Board[4] && Board[8] == 'O') || (Board[7] && Board[4] && Board[1] == 'O')
		|| (Board[2] && Board[5] && Board[8] == 'O') || (Board[6] && Board[7] && Board[8] == 'O') || (Board[3] && Board[4] && Board[5] == 'O') || (Board[0] && Board[1] && Board[2] == 'O'))
	{
		return true;
	}
		return false;
}

int play_game()
{
	char var = ' ';
	int move_x = 0;
	int move_o = 0;
	int count = 0;
	while (count < 8)
	{
		game_menu();
		cin >> move_x;
		Print_x(move_x);
		Check();
		if (Win_x())
		{
			return 'X';
		}
		game_menu();
		cin >> move_o;
		Print_o(move_o);
		Check();
		if (Win_o())
		{
			return 'O';
		}
		count++;
	}
	return 'N';
}
void Who_win(char result)
{
	if (result == 'X')
	{
		cout << "X win";
	}
	else if (result == 'O')
	{
		cout << "O win";
	}
	else
	{
		cout << "X and O doesnt win";
	}
}

int main()
{

	char result = play_game();
	Who_win(result);
	char b; 
	cin >> b;
    return 0;
}
// need to add statistics which are written to the file

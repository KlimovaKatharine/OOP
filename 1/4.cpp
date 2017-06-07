#include <iostream>
#include <locale.h>
#include <cmath>
#include <Windows.h>

using namespace std;

struct card
{
   // масть карт
   enum {spades, clubs, diamonds, hearts} suit;
   // достоинство карт
   enum {six, seven, eight, nine, ten, jack, queen, king, ace} value;
} c1, c2;

bool Kick(card c1,card c2,int cs)
{
	if (c1.suit == cs)
	{
		if (c2.suit == cs)
		{
			if (c1.value > c2.value)
				return true;
			else
				return false;
		}
		else
			return true;
	}
	else
	{
		if (c2.suit == cs)
			return false;
		else
			{
				if (c1.suit == c2.suit)
				{
					if (c1.value > c2.value)
						return true;
					else
						return false;
				}
				else
					return false;				
			}
	}
}

int main()
{
	setlocale(LC_ALL,"");
	int cs,s1,s2,v1,v2;
	cout << "Введите козырную масть:\n0 - Пики\n1 - Трефы\n2 - Бубны\n3 - Червы" << endl;
	cin >> cs;
	system("cls");
	cout << "Введите масть карт:\n0 - Пики\n1 - Трефы\n2 - Бубны\n3 - Червы" << endl;
	cin >> s1 >> s2;
	switch (s1)
	{
		case (0):
			{
				c1.suit = c1.spades;
				break;
			}
		case (1):
			{
				c1.suit = c1.clubs;
				break;
			}
		case (2):
			{
				c1.suit = c1.diamonds;
				break;
			}
		case (3):
			{
				c1.suit = c1.hearts;
				break;
			}
	}
	switch (s2)
	{
		case (0):
			{
				c2.suit = c2.spades;
				break;
			}
		case (1):
			{
				c2.suit = c2.clubs;
				break;
			}
		case (2):
			{
				c2.suit = c2.diamonds;
				break;
			}
		case (3):
			{
				c2.suit = c2.hearts;
				break;
			}
	}
	system("cls");
	cout << "Введите достоинство карт:\n0 - 6\n1 - 7\n2 - 8\n3 - 9\n4 - 10\n5 - валет\n6 - дама\n7 - король\n8 - туз" <<  endl;
	cin >> v1 >> v2;
	switch (v1)
	{
		case (0):
			{
				c1.value = c1.six;
				break;
			}
		case (1):
			{
				c1.value = c1.seven;
				break;
			}
		case (2):
			{
				c1.value = c1.eight;
				break;
			}
		case (3):
			{
				c1.value = c1.nine;
				break;
			}
		case (4):
			{
				c1.value = c1.ten;
				break;
			}
		case (5):
			{
				c1.value = c1.jack;
				break;
			}
		case (6):
			{
				c1.value = c1.queen;
				break;
			}
		case (7):
			{
				c1.value = c1.king;
				break;
			}
		case (8):
			{
				c1.value = c1.ace;
				break;
			}
	}
	switch (v2)
	{
		case (0):
			{
				c2.value = c2.six;
				break;
			}
		case (1):
			{
				c2.value = c2.seven;
				break;
			}
		case (2):
			{
				c2.value = c2.eight;
				break;
			}
		case (3):
			{
				c2.value = c2.nine;
				break;
			}
		case (4):
			{
				c2.value = c2.ten;
				break;
			}
		case (5):
			{
				c2.value = c2.jack;
				break;
			}
		case (6):
			{
				c2.value = c2.queen;
				break;
			}
		case (7):
			{
				c2.value = c2.king;
				break;
			}
		case (8):
			{
				c2.value = c2.ace;
				break;
			}
	}
	if(Kick (c1,c2,cs))
		cout << "Бьет" << endl;
	else
		cout << "Не бьет" << endl;
	return 0;
}

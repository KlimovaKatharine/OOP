#include <iostream>
#include <locale.h>
#include <Windows.h>

using namespace std;

union even 
{
   unsigned int a;
   unsigned int b : 1;
} number;


int main()
{
	setlocale(LC_ALL,"");
	SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
	cout << "Введите число: ";
	cin >> number.a;
	if (number.b)
		cout << "Нечетное" << endl;
	else
		cout << "Четное" << endl;
	return 0;
}

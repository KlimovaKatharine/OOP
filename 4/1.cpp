#include <iostream>
#include <locale.h>
#include <Windows.h>

using namespace std;

struct store
{
   char name[20],country[20];
   int price;
   unsigned int available : 2;
   unsigned int standart : 2;
   unsigned int month : 2;
} goods[5];


int main()
{
	setlocale(LC_ALL,"");
	SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
    int a;
	cout << "Заполните информацию о товарах" << endl;
	for (int i=0;i<5;i++)
	{
		cout << "Наименование: " ;
		cin >> goods[i].name;
		cout << "Страна производства: ";
		cin >> goods[i].country;
		cout << "Цена: ";
		cin >> goods[i].price;
		cout << "В наличии: ";
		cin >> a;
		goods[i].available = a;
		cout << "Стандарт: ";
		cin >> a;
		goods[i].standart = a;
		cout << "Товар месяца: ";
		cin >> a;
		goods[i].month = a;
		cout << "/---------------------------------------/" << endl;
	}
	for (int i=0;i<5;i++)
	{
		cout << "Наименование: " << goods[i].name << endl;
		cout << "Страна производства: " << goods[i].country << endl;
		cout << "Цена: " << goods[i].price << endl;
		cout << "В наличии: " << goods[i].available << endl;
		cout << "Стандарт: " << goods[i].standart << endl;
		cout << "Товар месяца: " << goods[i].month << endl;
		cout << "/---------------------------------------/" << endl;
	}
	cout << "Товары не по стандарту" << endl;
		for (int i=0;i<5;i++)
	{
		if (goods[i].standart)
		{
			
		}
		else
		{
		cout << "Наименование: " << goods[i].name << endl;
		cout << "Страна производства: " << goods[i].country << endl;
		cout << "Цена: " << goods[i].price << endl;
		cout << "В наличии: " << goods[i].available << endl;
		cout << "Стандарт: " << goods[i].standart << endl;
		cout << "Товар месяца: " << goods[i].month << endl;
		cout << "/---------------------------------------/" << endl;
		}
	}
	return 0;
}

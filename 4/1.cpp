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
	cout << "��������� ���������� � �������" << endl;
	for (int i=0;i<5;i++)
	{
		cout << "������������: " ;
		cin >> goods[i].name;
		cout << "������ ������������: ";
		cin >> goods[i].country;
		cout << "����: ";
		cin >> goods[i].price;
		cout << "� �������: ";
		cin >> a;
		goods[i].available = a;
		cout << "��������: ";
		cin >> a;
		goods[i].standart = a;
		cout << "����� ������: ";
		cin >> a;
		goods[i].month = a;
		cout << "/---------------------------------------/" << endl;
	}
	for (int i=0;i<5;i++)
	{
		cout << "������������: " << goods[i].name << endl;
		cout << "������ ������������: " << goods[i].country << endl;
		cout << "����: " << goods[i].price << endl;
		cout << "� �������: " << goods[i].available << endl;
		cout << "��������: " << goods[i].standart << endl;
		cout << "����� ������: " << goods[i].month << endl;
		cout << "/---------------------------------------/" << endl;
	}
	cout << "������ �� �� ���������" << endl;
		for (int i=0;i<5;i++)
	{
		if (goods[i].standart)
		{
			
		}
		else
		{
		cout << "������������: " << goods[i].name << endl;
		cout << "������ ������������: " << goods[i].country << endl;
		cout << "����: " << goods[i].price << endl;
		cout << "� �������: " << goods[i].available << endl;
		cout << "��������: " << goods[i].standart << endl;
		cout << "����� ������: " << goods[i].month << endl;
		cout << "/---------------------------------------/" << endl;
		}
	}
	return 0;
}

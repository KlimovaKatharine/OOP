#include <iostream>
#include <locale.h>

using namespace std;

struct product
{
   char name[20];
   float price,count,disc1,disc2,disc3;
} products[3];

void convert(product &p)
{
	for (int i=0;i<3;i++)
	{
		if (p.price > 100)
		{
			if (p.price > 500)
			{
				if (p.price > 1000)
				{
					p.price *= (100 - p.disc3)/100;
				}
				p.price *= (100 - p.disc2)/100;
			}
			p.price *= (100 - p.disc1)/100;
		}
	}
}

int main()
{
	setlocale(0,"");
	cout << "������� �������� � �������" << endl;
	for (int i=0;i<3;i++)
	{
		cout << "��������: ";
		cin >> products[i].name;
		cout << "����: ";
		cin >> products[i].price;
		cout << "����������: ";
		cin >> products[i].count;
		cout << "������ 1: ";
		cin >> products[i].disc1;
		cout << "������ 2: ";
		cin >> products[i].disc2;
		cout << "������ 3: ";
		cin >> products[i].disc3;
	}
	//����� �������� � ����������, ������ �� ����������
	for (int i=0;i<3;i++)
	{
		convert(products[i]);
		cout << products[i].name << " " << products[i].price << endl;
	}
	return 0;
}

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
	cout << "Введите сведения о товарах" << endl;
	for (int i=0;i<3;i++)
	{
		cout << "Название: ";
		cin >> products[i].name;
		cout << "Цена: ";
		cin >> products[i].price;
		cout << "Количесвто: ";
		cin >> products[i].count;
		cout << "Скидка 1: ";
		cin >> products[i].disc1;
		cout << "Скидка 2: ";
		cin >> products[i].disc2;
		cout << "Скидка 3: ";
		cin >> products[i].disc3;
	}
	//Опять проблема с кодировкой, только на английском
	for (int i=0;i<3;i++)
	{
		convert(products[i]);
		cout << products[i].name << " " << products[i].price << endl;
	}
	return 0;
}

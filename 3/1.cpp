#include <iostream>
#include <locale.h>

using namespace std;

struct contribution
{
   int code,type,summ;
   union
   {
   		struct
   		{
   			char name[10];
   			int bet,period,recoup;
		} first_c;
		struct
		{
			char name[10];
   			int bet,period,recoup;
		} sec_c;
   } cont_type;
} clients[3];


int main()
{
	setlocale(LC_ALL,"");
	int profit[3];
	cout << "Введите данные по вкладам" << endl;
	for (int i=0;i<3;i++)
	{
		cout << "Код вклада: ";
		cin >> clients[i].code;
		cout << "Тип вклада: ";
		cin >> clients[i].type;
		cout << "Сумма вклада: ";
		cin >> clients[i].summ;
		switch (clients[i].type)
		{
			case (1):
				{
					cout << "Название вклада: ";
					cin >> clients[i].cont_type.first_c.name;
					cout << "Процентная ставка: ";
					cin >> clients[i].cont_type.first_c.bet;
					cout << "Период начислений: ";
					cin >> clients[i].cont_type.first_c.period;
					cout << "Налоговый вычет: ";
					cin >> clients[i].cont_type.first_c.recoup;
					profit[i] = clients[i].summ * clients[i].cont_type.first_c.bet/100 * clients[i].cont_type.first_c.period - clients[i].summ * clients[i].cont_type.first_c.recoup/100 * clients[i].cont_type.first_c.period;
					break;
				}
			case (2):
				{
					cout << "Название вклада: ";
					cin >> clients[i].cont_type.sec_c.name;
					cout << "Процентная ставка: ";
					cin >> clients[i].cont_type.sec_c.bet;
					cout << "Период начислений: ";
					cin >> clients[i].cont_type.sec_c.period;
					cout << "Налоговый вычет: ";
					cin >> clients[i].cont_type.sec_c.recoup;
					profit[i] = clients[i].summ * clients[i].cont_type.sec_c.bet/100 * clients[i].cont_type.sec_c.period - clients[i].summ * clients[i].cont_type.sec_c.recoup/100 * clients[i].cont_type.sec_c.period;
					break;	
				}
		}
		cout << "\n/----------------------------------------/" <<endl;
	}
	for (int i=0;i<3;i++)
	{
		cout << i << " клиент:\nПрибыль - " << profit[i] << endl;
	}
	return 0;
}

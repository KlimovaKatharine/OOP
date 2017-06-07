#include <iostream>
#include <locale.h>
#include <Windows.h>

using namespace std;

struct employee
{
   char fio[50],sex,position[20];
   int edu;
   union
   {
   		struct
   		{
   			char profession[20],university[20];
		} high_education;
		char profession[20];
   } education;
   int exp;
} employees[3];

int main()
{
	setlocale(LC_ALL,"Russian");
	SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
	for (int i=0;i<3;i++)
	{
		fflush(stdin);
		cout << "���: ";
		gets(employees[i].fio);
		cout << "���: ";
		cin >> employees[i].sex;
		cout << "���������: ";
		cin >> employees[i].position;
		cout << "������ �����������:\n1 - ����, 0 - ���: ";
		cin >> employees[i].edu;
		switch (employees[i].edu)
		{
			case (0):
				{
					cout << "���������: ";
					cin >> employees[i].education.profession;
					break;
				}
			case (1):
				{
					cout << "���������: ";
					cin >> employees[i].education.high_education.profession;
					cout << "���: ";
					cin >> employees[i].education.high_education.university;
					break;
				}
		}
		cout << "����: ";
		cin >> employees[i].exp;
		cout << "/------------------------------------------/" << endl;
	}
	cout << "���			| ���		| ���������	| �����������		| ����" << endl;
	cout << "------------------------------------------------------------------" << endl;
	for (int i = 0;i < 3; i++)
	{
		cout << employees[i].fio << " | " << employees[i].sex << " | " << employees[i].position << " | ";
		switch (employees[i].edu)
		{
			case (0):
				{
					cout << employees[i].education.profession << " ";
					break;
				}
			case (1):
				{
					cout << employees[i].education.high_education.profession << " " << employees[i].education.high_education.university << " ";
					break;
				}
		}
		cout << employees[i].exp << endl;
		cout << "------------------------------------------------------------------" << endl;
	}
	return 0;
}

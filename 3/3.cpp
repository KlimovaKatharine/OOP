#include <iostream>
#include <locale.h>
#include <Windows.h>

using namespace std;

struct schoolboy
{
   char fio[50],sex,classname[2];
   int birthdate,faculties,load;
};

int main()
{
	setlocale(LC_ALL,"Russian");
	SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
    int n,l,a;
    cout << "������� ���������� ����������: ";
    cin >> n;
    schoolboy *schoolboys = new schoolboy[n];
	for (int i=0;i<n;i++)
	{
		fflush(stdin);
		cout << "���: ";
		gets(schoolboys[i].fio);
		cout << "���: ";
		cin >> schoolboys[i].sex;
		cout << "�����: ";
		cin >> schoolboys[i].classname;
		cout << "��� ��������: ";
		cin >> schoolboys[i].birthdate;
		cout << "���������� �������������: ";
		cin >> schoolboys[i].faculties;
		cout << "��������: ";
		cin >> schoolboys[i].load;
		l = schoolboys[i].load + schoolboys[i].faculties;
		a = 2017 - schoolboys[i].birthdate;
		if (a<11)
		{
			if (l<30)
				cout << "�� ����������" << endl;
			else
				cout << "����������" << endl;
		}
		else if (a>10&&a<15)
		{
			if (l<34)
				cout << "�� ����������" << endl;
			else
				cout << "����������" << endl;
		}
		else
		{
			if (l<36)
				cout << "�� ����������" << endl;
			else
				cout << "����������" << endl;
		}
		cout << "/------------------------------------------/" << endl;
	}
	return 0;
}

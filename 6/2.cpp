#include <iostream>
#include <locale.h>
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"");
	SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
    char a;
	ifstream F;
	ofstream O;
   	F.open("in.txt");
   	O.open("out.txt");
    if (!F||!O)
    	cout << "���� �� ������" << endl;
   	while (!F.eof())
    {
    	F >> a;
    	if (a == ' ')
    	{
    		O << ' '; // ����� �������, �� ������ ������� � ���� ������, << a �����
		}
		else
			O << a << a;
	}
	O.close();
	F.close();
	return 0;
}

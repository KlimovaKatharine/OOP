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
	ifstream F;
	int count = 0;
    char letter = ' ';
    char a;
    for (char c = '�'; c <= '�'; c++)
    {
    	F.open("in.txt");
    	if (!F)
    		cout << "���� �� ������" << endl;
    	int tmp = 0;
    	while (!F.eof())
    	{
    		F >> a;
    		if (a == c)
    			tmp++;
		}
		if (tmp > count)
		{
			count = tmp;
			letter = c;
		}
		F.close();
	}
	
    cout << "����� � ���������� ����������� ���������: " << letter << "\n����������: " << count << endl;
	return 0;
}

#include <iostream>
#include <locale.h>

using namespace std;

struct adress
{
   char city[20],street[20];
   int home_number,building,flat_number;
} adresses[5];


int main()
{
	setlocale(LC_ALL,"");
	cout << "��������� ������ �������:"  << endl;
	int n,m,temp;
	for (int i=0;i<5;i++)
	{
		cout << "�����: ";
		cin >> adresses[i].city;
		cout << "�����: ";
		cin >> adresses[i].street;
		cout << "����� ����: ";
		cin >> adresses[i].home_number;
		cout << "������: ";
		cin >> adresses[i].building;
		cout << "����� ��������: ";
		cin >> adresses[i].flat_number;
	}
	cout << "������� ����� n � m ��� ������:" << endl;
	cin >> n >> m;
	temp = adresses[n].home_number;
	adresses[n].home_number = adresses[m].flat_number;
	adresses[m].flat_number = temp;
	return 0;
}

#include <iostream>
#include <locale.h>

using namespace std;

struct EGE
{
   char name[],surname[],secname[];
   int p1,p2,p3;
};


int main()
{
	setlocale(LC_ALL,"");
	int n,m;
	cout << "������� ��������� ���� �� �������������" << endl;
	cin >> m;
	cout << "������� ���������� ���������" << endl;
	cin >> n;
	EGE *students = new EGE [n];
	for (int i=0;i<n;i++)
	{
		cout << "/----------------------------------------/" << endl;
		cout << "�������� � " << i+1 << " �����������:" << endl;
		cout << "���: ";
		cin >> students[i].name;
		cout << "�������: ";
		cin >> students[i].surname;
		cout << "��������: ";
		cin >> students[i].secname;
		cout << "����� �� ������� ��������: ";
		cin >> students[i].p1;
		cout << "����� �� ������� ��������: ";
		cin >> students[i].p2;
		cout << "����� �� �������� ��������: ";
		cin >> students[i].p3;
		if ((students[i].p1+students[i].p2+students[i].p3)>m-1)
			cout << "���������: ��������" << endl;
		else
			cout << "���������: �� ��������" << endl;
	}
	return 0;
}

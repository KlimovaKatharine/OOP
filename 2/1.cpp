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
	cout << "Введите проходной балл на специальность" << endl;
	cin >> m;
	cout << "Введите количество студентов" << endl;
	cin >> n;
	EGE *students = new EGE [n];
	for (int i=0;i<n;i++)
	{
		cout << "/----------------------------------------/" << endl;
		cout << "Сведения о " << i+1 << " абитуриенте:" << endl;
		cout << "Имя: ";
		cin >> students[i].name;
		cout << "Фамилия: ";
		cin >> students[i].surname;
		cout << "Отчество: ";
		cin >> students[i].secname;
		cout << "Баллы по первому предмету: ";
		cin >> students[i].p1;
		cout << "Баллы по второму предмету: ";
		cin >> students[i].p2;
		cout << "Баллы по третьему предмету: ";
		cin >> students[i].p3;
		if ((students[i].p1+students[i].p2+students[i].p3)>m-1)
			cout << "Результат: зачислен" << endl;
		else
			cout << "Результат: не зачислен" << endl;
	}
	return 0;
}

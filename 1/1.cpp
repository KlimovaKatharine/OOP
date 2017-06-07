#include <iostream>
#include <string>

// Проблема с кодировками 866 и 1251 

using namespace std;

struct student
{
	string name,surname,secname,university;
	int n;
} students[10];

int main()
{
	int n;
	string u;
	cout << "Fill students list" << endl;
	for (int i=0;i<10;i++)
	{
		cout << "Name: ";
		cin >> students[i].name;
		cout << "Surname: ";
		cin >> students[i].surname;
		cout << "Second name: ";
		cin >> students[i].secname;
		cout << "University: ";
		cin >> students[i].university;
		cout << "Group number: ";
		cin >> students[i].n;
	}
	cout << "Enter group number and university name for search" << endl;
	cin >> n >> u;
	for (int i=0;i<10;i++)
	{
		if (students[i].n==n && students[i].university==u)
			cout << students[i].surname << endl;
	}
	return 0;
}

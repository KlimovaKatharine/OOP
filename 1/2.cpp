#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

struct point
{
	float x,y;
} A,B;

int main()
{
	setlocale(LC_ALL,"");
	float d;
	cout << "������� ���������� �����" << endl;
	cin >> A.x >> A.y >> B.x >> B.y; 
	d = sqrt(pow((B.x - A.x),2.0) + pow((B.y-A.y),2.0));
	cout << "���������� ����� ������� �����: " << d << endl;
	return 0;
}

#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

struct complex
{
   float  x,y;
} A,B;

//���� �� ������� ������ ������ � ����������� ��������� �� ���

complex summ(complex A, complex B)
{
	complex C = {0,0};
	C.x = A.x + B.x;
	C.y = A.y + B.y;
	return C;
}

complex diff(complex A, complex B)
{
	complex C = {0,0};
	C.x = A.x - B.x;
	C.y = A.y - B.y;
	return C;
}

complex division(complex A, complex B)
{
	complex C = {0,0};
	C.x = (A.x * B.x + A.y * B.y)/(pow(B.x,2.0)+pow(B.y,2.0));
	C.y = (B.x * A.y - A.x * B.y)/(pow(B.x,2.0)+pow(B.y,2.0));
	return C;
}

complex multi(complex A, complex B)
{
	complex C = {0,0};
	C.x = (A.x * B.x - A.y * B.y);
	C.y = (B.x * A.y + A.x * B.y);
	return C;
}

int main()
{
	setlocale(LC_ALL,"");
	char o;
	complex C = {0,0};
	cout << "������� ��������������, ����� ������ ����� ����������� ����� � ���� ��������" << endl;
	cin >> A.x >> A.y >> B.x >> B.y >> o;
	switch(o)
	{
		case ('+'):
		{
			C = summ(A,B);
			break;
		}
		case ('-'):
		{
			C = diff(A,B);
			break;
		}
		case ('*'):
		{
			C = multi(A,B);
			break;
		}
		case ('/'):
		{
			C = division(A,B);
			break;
		}
	}
	cout << "���������: " << C.x << " + " << C.y << " i" << endl;
	return 0;
}

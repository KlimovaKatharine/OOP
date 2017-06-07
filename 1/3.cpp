#include <iostream>
#include <locale.h>

using namespace std;

struct circle
{
	int x,y,r;
	float S,P;
};

int main()
{
	setlocale(LC_ALL,"");
	circle c;
	const float Pi=3.14;
	cout << "Введите координаты точки центра окружности и ее радиус" << endl;
	cin >> c.x >> c.y >> c.r;
	while (c.r<0)
	{
		cout << "Радиус окружности введен некорректно\nВведите радиус окружности" << endl;
		cin >> c.r;
	}
	c.S = Pi * c.r * c.r;
	c.P = 2 * Pi * c.r;
	cout << "Площадь круга равна " << c.S << "\nДлина окружности равна " << c.P << endl;
	return 0;
}

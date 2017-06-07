#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

struct decart
{
   int x,y;
};

struct polar
{
	int r;
	float fi;
};

void polar_to_decart(polar* B, decart* A)
{
	A->x = B->r*cos(B->fi);
	A->y = B->r*sin(B->fi);
}

int main()
{
	setlocale(LC_ALL,"");
	decart A;
	decart* Ap = &A;
	polar B;
	polar* Bp = &B;
	cout << "¬ведите пол€рные координаты:" << endl;
	cin >> B.r >> B.fi;
	polar_to_decart(Bp,Ap);
	cout << "ƒекартовы координаты: " << A.x << " ; " << A.y << endl;	
	return 0;
}

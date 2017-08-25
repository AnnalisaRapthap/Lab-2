#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a, area,s;
	cout << "Enter the side of an equilateral triangle:" << endl;
	cin >> a;
	s=sqrt(3);
	area=(s*a*a)/4;
	cout << "Area of the equilateral triangle=" << area;
	return 0;
}

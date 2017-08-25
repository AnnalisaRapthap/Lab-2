#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float base, height, area;
	cout << "Enter the base of a triangle:" << endl;
	cin >> base;
	cout << "Enter the height of a triangle:" << endl;
	cin >> height;
	area=(base*height)/2;
	cout << "Area of the triangle=" << area;
	return 0;
}

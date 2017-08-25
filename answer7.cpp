#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a,b,c;
	cout << "Enter two angles of a triangle="<< endl;
	cin >> a;
	cin >> b;
	c=180-(a+b);
	cout << "The third angle=" << c;
	return 0;
}

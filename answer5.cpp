#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x,y,z;
	cout << "Enter a number" << endl;
	cin >> x;
	cout << "Enter exponent" << endl;
	cin >> y;
	z=pow(x,y);
	cout << "Result= " << z;
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	float p,r,t,si;
	cout << "Enter the Principal"<< endl;
	cin >> p;
	cout << "Enter the Rate" << endl;
	cin >> r;
	cout << "Enter the Time" << endl;
	cin >> t;
	si=(p*r*t)/100;
	cout << "Simple Interest=" << si <<  endl;

	
	
	
	return 0;
}

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,p,r,t,ci;
	cout << "Enter the Principal"<< endl;
	cin >> p;
	cout << "Enter the Rate" << endl;
	cin >> r;
	cout << "Enter the Time" << endl;
	cin >> t;


	a=p*(pow((1+r/100),t));
	
ci=a-p;
cout << "Compound Interest=" << ci;
	
	
	
	return 0;
}

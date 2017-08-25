#include <iostream>
using namespace std;
int main()
{
	float cm, m,km,i;
	cout << "Enter length in centimeter:" << endl;
	cin >> cm;
	cout << "To convert to meter, press 1" << endl << "to convert to meter, press 2" << endl;
	cin >> i;
	if(i==1)
	{
		m=cm/100;
	cout << "The length in meter=" << m <<"m";
		
	}
	else if(i==2)
	{
		km=cm/100000;
		cout << "The length in kilometer= " << km<<"km";
	}
	else
	cout << "Error";
	
	

	return 0;
}

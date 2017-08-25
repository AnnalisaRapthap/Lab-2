#include <iostream>
using namespace std;
int main()
{
	float days,weeks,months,years,i;
	cout << "Enter Number of days:" << endl;
	cin >> days;
	cout << "Days=" << days<<endl;
		weeks=days/7;
		cout << "Weeks=" << weeks << endl;
	
		months=weeks/4;
		cout << "Months=" << months << endl;
	
		years=months/12;
		cout << "Years=" << years << endl;
	

	

	return 0;
}

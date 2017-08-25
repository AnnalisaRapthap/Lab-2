#include <iostream>
using namespace std;
int main()
{
	float i,m1,m2,m3,m4,m5,t,avg,p;
	cout << "Enter Marks in" << endl << "Maths:" << endl;
	cin >> m1;
	cout << "Computer Science:" << endl;
	cin >> m2;
	cout << "Biology:" << endl;
	cin >> m3;
	cout << "Chemistry:" << endl;
	cin >> m4;
	cout << "Physics:" << endl;
	cin >> m5;
	t=m1+m2+m3+m4+m5;
	avg=t/5;
	p=(t/500)*100;
	cout << "Total Marks=" << t << endl;
	cout << "Average=" << avg << endl;
	cout << "Percentage=" << p <<"%";
	
	
	
	return 0;
}

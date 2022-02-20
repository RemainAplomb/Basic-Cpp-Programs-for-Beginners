#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	float number, total ;
	total= 0 ;
	cout << " Please input a number: " ;
	cin >> number ;
	while (number !=0 )
	{
		total = number + total;
		cout << " The total value is now : " << total << endl;
		cout << " Please input another number : " ;
		cin >> number;
	}
	return 0;
}

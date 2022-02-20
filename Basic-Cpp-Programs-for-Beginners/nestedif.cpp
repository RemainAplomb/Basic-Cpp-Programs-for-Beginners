#include <iostream>

using namespace std;

int main ()
{
	float height;
	cout << " What's your height? (In centimeters) " << endl;
	cout << " Input your answer here : " << endl;
	cin >> height ;
	if ( height <= 165 && height>=160)
	{
		cout << " Your height is on the 'Average' category " << endl;
	}
	else if ( height < 160 && height >=150 )
	{
		cout << " Your height is below average. " << endl;
	}
	else if ( height > 165 && height <=175 )
	{
		cout << " Your height is above average. " << endl;
	}
	else if ( height >175 )
	{
		cout << " You are tall. " << endl;
	} 
	else 
	{
		cout << " Your height is far below average. " << endl;
		cout << " You might want to book an appointment with a doctor " << endl;
	}
	return 0;
}

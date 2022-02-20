#include <iostream>

using namespace std;

int main()
{
	
	int pulse_rate;
	cout << " What's you pulse rate? " << endl;
	cout << " Please input your pulse rate here: " ;
	cin >> pulse_rate ;
	if ( pulse_rate <= 100 && pulse_rate >=60 )
	{
		cout << " Your pulse rate is normal " << endl;
	}
	else 
	{
		cout << " Your pulse rate isn't normal " << endl;
	}
	return 0;
}

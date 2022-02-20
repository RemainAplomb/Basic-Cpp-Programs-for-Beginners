#include <iostream>

using namespace std;

int main ()
{
	
	int crush;
	cout << " How many people has a crush on you? " << endl;
	cout << " Input your answer here: " ;
	cin >> crush ;
	if ( crush >= 0 )
	{
		if ( crush == 0 )
		{
			cout << " You should first focus on your studies. " << endl;
		}
		else if ( crush >0 && crush <=3)
		{
			cout << " You're quite charismatic. " << endl;
		}
		else 
		{
			cout << " You're a chick-magnet. " << endl;
		}
	}
	else 
	{
		cout << " Invalid Input, try again. " << endl;
		
	}
	return 0;
}

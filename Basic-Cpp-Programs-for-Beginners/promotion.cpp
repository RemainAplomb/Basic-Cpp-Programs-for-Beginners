#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
	int yrsworked, recommendation;
	int y, w ;
	cout << " This program will be able to determine if someone is eligible of applying for a promotion or raise" << endl;
	cout << "----------------------------------------------------------------------------------------------------" << endl;
	cout << " Please input the following requirements: " << endl;
	cout << " How long does someone need to work before asking for a promotion/ raise? (Years)";
	cin >> y ;
	cout << " How many recommendations does one need to present before demanding for a raise?" ;
	cin >> w ;
	cout << " -------------------------------------------------------------------------------------------" << endl;
	cout << " How many years has this employee worked?" ;
	cin >> yrsworked ;
	cout << " How many recommendation does he/she have?";
	cin >> recommendation ;
	if ( yrsworked >= y , recommendation >= w)
	{
		cout << " Congratulations, you are eligible to seek promotion." << endl;
	}
	else if (yrsworked >=y , recommendation < w)
	{
		cout << " You need more recommendation(s)." << endl;
	}
	else if (yrsworked < y , recommendation >= w)
	{
		cout << "You have not worked long enough." << endl;
	}
	else
	{
		cout << " You do not have any qualifications to ask for a promotion/raise." << endl;
	}
	
	cout << "-----------------------------------------------------------------------------"<< endl;
	cout << " Thank you for using this program, this was made by Rahmani and Jeiraldine" << endl ;
	return 0;
	
}

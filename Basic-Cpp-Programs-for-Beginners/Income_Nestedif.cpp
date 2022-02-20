/*
    Welcome to our program's code!
    
    This program was designed to determine a family's financial standing in the phillipines, 
    the criteria that we've used in this program was based on rappler's article " Who are the middle class ".
    
    This program uses float data type as it would be operating and accepting inputs in the income variable that might
    have decimals in them. 
    
    In making this program we've searched the internet and the given manual for references that we could  use to further
    our efficiency in making this program.
    
    < This Program was made by Rahmani Dibansa and Jeiraldine Ferma on October 8 , 2018.>
    < This Program will be used in our project on CPEN that'll be submitted on or before October 10,2018 >
    
    References :
    Who are the middle class : https://www.rappler.com/thought-leaders/98624-who-are-middle-class
	Nested if's example : https://www.programiz.com/c-programming/c-if-else-statement
	C++ Lecture Manual : https://lookaside.fbsbx.com/file/C%2B%2B%20Lecture%20Manual.pdf?token=AWxQE46zntRUBmbBPHxzXVQLm2MQ4QByN3czOofy8XSsumY4sPY_JN_Pc0j6MZYNTH85Bu0DLzovlyrtF1LQyDRdWMdqGKoXa5998fe20_KySiKgH1WiJ2O2PNTwYms2pAgBeHx2WjvaeoPSmOK0PSYXnpDKW_OuN2HOdBnNb_PaArUAyB2HtyY1hCWT9XhzoMxZmIvhStTnBuWMfcDHvXHk  

*/


#include <iostream>

using namespace std;

int main ()
{
	
	float income;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " [ Welcome to the Program~~ ] " << endl ;
	cout << " [This program is able to determine your family's financial standing] " << endl ;
	cout << " [Please keep in mind that the program only accepts non-negative whole numbers] " << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " How much does your family earn? (monthly) " << endl;
	cout << " Please input your answer here: " ;
	cin >> income ;
	cout << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	if ( income >= 0 && income <= 7890 )
	{
		cout << "------------------------------------------------------------" << endl << endl;
		cout << " You family is in the 'Poor' bracket. " << endl <<endl;
		cout << "------------------------------------------------------------" << endl << endl;
	}
	else if ( income > 7890 && income <= 15780 )
	{
		cout << "------------------------------------------------------------" << endl << endl;
		cout << " Your family is in the 'Low income' bracket. " << endl << endl;
		cout << "------------------------------------------------------------" << endl << endl;
	}
	else if ( income > 15780 && income <= 31560 )
	{
		cout << "------------------------------------------------------------" << endl << endl;
		cout << " Your family is in the 'Lower middle income' bracket. " << endl << endl;
		cout << "------------------------------------------------------------" << endl << endl;
	}
	else if ( income > 31560 && income <=78900 )
	{
		cout << "------------------------------------------------------------" << endl << endl;
		cout << " Your family is in the 'Middle Class' bracket. " << endl << endl;
		cout << "------------------------------------------------------------" << endl << endl;
	}
	else if ( income > 78900 && income <= 118350)
	{
		cout << "------------------------------------------------------------" << endl << endl;
		cout << " Your family is in the 'Upper Middle Income' bracket. " << endl << endl;
		cout << "------------------------------------------------------------" << endl << endl;
	}
	else if ( income > 118350 && income <= 157800 )
	{
		cout << "------------------------------------------------------------" << endl << endl;
		cout << " Your family is in the 'Upper Income' bracket. " << endl << endl;
		cout << "------------------------------------------------------------" << endl << endl;
	}
	else if ( income > 157800 )
	{
		cout << "------------------------------------------------------------" << endl << endl;
		cout << " Your family is in the 'Rich' bracket. " << endl << endl;
		cout << "------------------------------------------------------------" << endl << endl;
	}
	else 
	{
		cout << "------------------------------------------------------------" << endl << endl;
		cout << " [ Invalid Input ] " << endl << endl ;
		cout << "------------------------------------------------------------" << endl << endl;
	}
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " This Program was made by: " << endl;
	cout << " Rahmani Dibansa and Jeiraldine Ferma " << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	
	return 0;
}

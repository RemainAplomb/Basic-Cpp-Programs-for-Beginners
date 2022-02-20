/*
    Howdy, Fella ~~
	
	Welcome!
	
	This program is a basic calcular that could compute powers using the for loop...
	The process is quite simple: You input your number, and what it is raised into; then, for loop would just repeat until
	the numbers of loops has been met. After that,  the program would just print the total and show it to the user.
	
	< This Program was made by Rahmani Dibansa and Jeiraldine Ferma on October 8 , 2018.>
    < This Program will be used in our project on CPEN that'll be submitted on or before October 10,2018 >
	
	References:
	C++ Lecture Manual : https://lookaside.fbsbx.com/file/C%2B%2B%20Lecture%20Manual.pdf?token=AWxQE46zntRUBmbBPHxzXVQLm2MQ4QByN3czOofy8XSsumY4sPY_JN_Pc0j6MZYNTH85Bu0DLzovlyrtF1LQyDRdWMdqGKoXa5998fe20_KySiKgH1WiJ2O2PNTwYms2pAgBeHx2WjvaeoPSmOK0PSYXnpDKW_OuN2HOdBnNb_PaArUAyB2HtyY1hCWT9XhzoMxZmIvhStTnBuWMfcDHvXHk  
    
*/

#include <iostream>

using namespace std;

int main ()
{
	int number, total;
	int number_of_loops , raised_to ;
	total=1 ;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " Input your desired number : " ;
	cin >> number ;
	cout << " What number is this raised to? " ;
	cin >> raised_to ;
	cout << endl << "------------------------------------------------------------" << endl << endl;
	number_of_loops = raised_to ;
	for ( ; number_of_loops != 0 ; number_of_loops--)
	{
		total *= number ;
	}
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " " << number << " raised to " << raised_to << " is equal to: " <<  total << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " This Program was made by: " << endl;
	cout << " Rahmani Dibansa and Jeiraldine Ferma " << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	return 0 ;
}


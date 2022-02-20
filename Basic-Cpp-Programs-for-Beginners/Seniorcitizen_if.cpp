/*
    Oh, Hello there~
    welcome to the program's code
    
    This program is designed to print the years you still have before becoming a senior citizen.
    If you are under 60 years old, the program will print such, if not , the program would stay silent.
    
    < This Program was made by Rahmani Dibansa and Jeiraldine Ferma on October 8 , 2018.>
    < This Program will be used in our project on CPEN that'll be submitted on or before October 10,2018 >
    
    References:
    if statement's example : https://www.programiz.com/c-programming/c-if-else-statement
	C++ Lecture Manual : https://lookaside.fbsbx.com/file/C%2B%2B%20Lecture%20Manual.pdf?token=AWxQE46zntRUBmbBPHxzXVQLm2MQ4QByN3czOofy8XSsumY4sPY_JN_Pc0j6MZYNTH85Bu0DLzovlyrtF1LQyDRdWMdqGKoXa5998fe20_KySiKgH1WiJ2O2PNTwYms2pAgBeHx2WjvaeoPSmOK0PSYXnpDKW_OuN2HOdBnNb_PaArUAyB2HtyY1hCWT9XhzoMxZmIvhStTnBuWMfcDHvXHk  

*/

#include <iostream>

using namespace std;

int main ()
{
	int age , years_to_go;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " [Welcome!]" << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " How old are you? " << endl;
	cout << " Please input your answer here: ";
	cin >> age;
	cout << endl <<  "------------------------------------------------------------" << endl << endl;
	if ( age < 60)
	{
		years_to_go = 60 - age;
		cout << "------------------------------------------------------------" << endl << endl;
		cout << " You still have " << years_to_go << " year(s) to go before becoming a senior citizen. " << endl << endl;
		cout << "------------------------------------------------------------" << endl << endl;
	}
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " This Program was made by: " << endl;
	cout << " Rahmani Dibansa and Jeiraldine Ferma " << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	return 0 ;
}

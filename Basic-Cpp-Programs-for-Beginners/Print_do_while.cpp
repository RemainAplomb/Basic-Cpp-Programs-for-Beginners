/*

    Welcome, visitor~
    Pleased to have you looking through our work.
    
    This program is capable of printing a string of letters as much as you like. It takes a second to print
    your desired string of letters. 
	
	The program utilizes the iostream, string, and windows.h headers as it would be using the string data type, and the
	Sleep ();
	
	There's really nothing much to say here as the program is a just a basic loop that repeats every second.
	
	< This Program was made by Rahmani Dibansa and Jeiraldine Ferma on October 8 , 2018.>
    < This Program will be used in our project on CPEN that'll be submitted on or before October 10,2018 >
    
    References:
    C++ Lecture Manual : https://lookaside.fbsbx.com/file/C%2B%2B%20Lecture%20Manual.pdf?token=AWxQE46zntRUBmbBPHxzXVQLm2MQ4QByN3czOofy8XSsumY4sPY_JN_Pc0j6MZYNTH85Bu0DLzovlyrtF1LQyDRdWMdqGKoXa5998fe20_KySiKgH1WiJ2O2PNTwYms2pAgBeHx2WjvaeoPSmOK0PSYXnpDKW_OuN2HOdBnNb_PaArUAyB2HtyY1hCWT9XhzoMxZmIvhStTnBuWMfcDHvXHk
    Sleep(); reference : http://www.cplusplus.com/forum/beginner/14954/
    String : https://www.programiz.com/cpp-programming/strings
	      
*/
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main ()
{
	
	string answer ;
	int numberofprints;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " What do you want to print? " << endl;
	cout << " Please input your answer here : " ;
	cin >> answer;
	cout << endl << "------------------------------------------------------------" << endl << endl;
	cout << " How many times do you want to print it? " << endl;
	cout << " Please input your answer here : " ;
	cin >> numberofprints;
	cout << endl << "------------------------------------------------------------" << endl << endl;
	do
	{
		cout << " " << answer << endl ;
		numberofprints--;
		Sleep(1000);
		
	} while ( numberofprints != 0);
	cout << endl << "------------------------------------------------------------" << endl << endl;
	cout << " This Program was made by: " << endl;
	cout << " Rahmani Dibansa and Jeiraldine Ferma " << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	return 0;
}


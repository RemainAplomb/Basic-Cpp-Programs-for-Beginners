/*
    What's poppin'?
    Welcome to our program's sourcode~~
    
    This program is a basic countdown timer that uses the while loop and the Sleep function.
    The program utilizes the directive iostream and windows.h to give life to the countdown that 
    we have on our minds..
    The windows.h directive allows our program to pause for a second.. With that lovely pause, we've made
    our countdown better than the basic example we've seen in the c++ manual.
    
    < This Program was made by Rahmani Dibansa and Jeiraldine Ferma on October 8 , 2018.>
    < This Program will be used in our project on CPEN that'll be submitted on or before October 10,2018 >
    
    References:
    C++ Lecture Manual : https://lookaside.fbsbx.com/file/C%2B%2B%20Lecture%20Manual.pdf?token=AWxQE46zntRUBmbBPHxzXVQLm2MQ4QByN3czOofy8XSsumY4sPY_JN_Pc0j6MZYNTH85Bu0DLzovlyrtF1LQyDRdWMdqGKoXa5998fe20_KySiKgH1WiJ2O2PNTwYms2pAgBeHx2WjvaeoPSmOK0PSYXnpDKW_OuN2HOdBnNb_PaArUAyB2HtyY1hCWT9XhzoMxZmIvhStTnBuWMfcDHvXHk
    Sleep(); reference : http://www.cplusplus.com/forum/beginner/14954/

*/

#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
	int cooldown;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " How long do you want the countdown to last? ( Seconds ) " << endl;
	cout << " Input your answer here: " ;
	cin >> cooldown; 
	cout << endl << "------------------------------------------------------------" << endl << endl;
	cout << " Ready" ;
	Sleep(1000);
    while ( cooldown > 0 )
    {
    	cout << "!" ;
    	Sleep(1000);
		cooldown-=1;
	}
	cout << endl << " Go! " << endl << endl ;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " This Program was made by: " << endl;
	cout << " Rahmani Dibansa and Jeiraldine Ferma " << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	return 0;
}

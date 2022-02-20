/*
    Welcome visitor-san~~
    
    This program is meant to give people the red pill so that they could minimize their expectations.
    Expectations shouldn't be sky high because it might lead to devastating heartbreaks.
    With this thought in mind, we came up with this program! Hooray~~
    
    In making this program, we've added the " #include <string> " to give our program more flexibility 
    when it executes our program.. As we've used the string data type , we are able to operate efficiently.
    
    We've also given our user a better range of answer so they would not bother capitalizing the first letter of their answer.
    
    < This Program was made by Rahmani Dibansa and Jeiraldine Ferma on October 8 , 2018.>
    < This Program will be used in our project on CPEN that'll be submitted on or before October 10,2018 >
    
    references: 
    If_elseif_else example : https://www.programiz.com/c-programming/c-if-else-statement
    C++ Lecture Manual : https://lookaside.fbsbx.com/file/C%2B%2B%20Lecture%20Manual.pdf?token=AWxQE46zntRUBmbBPHxzXVQLm2MQ4QByN3czOofy8XSsumY4sPY_JN_Pc0j6MZYNTH85Bu0DLzovlyrtF1LQyDRdWMdqGKoXa5998fe20_KySiKgH1WiJ2O2PNTwYms2pAgBeHx2WjvaeoPSmOK0PSYXnpDKW_OuN2HOdBnNb_PaArUAyB2HtyY1hCWT9XhzoMxZmIvhStTnBuWMfcDHvXHk  
    
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string yes1 , yes2 , no1 , no2 , answer ;
	yes1 = "Yes" ;
	yes2 = "yes" ;
	no1  = "No"  ;
	no2  = "no"  ;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " Do you think he/she likes you? ( Yes / No ) " << endl;
	cout << " Please input your answer here : " ;
	cin  >> answer ;
	cout << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	if ( answer == yes1 || answer == yes2 )
	{
		cout << "------------------------------------------------------------" << endl << endl;
		cout << " You are overthinking , don't hope for too much. " << endl << endl;
		cout << "------------------------------------------------------------" << endl << endl;
	} 
	else if ( answer == no1 || answer == no2 )
	{
		cout << "------------------------------------------------------------" << endl << endl;
		cout << " You are right. " << endl << endl;
		cout << "------------------------------------------------------------" << endl << endl;
	}
	else 
	{
		cout << "------------------------------------------------------------" << endl << endl;
		cout << " [ Invalid Input ] " << endl << endl;
		cout << "------------------------------------------------------------" << endl << endl;
	}
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " This Program was made by: " << endl;
	cout << " Rahmani Dibansa and Jeiraldine Ferma " << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	return 0;
}

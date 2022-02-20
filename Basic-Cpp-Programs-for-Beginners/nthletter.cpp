/*
    Welcome~~
    
    This is a program that converts numbers into letters. The program is using the switch case, the path that
    the program will take will depend on the user's input.
    
    The program only accepts inputs ranging from 1-26 as there are only 26 letters in the alphabet. Numbers that doesn't 
    belong to this range would automatically be sent to the default case.
    
    This program only uses the iostream header file as the program doesn't need to do complex maths.
    
    < This Program was made by Rahmani Dibansa and Jeiraldine Ferma on October 8 , 2018.>
    < This Program will be used in our project on CPEN that'll be submitted on or before October 10,2018 >
    
    References:
    C++ Lecture Manual : https://lookaside.fbsbx.com/file/C%2B%2B%20Lecture%20Manual.pdf?token=AWxQE46zntRUBmbBPHxzXVQLm2MQ4QByN3czOofy8XSsumY4sPY_JN_Pc0j6MZYNTH85Bu0DLzovlyrtF1LQyDRdWMdqGKoXa5998fe20_KySiKgH1WiJ2O2PNTwYms2pAgBeHx2WjvaeoPSmOK0PSYXnpDKW_OuN2HOdBnNb_PaArUAyB2HtyY1hCWT9XhzoMxZmIvhStTnBuWMfcDHvXHk
    Alphabet : https://en.wikipedia.org/wiki/English_alphabet
    Switch case : https://www.programiz.com/c-programming/c-switch-case-statement
*/

#include <iostream>

using namespace std;

int main ()
{
	int number ;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " [Welcome!]" << endl;
	cout << " [This program is capable of converting numbers into alphabets.] " << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " What number do you want to convert? " ;
	cin >> number ;
	cout << endl << "------------------------------------------------------------" << endl << endl;
	cout << " The " << number << "th letter in the alphabet is:" ;
	
	 
	switch ( number ) 
	{
		case 1:
		cout << " A " << endl ;
		break;
		
		case 2:
		cout << " B " << endl ;
		break;
		
		case 3:
		cout << " C " << endl ;
		break;
		
		case 4:
		cout << " D " << endl ;
		break;
		
		case 5:
		cout << " E " << endl ;
		break;
		
		case 6:
		cout << " F " << endl ;
		break;
		
		case 7:
		cout << " G " << endl ;
		break;
		
		case 8:
		cout << " H " << endl ;
		break;
		
		case 9:
		cout << " I " << endl ;
		break;
		
		case 10:
		cout << " J " << endl ;
		break;
		
		case 11:
		cout << " K " << endl ;
		break;
		
		case 12:
		cout << " L " << endl ;
		break;
		
		case 13:
		cout << " M " << endl ;
		break;
		
		case 14:
		cout << " N " << endl ;
		break;
		
		case 15:
		cout << " O " << endl ;
		break;
		
		case 16:
		cout << " P " << endl ;
		break;
		
		case 17:
		cout << " Q " << endl ;
		break;
		
		case 18:
		cout << " R " << endl ;
		break;
		
		case 19:
		cout << " S " << endl ;
		break;
		
		case 20:
		cout << " T " << endl ;
		break;
		
		case 21:
		cout << " U " << endl ;
		break;
		
		case 22:
		cout << " V " << endl ;
		break;
		
		case 23:
		cout << " W " << endl ;
		break;
		
		case 24:
		cout << " X " << endl ;
		break;
		
		case 25:
		cout << " Y " << endl ;
		break;
		
		case 26:
		cout << " Z " << endl ;
		break;
		
		default:
		cout << " As far as I know, alphabet only has  26 letters. "  << endl ;
		break;
		
	}
	cout << endl << "------------------------------------------------------------" << endl << endl;
	cout << " Thank you for asking for my help. " << endl;
	cout << " If you want to know more about me, you can ask my creators : " << endl;
	cout << " Jeiraldine Maye Sebastian Ferma and  Rahmani Dibansa " << endl;
	cout << " Bye, Bye~ I hope you visit me again.." << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	
	
}

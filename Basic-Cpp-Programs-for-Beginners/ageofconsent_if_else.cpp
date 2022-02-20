/*

    Welcome to the program's source code!
    
    This program is designed to determine if someone is able to legally give consent; the program also operates 
    under the integer data type as it will only be accepting and using whole numbers for the variable 'age'.
    
    If the user inputs a value noneother than non-negative whole numbers, the program would print the error [ Invalid Input].
    If not, then , it will proceed to its goal of determining whether the inputted age is able to give consent under the eyes
	of the civil law.
	
	< This Program was made by Rahmani Dibansa and Jeiraldine Ferma on October 8 , 2018.>
    < This Program will be used in our project on CPEN that'll be submitted on or before October 10,2018 >
    
    References:
    if statement's example : https://www.programiz.com/c-programming/c-if-else-statement
	C++ Lecture Manual : https://lookaside.fbsbx.com/file/C%2B%2B%20Lecture%20Manual.pdf?token=AWxQE46zntRUBmbBPHxzXVQLm2MQ4QByN3czOofy8XSsumY4sPY_JN_Pc0j6MZYNTH85Bu0DLzovlyrtF1LQyDRdWMdqGKoXa5998fe20_KySiKgH1WiJ2O2PNTwYms2pAgBeHx2WjvaeoPSmOK0PSYXnpDKW_OuN2HOdBnNb_PaArUAyB2HtyY1hCWT9XhzoMxZmIvhStTnBuWMfcDHvXHk
	Legal age meaning : https://www.merriam-webster.com/dictionary/legal%20age
	Legal age: http://www.slate.com/articles/news_and_politics/explainer/2013/04/new_york_minimum_smoking_age_why_are_young_people_considered_adults_at_18.html

*/


#include <iostream>

using namespace std;

int main ()

{
	
	int age;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " This program is able to determine if a person is of legal age."<< endl << endl ;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " How old are you? " << endl ;
	cout << " Please input your age here : " ;
	cin >> age ;
	cout << endl << "------------------------------------------------------------" << endl << endl;
	if ( age >= 1 )
	{
		if ( age >= 18)
	    {
	    	cout << "------------------------------------------------------------" << endl << endl;
		    cout << " You are of legal age, you are legally allowed to give consent" << endl << endl;
			cout << "------------------------------------------------------------" << endl << endl;	
        }
	    else 
	    {
	    	cout << "------------------------------------------------------------" << endl << endl;
	        cout << " You are not old enough,and you are not legally allowed to give consent" << endl << endl;
	        cout << "------------------------------------------------------------" << endl << endl;
	    }
    }
	else 
	{
		cout << "------------------------------------------------------------" << endl << endl;
	    cout << " [ Invalid Input ] " << endl << endl;
	    cout << "------------------------------------------------------------" << endl << endl;
	}
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " Only people of or above 18 years old are allowed to legally give consent. " << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	cout << " This Program was made by: " << endl;
	cout << " Rahmani Dibansa and Jeiraldine Ferma " << endl << endl;
	cout << "------------------------------------------------------------" << endl << endl;
	 return 0;
}

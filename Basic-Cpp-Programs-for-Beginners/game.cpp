#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()

{
//-------------------------------------------------------------------------------------------------------------//
	string y1 , y2 , n1 , n2 , reply;
	y1= "Yes";
	y2= "yes";
	n1= "No" ;
	n2= "no" ;
///-----------------------------------------------------------------------------------------------------------//	
    // Initialization
    string name , gender ;
	cout << " ////////////////////////////////////////////////" << endl;
	cout << " [ What's your name? ] " << endl;
	cin >> name;
	//cout << " [ Gender? ] " << endl ;
	//cin >> gender ;
	cout << " \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
//------------------------------------------------------------------------------------------------------------//	
	// Scene one
	cout << " CONG: Oh! Hello, young lad! Do you wish to play the game of Luck?" << endl;
	cout << " [ Do you wish to play? Yes/No ] ";
	cin >> reply ;
	cout << " "<< name << ": " << reply << endl ;
	
//-----------------------------------------------------------------------------------------------------------//
	if ( reply == y1 || reply == y2 ) 
	{
		string pa1 , pa2 , pn1 , pn2 , r1;
		pa1= "Yes";
		pa2= "yes";
		cout << " CONG: That's a great answer~ " << endl;
		cout << " CONG: Welcome to the game of Luck! " << endl;
		explanation:
		cout << " CONG: I have a dice here..." << endl;
		cout << " CONG: All you have to do is predict the side that'll come out." << endl;
		cout << " CONG: Get it? " << endl;
		cout << " [ CONG is asking you if you are on the same page. Yes/No ]";
		cin >> r1;
		cout << " " << name << ": " << r1 << endl;
		if ( r1 == pa1 || r1 == pa2 ) 
		{
			int dpick, danswer;
			cout << " CONG: Good... " << endl;
			cout << " CONG: Let's start! " << endl;
			dicepick:
			cout << " CONG: Pick your number. " << endl ;
			cin >> dpick ;
			cout << " " << name << ": " << dpick << endl;
			if ( dpick <= 6 && dpick >= 1)
			{
			    cout << " < CONG took a deep breath and tossed the dice > " << endl;	
			    //srand(time(NULL));
			    danswer = rand () % 6 + 1 ;
			     if ( dpick != danswer)
			    {
				    cout << " CONG: Wrong, Try again kid. " << endl;
				    goto dicepick;
		        }
		         else
		        {
		    	    cout << " CONG: Congratulations kid, you've guessed right." << endl;
		    	    cout << " CONG: Thank you for participating in my little game. " << endl;
			    }
		    }
		    else 
		    {
		    	cout << " CONG: You can only pick numbers ONE TO SIX." << endl;
		    	goto dicepick;
			}
				
		}
		else if ( r1 == pn1 || r1 == pn2 )
		{
			cout << " CONG: Okay, let me repeat." << endl;
			goto explanation;
		}
		else
		{
			cout << " CONG: Are you Retarded?" << endl ;
			goto explanation;
		}
	}
	else if ( reply == n1 || reply == n2 )
	{
		cout << " Too bad, I wish you had time to play my game" << endl;
	}
	else
	{
		cout << "[ That's not a valid answer ]" << endl;
	}
	
	cout << "--------------------------------------------------" << endl;
	cout << " Thank you for using our program." << endl;
	cout << " This is made by Rahmani and Jeiraldine " << endl;
	cout << "--------------------------------------------------" << endl;
	
	return 0;
}

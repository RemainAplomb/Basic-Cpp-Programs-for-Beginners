#include <iostream>
#include <cmath>

using namespace std;

int main ()

{
	
	int age;
	cout << " This program is able to determine if a person can legally give consent."<< endl ;
	cout << "----------------------------------------------------------------------------" << endl ;
	cout << " Please input your age: " ;
	cin >> age ;
	if ( age >= 18)
	{
		cout << " You are legally allowed to give consent" << endl;
	 } 
	 else 
	 {
	 	cout << " You are not legally allowed to give consent" << endl ;
	 }
	 cout << " Please keep in mind that children below eighteen years of age are not legally allowed to give consent" << endl;
	 cout << "---------------------------------------------------------------------------------------------------------" << endl;
	 cout << " This was made by Jeiraldine and Rahmani.";
	 return 0;
}

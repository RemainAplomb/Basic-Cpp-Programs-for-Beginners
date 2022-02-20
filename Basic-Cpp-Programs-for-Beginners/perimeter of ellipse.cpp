#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	float a , b , p ;
	cout << "Input the value of the major axis: " << endl;
	cin >> a ;
	cout << "Input the value of the minor axis: " << endl;
	cin >> b ;
	p= M_PI*((3*(a+b))-(sqrt(((3*a)+b)*(a+(3*b)))));
	cout << " The perimiter of the ellipse is : " << p ;
	return 0;
	
}

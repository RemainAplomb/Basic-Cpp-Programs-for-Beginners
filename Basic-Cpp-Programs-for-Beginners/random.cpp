#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{
	int iguess , isecret;
	
	srand (time(0));
	isecret= rand() % 10 + 1 ;
	cout << isecret << endl;
	return 0;
}

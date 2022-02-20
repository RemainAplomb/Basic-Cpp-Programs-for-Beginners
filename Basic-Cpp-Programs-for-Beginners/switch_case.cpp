#include <iostream>

using namespace std;

int main ()
{
	int answer;
	cout << " What's your blood type? " << endl;
	cout << " If your blood type is O , pick '1' " << endl;
	cout << " If your blood type is A , pick '2' " << endl;
	cout << " If your blood type is B , pick '3' " << endl;
	cout << " If your blood type is AB , pick '4' " << endl;
	cout << "---------------------------------------------" << endl;
	cout << " Please input your answer here : " << endl;
	switch (answer)
	{
		case 1:
			cout << " Your blood is compatible with every blood type " << endl;
			break;
		case 2:
			cout << " Your blood is compatible with A and AB blood types" << endl;
			break;
		case 3:
			cout << " Your blood is compatible with B and AB blood types" << endl;
			break;
		case 4:
			cout << " Your blood is only compatible with other AB blood type" << endl;
			break;
	}
	return 0;
}

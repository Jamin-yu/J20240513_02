#include <iostream>

using namespace std;

int main()
{
	for (int Line = 1; Line <=5; ++Line)
	{ 
		for (int count = 1; count <= Line; ++count)
		{ 
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
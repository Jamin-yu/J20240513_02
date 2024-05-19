#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	cin >> N;

	for (int Line = 1; Line <=N; ++Line)
	{ 
		for (int count = 1; count <= N-Line; ++count)
		{
			cout << " ";
		}

		for (int count = 1; count <= Line; ++count)
		{ 
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
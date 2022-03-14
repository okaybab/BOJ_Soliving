#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n == 0)
		n = 1;

	for (int i = n - 1; 0 < i; i--)
	{
		n *= i;
	}

	cout << n << endl;

	return 0;
}
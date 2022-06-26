#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	while (n != 0)
	{
		int a = 0, b = 0;
		cin >> a >> b;
		cout << a + b << endl;
		n--;
	}

	return 0;
}
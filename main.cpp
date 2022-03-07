#include <iostream>

using namespace std;

bool IsPrime(int num)
{
	for (int n = 2; n < num; n++)
	{
		if ((num % n) == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int num, count = 0;
	int* N;
	cin >> num;

	N = new int[num];

	for (int i = 1; i != num; i++)
	{
		cin >>N[i];
		if (N[i] != 1 && IsPrime(N[i]))
		{
			count ++;
		}
	}
	cout << count;

	delete[]N;
	return 0;
}
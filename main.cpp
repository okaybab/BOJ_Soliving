#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int power, n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num = i;
		int JisuSum = 0;

		for (int jarisu = log10(i); jarisu >= 0; jarisu--)
		{
			JisuSum += floor(num / pow(10, jarisu));
			num -= floor(num / pow(10, jarisu)) * pow(10, jarisu);
		}

		if (n == (i + JisuSum))
		{
			cout << i;
			return 0;
		}
	
	}
	cout << 0;

	return 0;
}
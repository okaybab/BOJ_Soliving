#include <iostream>

using namespace std;

bool IsCounting(int* str, int N)
{
	for (int i = 0, count = 0; i <= N - 1; i++)
	{
		if (str[i] < str[i + 1])
		{
			count++;
			if (count == N - 1)
			{
				cout << count << endl;
				return true;
			}
		}
		else
		{
			return false;
		}

	}
	return false;
}


int main()
{
	int N, str[4];

	cin >> N;


	for (int i = 0; i < N; i++)
	{
		cin >> str[i];
	}

	while (!IsCounting(str, N))
	{
	
	int num;
	cin >> num;
	
	int tmp = str[0];
	for (int i = 1; i <= num; i++)
	{
		str[i - 1] = str[i];
	}
	str[num] = tmp;

	}
	return 0;
}
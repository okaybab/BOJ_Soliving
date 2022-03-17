#include <iostream>
#include <vector>
using namespace std;

vector<int> number;

int NumberArray(int n, int m)
{
	int sum = 0;

	for (int top_n = n; top_n > 1; top_n--)
	{
		for (int middle_n = top_n - 1; middle_n > 0; middle_n--)
		{
			for (int end_n = middle_n - 1; end_n > -1; end_n--)
			{
				int result = number[top_n] + number[middle_n] + number[end_n];

				if(sum < result && result <= m)
					sum = result;
			}

		}

	}
	return sum;
}


int main()
{

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		number.push_back(A);
	}

	
	cout << NumberArray(number.size() - 1, M);
	

	return 0;
}
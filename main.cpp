#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> number;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		number.push_back(A);
	}

	sort(number.begin(), number.end());

	for (auto it = number.begin(); it < number.end(); it++)
	{
		cout << *it << endl;
	}
	

	return 0;
}
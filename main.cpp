#include <iostream>

using namespace std;

int num[21];

int Fibonachi(int n)
{
	if (n == 0)
		return n;

	if (n == 1 || n == 2)
		return num[n] = 1;

	if (num[n] != 0)
		return num[n];

	return num[n] = Fibonachi(n - 1) + Fibonachi(n - 2);

}


int main()
{
	int n;
	cin >> n;
	cout << Fibonachi(n) << endl;

	return 0;
}
#include <iostream>
#include <math.h>

using namespace std;

// n * logn?
//������ ���� �߿��� ���Ѱ��� ����
bool ArrayNumber[1000001];

int main()
{
	int A, B;
	cin >> A >> B;


	for (int i = 2; i <= sqrt(B); i++ )
	{
		if (ArrayNumber[i])
			continue;

		for (int j = 2; i * j <= B; j++)
		{
			ArrayNumber[i * j] = true;
			
		}
		
	}
	
	ArrayNumber[1] = true;

	for (int i = A; i <= B; i++)
	{
		if (!ArrayNumber[i])
		{
			printf("%d\n", i);
			
		}
	}
	return 0;
}
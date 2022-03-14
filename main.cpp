#include <iostream>
#include <math.h>
#define MAX 100001

using namespace std;

bool ArrayNumber[MAX];
void LoopPrime()
{
	for (int i = 2; i <= sqrt(MAX); i++)
	{
		if (ArrayNumber[i])
			continue;

		for (int j = 2; i * j <= MAX - 1; j++)
		{
			ArrayNumber[i * j] = true;

		}

	}

	ArrayNumber[1] = true;

}

int main()
{
	LoopPrime();

	int T; 

	cin >> T;

	for (int Tn = 0; Tn < T; Tn++)
	{
		int N, A = 0, B = 0;
		cin >> N;

		if (sqrt(N) == N / 2 )
		{
		
			A = B = N / 2;
			printf("%d %d\n", A, B);
			continue;
		}

		for (int i = (N / 2) - !((N / 2) % 2); 2 < i; i = i - 2)
		{
			A = i;
			B = N - A;
			
		
			if(!ArrayNumber[A] && !ArrayNumber[B])
			{
	
				printf("%d %d\n", A, B);
				break;
			}

		}
	}
	
	return 0;

}
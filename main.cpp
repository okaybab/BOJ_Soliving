#include <iostream>
#include <math.h>

using namespace std;

/* 4948�� ����Ʈ�� ����
0�� ���������� �����޾� �Ҽ� ������ ���ϴ� ����
1929������ ���� while���� ��¹��� �ٲ���
*/

bool ArrayNumber[246914];

int main()
{
	
	while (true)
	{
		int A, B, count = 0;

		cin >> A;

		if (A == 0)
			break;

		B = A * 2;

		for (int i = 2; i <= sqrt(B); i++)
		{
			if (ArrayNumber[i])
				continue;

			for (int j = 2; i * j <= B; j++)
			{
				ArrayNumber[i * j] = true;

			}

		}

		ArrayNumber[1] = true;

		for (int i = A + 1; i <= B; i++)
		{
			if (!ArrayNumber[i])
			{
				count++;

			}
		}

		cout << count << endl;

	}

	return 0;
}
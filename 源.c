#include <stdio.h>


int trial(int a)
{
	int m = 0;
	int n = a;
	for (int i = 0; 1; i++)
	{
		int x = n / 10;
		int y = n % 10;
		if (x == 0 && y == 0)
		{
			n = a;
			for (int j = 0; j < i; j++)
			{
				m = m * 10 + n % 10;
				n = n / 10;

			}
			if (a == m)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			n = n / 10;
		}
	}
}


main()
{
	int num = 0;
	scanf_s("%d", &num);
	int result = trial(num);
	if (result == 1)
	{
		printf("%d是回文数", num);
	}
	else
	{
		printf("%d不是回文数", num);
	}

	return 0;
}
#include <stdio.h>
int main()
{
	int k, prime[100] = {}, check, i;
	prime[0] = 2;
	for (i = 3; i <= 1000; i++)
	{
		check = 0;
		while (prime[check] != 0)
		{
			if (i % prime[check] == 0)
			{
				break;
			}
			else
			{
				check++;
				if (prime[check] == 0)
				{
					prime[check] = i;
				}
			}
		}
	}
	
	i = 0;
	scanf("%d", &k);
	while (k > 1)
	{
		if (k%prime[i] == 0)
		{
			printf("%d\n", prime[i]);
			k /= prime[i];
		}
		else
		{
			i++;
		}
	}
	printf("0");
	return 0;
}

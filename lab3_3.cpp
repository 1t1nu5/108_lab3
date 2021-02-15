#include <stdio.h>
int main()
{
	int k, prime[100] = {}, check, i = 3;
	prime[0] = 2;
	loop:
	if (i > 1000)
	{
		goto exit;
	}
		check = 0;
		while (prime[check] != 0)
		{
			if (i % prime[check] == 0)
			{
				i++;
				goto loop;
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
		i++;
		goto loop;
	exit:
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

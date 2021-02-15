#include <stdio.h>
int main()
{
	int k, prime[95] = {}, nprime = 0, i, finder;
	prime[0] = 2;
	for (i = 1; i < 1000; i++)
	{
		for (finder = 0; finder < nprime; finder++)
		{
			if (i % prime[finder] == 0)
			{
				break;
			}
			nprime++;
			prime[nprime] = i;
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

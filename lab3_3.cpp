#include <stdio.h>
int main()
{
	int k, prime[95] = {}, nprime = 0, i, finder = 0;
	for (i = 2; i < 1000; i++)
	{
		for (finder = 0; finder <= nprime; finder++)
		{
			if (i % prime[i] == 0)
			{
				break;
			}
		}
	}
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

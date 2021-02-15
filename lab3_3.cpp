#include <stdio.h>
int main()
{
	int k, prime[95] = {}, nprime = 0, i = 2, finder = 0;
	while (i < 500)
	{
		for (finder = 0; finder <= nprime; finder++)
		{
			
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

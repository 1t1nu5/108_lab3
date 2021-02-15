#include <stdio.h>
int main()
{
	int k, prime[95] = {}, i = 0;
	scanf("%d", &k);
	while (k > 1)
	{
		if (i == 95)
		{
			break;
		}
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
	if (k > 500)
	{
		printf("%d\n0", k);
	}
	else
	{
		printf("0");
	}
	return 0;
}

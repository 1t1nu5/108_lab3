#include <stdio.h>
int main()
{
	int k, prime[95] = {}, nprime = 0;
	
	
	
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

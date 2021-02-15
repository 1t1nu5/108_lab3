#include <stdio.h>
int main()
{
	int p[100] = {}, pos = 0, check = 0, n;
	for (n = 2; n <= 1000; n++)
	{
		check = 0;
		while (p[check] != 0)
		{
			if (n % p[check] == 0)
			{
				break;
			}
			else
			{
				check++;
			}
		}
		p[check] = n;
	}
	int i, k;
	scanf("%d", &k);
	while (k > 1)
	{
		if (k%p[i] == 0)
		{
			printf("%d\n", p[i]);
			k /= p[i];
		}
		else
		{
			i++;
		}
	}
	printf("0");
	return 0;
}

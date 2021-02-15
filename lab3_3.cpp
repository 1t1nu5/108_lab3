#include <stdio.h>
int main()
{
	int p[100] = {}, pos = 0, check = 0, n;
	for (n = 2; n <= 1000; n++)
	{
		check = 0;
		while (true)
		{
			if (p[check] == 0)
			{
				p[check] = n;
				break;
			}
			if (n % p[check] == 0)
			{
			
				break;
			}
			else
			{
				check++;
				break;
			}
		}
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

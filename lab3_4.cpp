#include <stdio.h>
int main()
{
	int p[500000] = {}, pos = 0, check = 0, n;
	for (n = 2; n <= 2000000; n++)
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
			}
		}
	}
	int receive, i;
	scanf("%d", &receive);
	for (i = 0; p[i] <= receive; i++);
	if (p[i] == receive)
	{
		printf("%d", receive);
	}
	else
	{
		if (p[i] - receive > receive - p[i-1])
		{
			printf("%d", p[i]);
		}
		else
		{
			printf("%d", p[i-1]);
		}
	}
	return 0;
}

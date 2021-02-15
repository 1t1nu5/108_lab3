#include <stdio.h>
int main()
{
	int receive, i;
	scanf("%d", &receive);
	int p[2000] = {}, pos = 0, check = 0, n;
	for (n = 2; n <= 10000; n++)
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
	for (int i = 0; receive >= p[i]*p[i+1]*p[i+2]; i++)
	{
		if (p[i]*p[i+1]*p[i+2] == receive)
		{
			printf("%d is a Lucky Number.", receive);
			return 0;
		}
	}
	printf("%d is not a Lucky Number.", receive);
	return 0;
}

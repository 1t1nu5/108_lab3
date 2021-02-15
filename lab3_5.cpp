#include <stdio.h>
int main()
{
	int receive, i;
	scanf("%d", &receive);
	int p[100] = {}, pos = 0, check = 0, n;
	for (n = 2; n <= 100; n++)
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
	
	return 0;
}

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
				printf("%d\n", n);
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

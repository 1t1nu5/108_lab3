#include <stdio.h>
int main()
{
	int p[1000000] = {}, pos = 0, check = 0, n;
	for (n = 2; n <= 1000000; n++)
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

#include <stdio.h>
int main()
{
	int k;
	scanf("%d", &k);
	while (k > 1)
	{
		if (k%2==0)
		{
			printf("2\n");
			k /= 2;
		}
		else if (k%3==0)
		{
			printf("3\n");
			k /= 3;
		}
	}
	return 0;
}

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
		else if (k%5==0)
		{
			printf("5\n");
			k /= 5;
		}
		else if (k%7==0)
		{
			printf("7\n");
			k /= 7;
		}
		else if (k%11==0)
		{
			printf("11\n");
			k /= 11;
		}
		else if (k%13==0)
		{
			printf("13\n");
			k /= 13;
		}
		else if (k%17==0)
		{
			printf("17\n");
			k /= 17;
		}
		else if (k%19==0)
		{
			printf("19\n");
			k /= 19;
		}
		else if (k%23==0)
		{
			printf("23\n");
			k /= 23;
		}
		else if (k%29==0)
		{
			printf("29\n");
			k /= 29;
		}
		else if (k%31==0)
		{
			printf("31\n");
			k /= 31;
		}
		else if (k%37==0)
		{
			printf("37\n");
			k /= 37;
		}
		else if (k%41==0)
		{
			printf("41\n");
			k /= 41;
		}
		else if (k%43==0)
		{
			printf("43\n");
			k /= 43;
		}
		else if (k%47==0)
		{
			printf("47\n");
			k /= 47;
		}
		else if (k%53==0)
		{
			printf("53\n");
			k /= 53;
		}
		else if (k%59==0)
		{
			printf("59\n");
			k /= 59;
		}
		else if (k%61==0)
		{
			printf("61\n");
			k /= 61;
		}
		else if (k%67==0)
		{
			printf("67\n");
			k /= 67;
		}
		else if (k%71==0)
		{
			printf("71\n");
			k /= 71;
		}
		else if (k%73==0)
		{
			printf("73\n");
			k /= 73;
		}
		else if (k%79==0)
		{
			printf("79\n");
			k /= 79;
		}
	}
	return 0;
}

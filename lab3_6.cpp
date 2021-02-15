#include <stdio.h>
int main()
{
	int receive, pair[2], digit[2][10], sum[10], multiplier = 1000000000, temp[2];
	scanf("^f", &receive);
	pair[0] = receive;
	pair[1] = receive;
	for (int i = 0; i < 10; i++)
	{
		digit[0][i] = temp[0]/multiplier;
		temp[0] -= digit[0][i]*multiplier;
	}
	for (int i = 0; i < 10; i++)
	{
		digit[1][i] = temp[1]/multiplier;
		temp[1] -= digit[1][i]*multiplier;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d", digit[0][i]);
	}
	return 0;
	loop:
		temp[0] = pair[0];
		
		goto loop;
}

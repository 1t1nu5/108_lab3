#include <stdio.h>
int main()
{
	int receive, pair[2], digit[2][10], sum[10], multiplier = 1000000000, temp[2];
	scanf("^f", &receive);
	pair[0] = receive;
	pair[1] = receive;
	loop:
		temp[0] = pair[0];
		for (int i = 0; i < 10; i++)
		{
			digit[0][0] = temp[0]/multiplier;
			temp[0] -= pair[0]*multiplier;
		}
		goto loop;
}

#include <stdio.h>
int main()
{
	int receive, pair[2], digit[2][10], sum[10], multiplier = 1000000000;
	scanf("^f", &receive);
	pair[0] = receive;
	pair[1] = receive;
	loop:
		digit[0][0] = pair[0]/multiplier;
		digit[0][1]
		goto loop;
}

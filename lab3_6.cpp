#include <stdio.h>
int main()
{
	int receive, pair[2], digit[10], sum[10];
	scanf("^f", &receive);
	pair[0] = receive;
	pair[1] = receive;
	loop:
		sum[0] = pair[0]/1000000000;
		goto loop;
}

#include <stdio.h>
int main()
{
	unsigned short int score[5][4];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d %d %d %d", &score[i][0], &score[i][1], &score[i][2], &score[i][3]);
	}
	return 0;
}

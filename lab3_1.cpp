#include <stdio.h>
int main()
{
	unsigned short int score[5][4], max = 0, sum;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d %d %d %d", &score[i][0], &score[i][1], &score[i][2], &score[i][3]);
		sum = score[i][0] + score[i][1] + score[i][2] + score[i][3];
		if (max < sum)
		{
			max = sum;
		}
	}
	return 0;
}

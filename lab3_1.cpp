#include <stdio.h>
int main()
{
	unsigned short int score[5][4], max[2] = {}, sum;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d %d %d %d", &score[i][0], &score[i][1], &score[i][2], &score[i][3]);
		sum = score[i][0] + score[i][1] + score[i][2] + score[i][3];
		if (max[1] < sum)
		{
			max[0] = i;
			max[1] = sum;
		}
	}
	printf("%d %d", max[0]+1, max[1]);
	return 0;
}

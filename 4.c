#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int son(int a, int b)
{
	return rand()%(b - a + 1) + a;
}
int main()
{
	srand(time(NULL));
	int n, k;
	printf("Qator va ustunni kiriting: ");
	scanf("%d%d", &n, &k);
	int ms[n][k];
	printf("----------BEFORE----------\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			ms[i][j] = son(1,9);
			printf("%d ", ms[i][j]);
		}
		printf("\n");
	}
	printf("----------AFTERE----------\n");
	for (int i = 0; i < n; i++)
        {
                for (int j = 0; j < n; j++)
                {
			if (ms[i] == ms[j] || i+j == n-1)
			{
				ms[i][j] = 0;
			}
                        printf("%d ", ms[i][j]);
                }
                printf("\n");
        }
	return 0;
}

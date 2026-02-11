#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int son(int a, int b)
{
	return rand()%(b - a + 1) + a;
}
int main()
{
	srand(time(NULL));
	int n;
	printf("Massiv uzunligini kiriting: ");
	scanf("%d", &n);
	int ms[n], res = 0;
	printf("Random sonlar: ");
	for (int i = 0; i < n; i++)
	{
		ms[i] = son(10,99);
		printf("%d ", ms[i]);
		res = res + ms[i];
	}
	printf("\nNatija: %d\n", res);
	return 0;
}

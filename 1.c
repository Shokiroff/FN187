#include <stdio.h>
int main()
{
	int n;
	printf("Sonni kiriting: ");
	scanf("%d", &n);
	int n1 = 0, n2 = 0;
	while (n > 0)
	{
		n1 = n % 10;
		n2 = n2 + n1 * n1;
		n = n / 10;
	}
	printf("Natija: %d\n", n2);
	return 0;
}

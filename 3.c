#include <stdio.h>
#include <string.h>
int main()
{
	char ms[100];
	char ms1[100];
	printf("1-sonni kiriting: ");
	scanf("%s", ms);
	printf("2-sonni kiriting: ");
        scanf("%s", ms1);
	int n = strlen(ms1);
	int k = strlen(ms1);
	int cnt = 0;
	for (int i = n ; i >= 0; i--)
        {
		ms[i+k] = ms[i];
        }
	for (int i = 0; i < k; i++)
	{
		ms[i] = ms1[i];
	}
	printf("%s\n", ms);
	return 0;

}

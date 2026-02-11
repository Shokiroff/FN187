#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
bool harf(char c)
{
	return c == 'a' || c == 'e' || c == 'i' || c =='o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c =='O' || c == 'U';
}
int main()
{
	char ms[1000];
	printf("Satrni kiriting: ");
	scanf("%[^\n]%*c", ms);
	int n = strlen(ms);
	for (int i = 0; i < n; i++)
	{
		if (isalpha(ms[i]))
		{
			if (harf(ms[i]) == false)
			{
				ms[i] = '*';
			}
		}
	}
	puts(ms);
	return 0;
}

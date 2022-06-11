#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main()
{
	char q = 0;
	scanf("%c", &q);
	int w = isalpha(q);
	if (w)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
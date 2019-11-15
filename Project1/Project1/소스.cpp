#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int j = 0; j < 5; j++)
	{
		for (int i = 5; i > 0; i--) {
			if (i > j + 1) {
				printf(" ");
			}
			else
				printf("%d", i);

		}
		puts("");
	}
}
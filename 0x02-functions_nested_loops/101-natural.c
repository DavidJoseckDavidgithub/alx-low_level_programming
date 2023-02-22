#include "main.h"
#include <stdio.h>
/**
 *main - entry point
 *Return: zero if success
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

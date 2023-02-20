#include <stdio.h>
/**
 * main - prints different combination of three digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int s, w, p;

	for (s = 48; s < 58; s++)
	{
		for (w = 49; w < 58; w++)
		{
			for (p = 50; p < 58; p++)
			{
				if (p > w && w > s)
				{
					putchar(s);
					putchar(w);
					putchar(p);
					if (s != 55 || w != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

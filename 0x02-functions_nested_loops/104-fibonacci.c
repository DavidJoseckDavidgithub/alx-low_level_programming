/**
 * main - Prints the first 98 fibonacci numbers
 * Return: 0 if success
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 96)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		++i;
	}
	printf('\n');
	return (0);
}

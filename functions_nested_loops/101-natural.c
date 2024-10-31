#include <stdio.h>

/**
 * sum_multiples - Calculates the sum of multiples of 3 or 5
 *                 below a given limit.
 * @limit: The upper limit for the calculation (excluded).
 *
 * Return: The sum of all multiples of 3 or 5 below the limit.
 */
int sum_multiples(int limit)
{
	int i, sum = 0;

	/* Negatif limit durumunu kontrol et */
	if (limit <= 0)
		return (0);

	/* 0 ile limit-1 arasındaki sayılar üzerinde döngü oluştur */
	for (i = 0; i < limit; i++)
	{
		/* 3 veya 5'in katı olup olmadığını kontrol et */
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	return (sum);
}

/**
 * main - Entry point of the program, calculates and prints
 *        the sum of all multiples of 3 or 5 below 1024.
 *
 * Return: Always 0.
 */
int main(void)
{
	int result = sum_multiples(1024);

	printf("%d\n", result);

	return (0);
}


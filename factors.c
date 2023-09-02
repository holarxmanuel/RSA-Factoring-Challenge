#include <stdio.h>

/**
 * customFactorize - Factorize a number into two smaller numbers
 * @targetNumber: The number to factorize
 */
void customFactorize(long long int targetNumber);

/**
 * main - Entry point of the program
 * Return: 0 on success
 */
int main(void)
{
	long long int myNumber = 239809320265259;

	customFactorize(myNumber);

	return (0);
}

/**
 * customFactorize - Factorize a number into two smaller numbers
 * @targetNumber: The number to factorize
 *
 * Description: This function factors a given number into two smaller numbers.
 * It prints the result to the standard output.
 */
void customFactorize(long long int targetNumber)
{
	long int primaryFactor = 2;
	long int secondaryFactor;

	while (targetNumber % primaryFactor != 0)
	{
		if (primaryFactor <= targetNumber)
		{
			primaryFactor++;
		}
		else
		{
			printf("Unable to factorize %lld\n", targetNumber);
			return;
		}
	}

	secondaryFactor = targetNumber / primaryFactor;
	printf("%lld = %ld * %ld\n", targetNumber, primaryFactor, secondaryFactor);
}

#include <stdio.h>

/**
 * main - Print all the first 100 fibonacci numbers whitout using
 * long long int or not usual library
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int n1, n1a, n1b, n2, n2a, n2b, n3, n3a, n3b, i, j;

	n1 = 1;
	n2 = 2;

	n3 = n1 + n2;

	printf("%li, ", n1);
	printf("%li, ", n2);
	for (i = 3; i < 89; i++)  /* unsigned int storage stop here*/
	{
		printf("%li, ", n3);
		n1 = n2;
		n2 = n3;
		n3 = n1 + n2;
	}
	n2a = n2 / 1000000000;
	n2b = n2 % 1000000000;
	n3a = n3 / 1000000000;
	n3b = n3 % 1000000000;
	for (j = 89; j < 98; j++) /* start to cut the long in half */
	{
		printf("%li%li, ", n3a, n3b);
		n1a = n2a;
		n1b = n2b;
		n2a = n3a;
		n2b = n3b;
		n3a = n1a + n2a + ((n1b + n2b) / 1000000000);
		n3b = (n1b + n2b) % 1000000000;
	}
	printf("%li%li\n", n3a, n3b);
	return (0);
}

/**
 * main - It prints the sizes of the various data types on the compiler used
 *
 * Return: It returns the value 0 upon successful excecution.
 */
int main(void)
{
	printf("Size of a %s: %d byte(s)\n", "char", sizeof(char));
	printf("Size of a %s: %d byte(s)\n", "int", sizeof(int));
	printf("Size of a %s: %d byte(s)\n", "long int", sizeof(long int));
	printf("Size of a %s: %d byte(s)\n", "long long int", sizeof(long long int));
	printf("Size of a %s: %d byte(s)\n", "float", sizeof(float));

	return (0);
}

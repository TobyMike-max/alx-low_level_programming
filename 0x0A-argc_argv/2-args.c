#include <stdio.h>
/**
 * main - Prints all arguments it receives.
 * @argc: The number of command line argument.
 * @argv: An array containing pointers to the command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

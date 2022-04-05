#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - Concatenates all arguments of the program into a string;
 * arguments are separated by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 * Return: If ac == 0, av == NULL, or the function fails - NULL,
 * Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	/* Initialize variables */
	char *str;
	int arg, byte, i, size = ac;
	/* Check to see if argument is more than 1 */
	if (ac == 0 || av == NULL)
		return (NULL);
	/* count the number of chars in each string */
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}
	/*
	 * allocates memory for total number of chars and ending character
	 * with new line after each word
	 */
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = '\n';
	}
	/* assign ending NULL character to last char */
	str[size] = '\0';
	/* return pointer to string */
	return (str);
}

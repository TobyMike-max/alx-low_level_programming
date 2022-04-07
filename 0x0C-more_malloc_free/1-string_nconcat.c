#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings using
 * at most an inputted number of bytes.
 * @s1: The first string
 * @s2: The second string
 * @n: Te maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int len = n, i;
	/* Checks to see if the two strings are NULL values */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	/**
	 *  Counts the number of characters in s1 string
	 *   while also adding the length of n
	 */
	for (i = 0; s1[i]; i++)
		len++;
	/* Allocate memory for the concatenated string */
	mem = malloc(sizeof(char) * (len + 1));
	/* Checks to see if memory is NULL */
	if (mem == NULL)
		return (NULL);
	/* Sets len back to zero */
	len = 0;
	/* Inputs the values of the strings into the allocated memory */
	for (i = 0; s1[i]; i++)
		mem[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		mem[len++] = s2[i];

	mem[len] = '\0';
	/* Return the address */
	return (mem);
}

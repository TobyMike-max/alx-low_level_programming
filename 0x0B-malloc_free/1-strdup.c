#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly-allocated space
 * in memory containing a copy of the string given
 * as parameter.
 * @str: The string to be copied.
 * Return: If str == NULL or insufficient memoryis
 * available - NULL.
 * Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *str_dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;

	str_dup = malloc(sizeof(char) * (len + 1));
	if (str_dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		str_dup[i] = str[i];

	str_dup[len] = '\0';
	return (str_dup);
}

#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for.
 *
 * Return: For missing value or NULL array, -1. 
 * 	Otherwise, the first index where value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

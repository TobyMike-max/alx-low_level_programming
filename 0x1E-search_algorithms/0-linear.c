#include "search_algos.h"
/**
 * linear_search - Function that searches for a value in an array
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: -1 - For missing value or NULL array
 * Otherwise - First index where value is located
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

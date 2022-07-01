#include "hash_tables.h"

/**
 * hash_table_t - Creates memory for a new hash table type.
 * @size: The size of hash table to create.
 *
 * Return: Pointer to the newly created hash table address
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size <= 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t) * size);

	if (new == NULL)
		return (NULL);
	return (new);
}

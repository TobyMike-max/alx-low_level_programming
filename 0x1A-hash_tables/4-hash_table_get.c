#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated wit a key.
 * @ht: single pointer to a hash table type.
 * @key: single pointer to key used for searching a value.
 *
 * Return: On failure, if the key can't be matched - NULL
 * Otherwise - value pointer to the associated element.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hash_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);

	hash_node = ht->array[index];

	while (hash_node && strcmp(hash_node->key, key) != 0)
		hash_node = hash_node->next;

	return ((hash_node == NULL) ? NULL : hash_node->value);
}

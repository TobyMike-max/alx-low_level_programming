#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - Check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table-t *ht;

	ht = hash_table_create(50);
	hash_table_set(ht, "betty", "cool");
	return (EXIT_SUCCESS);
}

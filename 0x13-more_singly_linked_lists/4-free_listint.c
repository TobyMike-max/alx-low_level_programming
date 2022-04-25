#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		/* Store the memory of second node */
		tmp = head->next;
		/* free first node */
		free(head);
		/* Change head to hold the second node's memory */
		head = tmp;
	}
}


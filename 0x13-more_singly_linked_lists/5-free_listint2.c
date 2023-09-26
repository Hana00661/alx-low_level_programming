#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: pointer to list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *frees;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		frees = (*head)->next;
		free(*head);
		*head = frees;
	}
	*head = NULL;
}

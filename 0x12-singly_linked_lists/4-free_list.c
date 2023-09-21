#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * *@head: A pointer to the list head
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

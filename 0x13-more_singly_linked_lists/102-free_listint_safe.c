#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node
 * Return: number of elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		len++;
	}
	return (len);
}

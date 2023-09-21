#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: pointer to the list
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		e++;
		h = h->next;
	}
	return (e);
}

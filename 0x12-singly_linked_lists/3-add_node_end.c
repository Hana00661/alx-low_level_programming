#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of list
 * @head: pointer to the head of the list
 * *@str: string to list
 * Return: NULL or address or the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *c;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	c = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = c;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}

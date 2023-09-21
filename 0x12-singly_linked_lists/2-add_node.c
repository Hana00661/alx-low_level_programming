#include "lists.h"

/**
 * add_node - new node at the beginning of a list_t
 * @head: pointer to the head of the list
 * @str: string to list
 * Return: address to the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	char *c;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	c = strdup(str);
	if (c == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = c;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}

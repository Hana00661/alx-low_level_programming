#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of the list.
 * @head: pointer to the head of the dlistint_t list.
 * @n: integer for the new node to contain.
 * Return: NULL if the function fails
 *         Or - the address of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}

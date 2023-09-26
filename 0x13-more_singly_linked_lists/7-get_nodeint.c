#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: pointer of first node
 * @index: index of the node to return
 * Return: pointer to the node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int integer = 0;

	while (temp && integer < index)
	{
		temp = temp->next;
		integer++;
	}
	return (temp ? temp : NULL);
}

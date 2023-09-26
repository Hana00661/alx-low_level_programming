#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: list of type listint_t
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t number = 0;
	listint_t *temp;

	while (head)
	{
		if (head == temp)
		{
			break;
		}
		temp = head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		number++;
		head = head->next;	
	}
	return (number);
}

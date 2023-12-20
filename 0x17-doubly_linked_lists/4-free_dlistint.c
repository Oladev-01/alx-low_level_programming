#include "lists.h"
/**
 * free_dlistint - this function frees a dlistint_t double linked list
 * @head: the pointer to the first node of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;
	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}

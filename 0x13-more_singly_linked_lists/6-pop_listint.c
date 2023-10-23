#include "lists.h"
/**
 * pop_listint - this function deletes the node at the beginning of the list
 *@head: pointer to the pointer to the first node
 *Return: the data at the node to be deleted
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = *head;
	*head = (*head)->next;
	n = ptr->n;
	free(ptr);
	ptr = NULL;
	return (n);
}

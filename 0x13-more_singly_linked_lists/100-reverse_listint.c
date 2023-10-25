#include "lists.h"
/**
 * reverse_listint - this function reverses the list
 * @head: this is the pointer to the pointer to the first node
 *Return: the pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *rev = NULL;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = ptr;
	}
	*head = rev;
	return (*head);
}

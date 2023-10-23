#include "lists.h"
/**
 * add_nodeint_end - this function adds a new node at the end of the list
 * @head: pointer to the first node
 *@n: the integer data
 *Return: the pointer to the address of the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastnode, *ptr;

	ptr = *head;
	if (head == NULL)
		return (NULL);

	lastnode = malloc(sizeof(listint_t));
	if (lastnode == NULL)
		return (NULL);
	lastnode->n = n;
	lastnode->next = NULL;
	if (ptr == NULL)
	{
		*head = lastnode;
		return (lastnode);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = lastnode;
	return (lastnode);
}

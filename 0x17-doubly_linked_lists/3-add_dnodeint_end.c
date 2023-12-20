#include "lists.h"
/**
 * add_dnodeint_end - this fuction adds a new node at the end of the list
 * @head: this is the pointer to the pointer to the first node
 *@n: this is the data to be inserted into the new node
 * Return: returns pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *current;

	ptr = malloc(sizeof(dlistint_t));
	if (head == NULL || ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		current = *head;
		while (current && current->next)
			current = current->next;
		current->next = ptr;
		ptr->prev = current;
	}
	return (ptr);
}

#include "lists.h"
/**
 * add_dnodeint - this function adds a new node at the beginning of the list
 * @head: this is the pointer to the pointer to the first node of the list
 * @n: this is the data to be inserted into the new node
 * Return: the pointer to the added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (head == NULL || ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		(*head)->prev = ptr;
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}


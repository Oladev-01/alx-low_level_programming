#include "lists.h"
/**
 * add_nodeint - this function adds a node to the beginning of the lists
 * @head: pointer to the first element
 *@n: the data of the node
 *Return: pointer to the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}

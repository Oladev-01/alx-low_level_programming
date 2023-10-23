#include "lists.h"
/**
 * free_listint2 - this function frees a list
 *@head: pointer to the pointer to the first node
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	temp = *head;
	while (temp != NULL)
	{
		ptr = temp;
		temp = temp->next;
		free(ptr);
	}
	*head = NULL;
}

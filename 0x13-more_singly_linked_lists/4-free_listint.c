#include "lists.h"
/**
 * free_listint - this function frees a listint_t lists
 * @head: pointer to the first node
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}

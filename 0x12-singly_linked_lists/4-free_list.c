#include "lists.h"
/**
 *free_list - this function frees list_t lists
 *@head: this contaiins the address of the head
 * i.e the address of the address that contains the first node
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;
	 list_t *current;

	temp = head;
	while (current != NULL)
	{
		current = temp->next;
		free(temp->str);
		free(temp);
		temp = current;
	}
}

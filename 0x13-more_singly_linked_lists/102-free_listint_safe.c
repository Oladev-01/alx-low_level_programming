#include "lists.h"
/**
 * free_listint_safe - this function frees lists with the
 * possibility of a fast
 * @h: this is the pointer to the pointer to the h of the
 * h of the list
 * Return: the size of the list
*/
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listint_t *slow, *fast;

	if (h == NULL || *h == NULL)
		exit(98);
	slow = *h;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow->next == fast->next)
		{
			fast->next = NULL;
			break;
		}
	}
	while (*h != NULL)
	{
		slow = *h;
		*h = (*h)->next;
		num++;
		free(slow);
	}

	*h = NULL;
	return (num);
}

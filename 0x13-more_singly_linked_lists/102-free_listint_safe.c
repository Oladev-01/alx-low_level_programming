#include "lists.h"
/**
 * free_listint_safe - this function frees lists with the
 * possibility of a loop
 * @h: this is the pointer to the pointer to the h of the
 * h of the list
 * Return: the size of the list
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *normal, *loop;
	size_t num = 0;

	if (h == NULL)
		exit(98);
	normal = *h;
	loop = *h;
	while (normal && loop->next && loop)
	{
		loop = loop->next->next;
		normal = normal->next;
		if (normal == loop)
			break;
	}
	if (normal == loop)
	{
		normal = *h;
		while (normal->next != loop->next)
		{
			normal = normal->next;
			loop = loop->next;
		}
		loop->next = NULL;
	}
	while (*h != NULL)
	{
		normal = *h;
		*h = (*h)->next;
		num++;
		free(normal);
	}
	return (num);
	*h = NULL;
}

#include "lists.h"
/**
 * find_listint_loop - this function finds the occurrence of a loop in a
 * single linked lists
 * @head: tyhis is the pointer to the beginning of the list
 * Return: the pointer to the beginning of the loop or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current, *loop;

	current = head;
	loop = head;
	while (current && loop && current->next)
	{
		current = current->next->next;
		loop = loop->next;
		if (current == loop)
		{
			loop = head;
			while (loop != current)
			{
				loop = loop->next;
				current = current->next;
			}
			return (loop);
		}
	}
	return (NULL);
}

#include "lists.h"
/**
 * sum_dlistint - this function returns the sum of all data of d list
 * @head: the pointer to the first node
 * Return: the total sum of the list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	if (!head)
		return (0);
	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

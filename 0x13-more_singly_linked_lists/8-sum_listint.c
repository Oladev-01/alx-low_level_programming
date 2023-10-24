#include "lists.h"
/**
 * sum_listint - this function adds the sum of all the data in the list
 *@head: pointer to the head of the lsit
 *Return: the sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (0);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

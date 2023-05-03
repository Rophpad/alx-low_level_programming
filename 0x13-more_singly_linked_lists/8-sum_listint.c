#include "lists.h"

/**
 * sum_listint - Do the sum of all the date (n)
 * of a listint_t list
 * @head: A pointer to the head of the list
 *
 * Return: the sum of all data node
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

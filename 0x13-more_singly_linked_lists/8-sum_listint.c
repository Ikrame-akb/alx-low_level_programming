#include "lists.h"

/**
 * sum_listint - calculate sum of all the data in a listint_t
 * @head: first node in the linked list
 *
 * Return: sum result
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

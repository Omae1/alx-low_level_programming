#include "lists.h"

/**
*sum_listint - sums up all the data(n)
*@head: a linked list
*Return: sum of all the data
*/
int sum_listint(listint_t *head)
{
	int sum  = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);

}

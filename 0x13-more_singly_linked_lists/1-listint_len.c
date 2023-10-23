#include "lists.h"

/**
* listint_len - returns the number of elements
*@h: Linked list
*Return: the no. of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}

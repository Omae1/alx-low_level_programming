#include "lists.h"
#include <string.h>

/**
*add_node - adds a new node at the beggining of a linked list
*@head: pointer to linked list
*@str: pointer to a constant string
*Return: returns  address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	size_t len = 0;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	while (str[len] != '\0')
		len++;
	temp->len = len;
	temp->next = *head;
	*head = temp;


	return (temp);
}

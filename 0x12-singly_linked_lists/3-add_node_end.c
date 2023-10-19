#include "lists.h"
#include <string.h>

/**
*add_node_end - adds a node at the end of the list
*@head: linked list
*@str: pointer to a string
*Return: address of the added node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *newNode;
	list_t *temp;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	while (str[len] != '\0')
		len++;
	newNode->len = len;

	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}

	return (newNode);
}

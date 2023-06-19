#include "lists.h"
#include <stdlib.h> /* for malloc, free */
#include <string.h> /* for strdup */

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A double pointer to the head of the list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_dup;
	size_t len = 0;

	while (str[len])
		len++;

	str_dup = strdup(str);
	if (str_dup == NULL)
		return NULL;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(str_dup);
		return NULL;
	}

	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return new_node;
}


#include "lists.h"
/**
 * add_node_end -Write a function that adds a new node at the beginning
 *  of a list_t list.
 * @head: head element of the list
 * @str: content of the nodes
 * Description: above
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int leng;

	list_t *new_node;/*allocation of new node*/
	list_t *last = *head;

	for (leng = 0; str[leng] != '\0'; leng++);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str); /*duplicate new data of new node*/
	new_node->len = leng; /*leng of data of new_node*/
	new_node->next = NULL; /* Make next of new_node NULL*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
		while (last->next != NULL)
		{
			last = last->next;
		}
	last->next = new_node; /* Change the next of last node to new_node */
	return (new_node);
}

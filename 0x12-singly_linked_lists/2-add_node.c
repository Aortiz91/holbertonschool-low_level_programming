#include "lists.h"
/**
 * add_node -Write a function that adds a new node at the beginning
 *  of a list_t list.
 * @head: head element of the list
 * @str: content of the nodes
 * Description: above
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;

	list_t *new_node;/*allocation of new node*/

	for (len = 0; str[len] != '\0'; len++)
	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str); /*new data of new node*/
	new_node->len = len; /*leng of data of new_node*/
	new_node->next = (*head); /* Make next of new_node as head*/
	*head = new_node; /*move the head to point the new node*/
	return (*head);
}

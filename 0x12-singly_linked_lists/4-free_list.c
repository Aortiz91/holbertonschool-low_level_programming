#include "lists.h"
/**
 * free_list - Write a function that frees a list_t list.
 * @head: head element of the list
 * Description: above
 */

void free_list(list_t *head)
{
	list_t *tmp;


	if (head)
	{
		tmp = head; /*save HEAD in tmp variable*/
		head = head->next;/*HEAD ponint to the next node on the list*/
		free(tmp);/*safely free tmp variable*/
		head = tmp;
	}
}

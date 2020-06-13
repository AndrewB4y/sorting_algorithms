#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *                       in ascending order using the Insertion
 *                       sort algorithm.
 *
 * @list: head to a doubly linked list.
 *
 * Return: void
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *node1 = NULL, *node2 = NULL;

	if (list == NULL)
		return;
	node1 = *list;

	while (node1 != NULL)
	{
		node2 = node1;
		while (node2->prev != NULL && node2->prev->n > node2->n)
		{
			/* swap */
			if (node2->next != NULL)
				node2->next->prev = node2->prev;
			node2->prev->next = node2->next;
			node2->prev = node2->prev->prev;
			if (node2->prev != NULL)
			{
				node2->next = node2->prev->next;
				node2->prev->next = node2;
			}
			else
			{
				node2->next = node2->next->prev;
			}
			node2->next->prev = node2;
			if (node2->prev == NULL)
				*list = node2;
			print_list(*list);
		}
		node1 = node1->next;
	}
}

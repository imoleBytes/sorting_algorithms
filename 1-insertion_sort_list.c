#include "sort.h"

/**
* swapNodes - Swap two nodes in a listint_t doubly-linked list.
* @head: A pointer to the head of the doubly-linked list.
* @node1: A pointer to the first node to swap.
* @node2: The second node to swap.
*/
void swapNodes(listint_t **head, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
	{
		node2->next->prev = *node1;
	}

	node2->prev = (*node1)->prev;
	node2->next = *node1;
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*head = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;
}

/**
* insertion_sort_list - Sorts a doubly linked list
* using the insertion sort algorithm.
*
* @list: A pointer to the head of a doubly-linked list.
*
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (i = (*list)->next; i != NULL; i = temp)
	{
		temp = i->next;
		insert = i->prev;
		while (insert != NULL && i->n < insert->n)
		{
			swapNodes(list, &insert, i);
			print_list((const listint_t *)*list);
		}
	}
}

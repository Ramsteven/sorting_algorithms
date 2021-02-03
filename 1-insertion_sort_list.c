#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: pointer to the list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *nxt, *prv;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	if (list && *list && (*list)->next)
	{
		current = (*list)->next;
		prv = current->prev;
		nxt = current->next;
		while (current)
		{
			if (current->n < prv->n)
			{
				while (prv && current->n < prv->n)
				{
					if (nxt)
						nxt->prev = prv;
					current->next = prv;
					current->prev = prv->prev;
					if (prv->prev)
						prv->prev->next = current;
					prv->prev = current;
					prv->next = nxt;
					nxt = prv;
					prv = current->prev;
					if ((*list)->prev)
						*list = (*list)->prev;
					print_list(*list);
				}
			}
			current = nxt;
			if (current)
			{
				nxt = current->next;
				prv = current->prev;
			}
		}
	}
}

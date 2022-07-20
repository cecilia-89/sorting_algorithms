#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *curr;

	temp = *list;

	while (temp != NULL)
	{
		curr = temp;
		temp = temp->next;

		while (curr->n > temp->n)
		{
			curr->next = temp->next;
			temp->next->prev = curr;
			temp->next = curr;
			temp->prev = curr->prev;
			curr->prev = temp;

			if (temp->prev == NULL)
				*list = head;

			temp = curr->next;
		}

	}

}


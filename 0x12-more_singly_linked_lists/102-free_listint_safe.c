#include "lists.h"

/**
 * free_listint_safe - frees memory allocated for a listint_t structure
 * and sets head to NULL, safe for looped structs
 *
 * @h: head for listint_t struct
 * Return: returns number of nodes in list_t
 */
size_t free_listint_safe(listint_t **h)
{
	listptr_t *ptrhead, *ptrwalk;
	listint_t *tmp, *walk;
	int i;

	walk = *h;
	ptrhead = NULL;
	i = 0;
	while (walk != NULL)
	{
		ptrwalk = ptrhead;
		while (ptrwalk != NULL)
		{
			if (ptrwalk->list == walk)
			{
				free(walk);
				free_ptr(ptrhead);
				*h = NULL;
				return (i);
			}
			ptrwalk = ptrwalk->next;
		}
		tmp = walk;
		add_ptr(&ptrhead, walk);
		walk = walk->next;
		free(tmp);
		i++;
	}
	ptrhead = NULL;
	*h = NULL;
	free_ptr(ptrhead);
	return (i);
}

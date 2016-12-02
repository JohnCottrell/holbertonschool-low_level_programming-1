#include "lists.h"
#include <stdbool.h>

/**
 * find_listint_loop - finds a loop in a listint_t linked list
 *
 * @head: head pointer for list
 * Return: Returns start of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *walker, *crawler;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	walker = head;
	crawler = head->next;
	while (crawler != NULL && crawler->next != NULL)
	{
		if (walker == crawler)
			break;
		walker = walker->next;
		crawler = crawler->next->next;
	}
	if (walker == crawler)
	{
		walker = head;
		while (walker != crawler->next)
		{
			walker = walker->next;
			crawler = crawler->next;
		}
			return (crawler->next);
	}
	return (NULL);
}

#include "lists.h"
#include <stdbool.h>

/**
 * print_listint_safe - prints a listint, can handle looped lists
 *
 * @head: head pointer for list
 * Return: Returns number of nodes in list
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *walker, *crawler;

	printf("hello weird");
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

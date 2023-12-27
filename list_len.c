#include "shell.h" 

/**
 * list_len - determines length of a linked list
 * @h: pointer to first node
 *
 * Return: length of modified list
 */
size_t list_len(const list_t *h)
{
size_t i = 0;

while (h)
{
h = h->next;
i++;
}
return (i);
}

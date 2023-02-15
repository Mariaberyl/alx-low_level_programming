#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *turtle, *hare;
    size_t count = 0;

    turtle = hare = head;

    while (turtle && hare && hare->next)
    {
        turtle = turtle->next;
        hare = hare->next->next;

        printf("[%p] %d\n", (void *)turtle, turtle->n);
        count++;

        if (turtle == hare)
        {
            printf("-> [%p] %d\n", (void *)turtle, turtle->n);
            break;
        }
    }

    return (count);
}

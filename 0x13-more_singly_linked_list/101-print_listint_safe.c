#include "lists.h"
#include <stdio.h>

/**
 * Counts the number of unique nodes in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0, otherwise - the number of unique nodes in the list.
 */
size_t get_loop_length(const listint_t *head)
{
    if (head == NULL || head->next == NULL)
        return 0;
    
    const listint_t *slow = head, *fast = head->next;
    
    while (fast != NULL && fast->next != NULL)
    {
        if (slow == fast)
        {
            size_t length = 1;
            slow = slow->next;
            while (slow != fast)
            {
                length++;
                slow = slow->next;
            }
            return length;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return 0;
}

/**
 * Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    size_t loop_length = get_loop_length(head);

    while (head != NULL)
    {
        printf("[%p] %d\n", (void *)head, head->n);
        count++;
        if (count == loop_length)
        {
            printf("-> [%p] %d\n", (void *)head->next, head->next->n);
            break;
        }
        head = head->next;
    }
    
    return count;
}


#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
     print_dlistint(head);
     printf("-----\n");
    add_dnodeint_end(&head, 1);
     print_dlistint(head);
     printf("-----\n");
    add_dnodeint_end(&head, 2);
     print_dlistint(head);
     printf("-----\n");
    add_dnodeint_end(&head, 3);
     print_dlistint(head);
     printf("-----\n");
    add_dnodeint_end(&head, 4);
     print_dlistint(head);
     printf("-----\n");
    add_dnodeint_end(&head, 98);
     print_dlistint(head);
     printf("-----\n");
    add_dnodeint_end(&head, 402);
     print_dlistint(head);
     printf("-----\n");
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}

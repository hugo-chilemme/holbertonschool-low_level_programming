# C - Doubly linked lists

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```
&nbsp;
&nbsp;

- [0. Write a function that prints all the elements of a dlistint_t list.](int_dlistint.c)
```c
 size_t print_dlistint(const dlistint_t *h);
```

- [1. Write a function that returns the number of elements in a linked dlistint_t list.](istint_len.c)
```c
 size_t dlistint_len(const dlistint_t *h);
```

- [2. Write a function that adds a new node at the beginning of a dlistint_t list.](d_dnodeint.c)
```c
 dlistint_t *add_dnodeint(dlistint_t **head, const int n);
```

- [3. Write a function that adds a new node at the end of a dlistint_t list.](d_dnodeint_end.c)
```c
 dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
```

- [4. Write a function that frees a dlistint_t list.](ee_dlistint.c)
```c
 void free_dlistint(dlistint_t *head);
```

- [5. Write a function that returns the nth node of a dlistint_t linked list.](t_dnodeint.c)
```c
 dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
```

- [6. Write a function that returns the sum of all the data (n) of a dlistint_t linked list.](m_dlistint.c)
```c
 int sum_dlistint(dlistint_t *head);
```

- 7\. Write a function that inserts a new node at a given position. [sert_dnodeint.c](sert_dnodeint.c) [2-add_dnodeint.c](2-add_dnodeint.c) [3-add_dnodeint_end.c](3-add_dnodeint_end.c)
```c
 dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
```

- [8. Write a function that deletes the node at index index of a dlistint_t linked list.](lete_dnodeint.c)
```c
 int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
```

# C - More singly linked lists

- [0. Write a function that prints all the elements of a listint_t list.](0-print_listint.c)
```c
size_t print_listint(const listint_t *h);
```

- [1. Write a function that returns the number of elements in a linked listint_t list.](1-listint_len.c)
```c
size_t listint_len(const listint_t *h)
```

- [2. Write a function that adds a new node at the beginning of a listint_t list.](2-add_nodeint.c)
```c
listint_t *add_nodeint(listint_t **head, const int n);
```

- [3. Write a function that adds a new node at the end of a listint_t list.](3-add_nodeint_end.c)
```c
listint_t *add_nodeint_end(listint_t **head, const int n);
```

- [4. Write a function that frees a listint_t list.](4-free_listint.c)
```c
void free_listint(listint_t *head);
```

- [5. Write a function that frees a listint_t list.](5-free_listint2.c)
```c
void free_listint2(listint_t **head);
```

- [6. Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).](6-pop_listint.c)
```c
int pop_listint(listint_t **head);
```

- [7. Write a function that returns the nth node of a listint_t linked list.](7-get_nodeint.c)
```c
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
```

- [8. Write a function that returns the sum of all the data (n) of a listint_t linked list.](8-sum_listint.c)
```c
int sum_listint(listint_t *head);
```

- [9. Write a function that inserts a new node at a given position.](9-insert_nodeint.c)
```c
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
```

- [10. Write a function that deletes the node at index index of a listint_t linked list.](10-delete_nodeint.c)
```c
int delete_nodeint_at_index(listint_t **head, unsigned int index);
```


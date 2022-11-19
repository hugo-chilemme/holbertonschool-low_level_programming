# C - Singly linked lists

- [Write a function that prints all the elements of a list_t list.](0-print_list.c)
```c
size_t print_list(const list_t *h);
```

- [Write a function that returns the number of elements in a linked list_t list.](1-list_len.c)
```c
size_t list_len(const list_t *h);
```

- [Write a function that adds a new node at the beginning of a list_t list.](2-add_node.c)
```c
list_t *add_node(list_t **head, const char *str);
```

- [Write a function that adds a new node at the end of a list_t list.](3-add_node_end.c)
```c
list_t *add_node_end(list_t **head, const char *str);
```

- [Write a function that frees a list_t list.](4-free_list.c)
```c
void free_list(list_t *head);
```

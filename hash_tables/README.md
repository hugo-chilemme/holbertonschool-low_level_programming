# C - Hash tables

- [0. Write a function that creates a hash table.](0-hash_table_create.c)
```c
_t *hash_table_create(unsigned long int size);
```

- [1. Write a hash function implementing the djb2 algorithm.](1-djb2.c)
```c
ong int hash_djb2(const unsigned char *str);
```

- [2. Write a function that gives you the index of a key.](2-key_index.c)
```c
ong int key_index(const unsigned char *key, unsigned long int size);
```

- [3. Write a function that adds an element to the hash table.](3-hash_table_set.c)
```c
able_set(hash_table_t *ht, const char *key, const char *value);
```

- [4. Write a function that retrieves a value associated with a key.](4-hash_table_get.c)
```c
_table_get(const hash_table_t *ht, const char *key);
```

- [5. Write a function that prints a hash table.](5-hash_table_print.c)
```c
table_print(const hash_table_t *ht);
```

- [6. Write a function that deletes a hash table.](6-hash_table_delete.c)
```c
table_delete(hash_table_t *ht);
```

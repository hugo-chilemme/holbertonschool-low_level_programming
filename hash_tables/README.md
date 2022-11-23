# C - Hash tables

- [0. Write a function that creates a hash table.](0-hash_table_create.c)
```c
 hash_table_t *hash_table_create(unsigned long int size);
where size is the size of the array
```

- [1. Write a hash function implementing the djb2 algorithm.](1-djb2.c)
```c
 unsigned long int hash_djb2(const unsigned char *str);
```

- [2. Write a function that gives you the index of a key.](2-key_index.c)
```c
 unsigned long int key_index(const unsigned char *key, unsigned long int size);
where key is the key
and size is the size of the array of the hash table
```

- [3. Write a function that adds an element to the hash table.](3-hash_table_set.c)
```c
 int hash_table_set(hash_table_t *ht, const char *key, const char *value);
Where ht is the hash table you want to add or update the key/value to
key is the key. key can not be an empty string
and value is the value associated with the key. value must be duplicated. value can be an empty string
```

- [4. Write a function that retrieves a value associated with a key.](4-hash_table_get.c)
```c
 char *hash_table_get(const hash_table_t *ht, const char *key);
where ht is the hash table you want to look into
and key is the key you are looking for
```

- [5. Write a function that prints a hash table.](5-hash_table_print.c)
```c
 void hash_table_print(const hash_table_t *ht);
where ht is the hash table
```

- [6. Write a function that deletes a hash table.](6-hash_table_delete.c)
```c
 void hash_table_delete(hash_table_t *ht);
where ht is the hash table
```

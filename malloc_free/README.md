# C - malloc, free

- [0. Write a function that creates an array of chars, and initializes it with a specific char.](0-create_array.c)
```c
char *create_array(unsigned int size, char c);
```

- [1. Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.](1-strdup.c)
```c
char *_strdup(char *str);
```

- [2. Write a function that concatenates two strings.](2-str_concat.c)

```c
char *str_concat(char *s1, char *s2);
```

- [3. Write a function that returns a pointer to a 2 dimensional array of integers.](3-alloc_grid.c)
```c
int **alloc_grid(int width, int height);
```

- [4. Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.](4-free_grid.c)
```c
void free_grid(int **grid, int height);
```


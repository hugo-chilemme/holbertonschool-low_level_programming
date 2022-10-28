[Back to home](/README.md) - [Previous Project](/makefiles/README.md) - [Next Project](/more_malloc_free/README.md)

# C - malloc, free
###### Training by Holberton School ([www.holbertonschool.com](www.holbertonschool.com))
&nbsp;
- [0. Write a function that creates an array of chars, and initializes it with a specific char.](0-create_array.c)
    &nbsp;
  ```c
    char *create_array(unsigned int size, char c);
  ```
  &nbsp;
- [1. Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.](1-strdup.c)
  &nbsp;
  ```c
    char *_strdup(char *str);
  ```
  &nbsp;
- [2. Write a function that concatenates two strings.](2-str_concat.c)
  ```c
    char *str_concat(char *s1, char *s2);
  ```
  &nbsp;
- [3. Write a function that returns a pointer to a 2 dimensional array of integers.](3-alloc_grid.c)
  &nbsp;
  ```c
    int **alloc_grid(int width, int height);
  ```
  &nbsp;
- [4. Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.](4-free_grid.c)
  &nbsp;
  ```c
    void free_grid(int **grid, int height);
  ```
  &nbsp;

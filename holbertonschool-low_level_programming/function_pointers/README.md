# C - Function pointers

- [0. Write a function that prints a name.](0-print_name.c)
```c
void print_name(char *name, void (*f)(char *));
```
- [1. Write a function that executes a function given as a parameter on each element of an array.](1-array_iterator.c)
```c
void array_iterator(int *array, size_t size, void (*action)(int));
```
- [2. Write a function that searches for an integer.](2-int_index.c)
```c
int int_index(int *array, int size, int (*cmp)(int));
```
- 3\. Write a program that performs simple operations. [3-main.c](3-main.c), [3-op_functions.c](3-op_functions.c), [3-get_op_func.c](3-get_op_func.c), [3-calc.h](3-calc.h)
```c
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
```

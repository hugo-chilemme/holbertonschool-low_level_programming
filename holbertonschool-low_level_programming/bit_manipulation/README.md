> This project is not finished due to a technical problem
# C - Bit manipulation

- [0. Write a function that converts a binary number to an unsigned int.](0-binary_to_uint.c)
```c
unsigned int binary_to_uint(const char *b);
```

- [1. Write a function that prints the binary representation of a number.](1-print_binary.c)
```c
void print_binary(unsigned long int n);
```

- 2\. Write a function that returns the value of a bit at a given index.
```c
int get_bit(unsigned long int n, unsigned int index);
```

- 3\. Write a function that sets the value of a bit to 1 at a given index.
```c
int set_bit(unsigned long int *n, unsigned int index);
```

- 4\. Write a function that sets the value of a bit to 0 at a given index.
```c
int clear_bit(unsigned long int *n, unsigned int index);
```

- 5\. Write a function that returns the number of bits you would need to flip to get from one number to another.
```c
unsigned int flip_bits(unsigned long int n, unsigned long int m);
```

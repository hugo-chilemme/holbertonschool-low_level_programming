# Structures typedef

- [0. Define a new type struct dog](dog.h)
- [1. Write a function that initialize a variable of type struct dog](dog.h)
- [2. Write a function that prints a struct dog](2-print_dog.c)
```c
void print_dog(struct dog *d);
```
- [3. Define a new type dog_t as a new name for the type struct dog.](dog.h)
- [4. Write a function that creates a new dog.](4-new_dog.c)
```c
dog_t *new_dog(char *name, float age, char *owner);
```
- [5. Write a function that frees dogs.](5-free_dog.c)
```c
void free_dog(dog_t *d);
```

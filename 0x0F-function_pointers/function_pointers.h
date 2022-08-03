#ifndef FUNC_PTR_H
#define FUNC_PTR_H
#include <stdio.h>
#include <stddef.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif

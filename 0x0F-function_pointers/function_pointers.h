#ifndef FUNC_PTR_H
#define FUNC_PTR_H

int _putchar(char);

void print_name(char *, void (*)(char *));

void array_iterator(int *, size_t, void (*)(int));

int int_index(int *, int, int (*)(int));

#endif /*FUNC_PTR_H*/

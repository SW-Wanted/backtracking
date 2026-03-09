#ifndef UTILS_H
#define UTILS_H

#include <unistd.h>
#include <stdlib.h>

int ft_isspace(char c);
int ft_isupper(char c);
int ft_islower(char c);
int ft_isalpha(char c);
int ft_isdigit(char c);
int ft_isalnum(char c);
int ft_issignal(char c);

int ft_putchar(char c);
int ft_putstr(const char *s);
int ft_putendl(const char *s);
int ft_putnbr(int n);

int ft_printarr(int *arr, int len);

int ft_atoi(const char *s);

#endif
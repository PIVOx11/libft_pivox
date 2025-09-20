#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>

// Part 1 : libc functions.
size_t  ft_strlen(const char *s);
void    ft_putchar(char c);
void    ft_putstr(char const *s);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_isdigit(int c);
int     ft_tolower(int c);
int     ft_toupper(int c);
int     ft_isalpha(int c);


// Part 2 : Additional functions.
char * ft_itoa(int n);

#endif
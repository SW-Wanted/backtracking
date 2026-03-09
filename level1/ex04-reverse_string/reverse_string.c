#include "utils.h"

void reverse(const char *s)
{
    if (*s == '\0')
        return ;
    reverse(s + 1);
    ft_putchar(*s);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        return (1);
    reverse(argv[1]);
    return (0);
}
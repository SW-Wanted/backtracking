#include "utils.h"

void print(int n)
{
    if (n > 1)
        print(n - 1);
    ft_putnbr(n);
    ft_putchar('\n');
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        return (1);
    print(ft_atoi(argv[1]));
    return (0);
}
#include "utils.h"

int factorial(int n)
{
    if (n == 0)
        return (1);
    return (n * factorial(n - 1));
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        return (1);
    ft_putnbr(factorial(ft_atoi(argv[1])));
    return (0);
}
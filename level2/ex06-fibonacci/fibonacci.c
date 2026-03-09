#include "utils.h"

int fibonacci(int n)
{
    if (n == 1)
        return (1);
    if (n == 0)
        return (0);
    return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        return (1);
    ft_putnbr(fibonacci(ft_atoi(argv[1])));
    return (0);
}
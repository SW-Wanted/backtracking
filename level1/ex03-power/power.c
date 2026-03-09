#include "utils.h"

int power(int a, int b)
{
    if (b == 0)
        return (1);
    return (a * power(a, b - 1));
}

int main(int argc, char *argv[])
{
    if (argc != 3)
        return (1);
    ft_putnbr(power(ft_atoi(argv[1]), ft_atoi(argv[2])));
    return (0);
}
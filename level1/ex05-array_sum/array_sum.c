#include "utils.h"

int array_sum(int *array, int len)
{
    if (len == 1)
        return *array;
    return (*array + array_sum(array + 1, len - 1));
}

int main(int argc, char *argv[])
{
    if (argc < 2)
        return (1);
    int *array = malloc((argc - 1)* sizeof(int));
    int i = 1;
    while (argv[i])
    {
        array[i - 1] = ft_atoi(argv[i]);
        i++;
    }
    ft_putnbr(array_sum(array, argc - 1));
    free(array);
    return (0);
}
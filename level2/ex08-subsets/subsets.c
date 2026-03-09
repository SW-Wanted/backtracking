#include "utils.h"

void subsets(int *set, int *subset, int pos, int size, int n)
{
    if (pos == n)
    {
        ft_printarr(subset, size);
        return ;
    }
    subsets(set, subset, pos + 1, size, n);
    subset[size] = set[pos];
    subsets(set, subset, pos + 1, size + 1, n);
}

int main(int argc, char *argv[])
{
    int i = 0;
    int n = argc - 1;
    int *set = malloc(sizeof(int) * n);
    int *subset = malloc(sizeof(int) * n);

    if (argc < 2 || !set || !subset)
        return (1);
    while (i < n)
    {
        set[i] = ft_atoi(argv[i + 1]);
        i++;
    }
    subsets(set, subset, 0, 0, n);
    return (0);
}
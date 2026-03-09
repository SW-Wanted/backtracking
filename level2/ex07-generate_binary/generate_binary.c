#include "utils.h"

void generate_binary(char *res, int pos, int len)
{
    if (pos == len)
    {
        ft_putendl(res);
        return;
    }
    res[pos] = '0';
    generate_binary(res, pos + 1, len);
    res[pos] = '1';
    generate_binary(res, pos + 1, len);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        return (1);
    int len = ft_atoi(argv[1]);
    char *s = malloc(len + 1);
    s[len] = '\0';
    generate_binary(s, 0, len);
    return (0);
}
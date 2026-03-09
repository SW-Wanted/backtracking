#include "utils.h"

/// @brief verify if a char c is a space. It is considering a space the following chars: 9 : (horizontal tab), 10 : (new line), 11 : (vertical tab), 12 : (form feed), 13 : (carriage ret) and 32 : SPACE
/// @param c character
/// @return return 0 if false and 1 if true
int ft_isspace(char c)
{
    return ((c >= 9 && c <= 13) || c == 32);
}

/// @brief verify if a char c is a signal. It is considering a sign the following chars: 45 : MINUS(-) and 43 : PLUS(+)
/// @param c character
/// @return return 0 if false and 1 if true
int ft_issignal(char c)
{
    return (c == '-' || c == '+');
}

/// @brief verify if a char c is uppercase
/// @param c character
/// @return return 0 if false and 1 if true
int ft_isupper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

/// @brief verify if a char c is lowercase
/// @param c character
/// @return return 0 if false and 1 if true
int ft_islower(char c)
{
    return (c >= 'a' && c <= 'z');
}

/// @brief verify if a char c is alphabetic
/// @param c character
/// @return return 0 if false and 1 if true
int ft_isalpha(char c)
{
    return (ft_isupper(c) || ft_islower(c));
}

/// @brief verify if a char c is digit
/// @param c character
/// @return return 0 if false and 1 if true
int ft_isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

/// @brief verify if a char c is a digit or an alphabetic
/// @param c character
/// @return return 0 if false and 1 if true
int ft_isalnum(char c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}

/// @brief print a caracter
/// @param c character
/// @return number of character printed
int ft_putchar(char c)
{
    return (write(1, &c, 1));
}

/// @brief print a string without a newline
/// @param s string
/// @return total length of the string printed
int ft_putstr(const char *s)
{
    int i;
    int total;

    i = 0;
    total = 0;
    if (!s)
        return (0);
    while (s[i])
        total += ft_putchar(s[i++]);
    return (total);
}

/// @brief print a string with a newline
/// @param s string
/// @return total length of the string printed
int ft_putendl(const char *s)
{
    int total;

    total = 0;
    total += ft_putstr(s);
    total += ft_putchar('\n');
    return (total);
}

/// @brief print a number
/// @param n number
/// @return total of digits printed
int ft_putnbr(int n)
{
    int total;
    long nb;

    total = 0;
    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        total += ft_putchar('-');
    }
    if (nb <= 9 && nb >= -9)
    {
        total += ft_putchar((nb % 10) + '0');
    }
    else
    {
        ft_putnbr(nb / 10);
        total += ft_putchar((nb % 10) + '0');
    }
    return (total);
}

/// @brief convert a string s to an integer
/// @param s string
/// @return Value converted to integer
int ft_atoi(const char *s)
{
    // ' -42 '
    int i;
    int signal;
    int result;

    i = 0;
    signal = 1;
    result = 0;
    while (ft_isspace(s[i]))
        i++;
    if (ft_issignal(s[i]))
    {
        if (s[i] == '-')
            signal = -1;
        i++;
    }
    while (ft_isdigit(s[i]))
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }
    return (signal * result);
}
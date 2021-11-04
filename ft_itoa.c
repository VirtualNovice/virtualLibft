#include "libft.h"

static int    ft_len_n(int n)
{
    int    len;

    len = 0;
    if (n <= 0)
        len++;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char    *str;
    int        i;

    i = ft_len_n(n);
    str = (char *)malloc(sizeof(char) * (i + 1));
    if (!str)
        return (NULL);
    str[i--] = '\0';
    if (n < 0)
    {
        str[0] = '-';
        n *= -1;
    }   
    else if (n == 0)
        str[i] = '0';
    while (n != 0)
    {
        str[i] = (n % 10) + 48;
        n /= 10;
        i--;
    }
    return (str);
}

#include "ft_stock_str.h"
#include <stdlib.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
        len++ ;
    return (len);
}

char    *ft_strdup(char *src)
{
        int     i;
        char    *ptr;
        int     len;

        i = 0;
        len = ft_strlen(src);
        ptr = (char *)malloc((len + 1) * 1);
        if (ptr == NULL)
                return NULL;
        while (src[i])
        {
                ptr[i] = src[i];
                i++;
        }
        ptr[i] = '\0';
        return (ptr);
}

struct s_stock_str  *ft_strs_to_tab(int ac, char **av)
{
    int i;
    struct s_stock_str *arr;

    arr = malloc((ac + 1) * sizeof(struct s_stock_str));
    if (!arr)
        return (NULL);
    i = 0;
    while (i < ac)
    {
        arr[i].str = av[i];
        arr[i].size = ft_strlen(av[i]);
        arr[i].copy = ft_strdup(av[i]);
        i++;
    }
    arr[i].str = 0; 
    return (arr);
}

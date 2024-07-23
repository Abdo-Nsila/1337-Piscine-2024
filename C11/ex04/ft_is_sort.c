int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
    int i = 0;
    int asc = 1;
    int desc = 1;

    while (i < length - 1)
    {
        if (f(tab[i], tab[i + 1]) > 0)
        {
            asc = 0;
        }
        if (f(tab[i], tab[i + 1]) < 0)
        {
            desc = 0;
        }
        i++;
    }
    return asc || desc;
}

int compare(int a, int b) {
    if (a - b)
        return (a - b);
    else
    return (0);
}
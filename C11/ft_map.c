int *ft_map(int *tab, int length, int(*f)(int))
{
    int i;
    int *arr;

    i = 0;
    arr = (int*)malloc(length * 4);
    while (i < length)
    {
        arr[i] = f(tab[i]);
        i++;
    }
    return (arr);
}
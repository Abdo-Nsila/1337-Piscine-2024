#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
    {
        ft_putchar(str[len]);
        len++;
    }
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void ft_show_tab(struct s_stock_str *par)
{
    int i;
    i = 0;
	while (par[i].str != 0)
	{
        ft_putstr(par[i].str);
        ft_putchar('\n');
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i].copy);
        ft_putchar('\n');
		i++;
	}
}

#include <unistd.h>

void	ft_putstr(int nb ,char *str)
{
    int count;   
    char a;

    count = 0;
    while (str[count])
	count++;
    if (nb < 0)
    {
	nb *= -1;
f	a = '-';
	write(1, &a, 1);
	ft_putstr(nb, str);
    }
    if (nb / count == 0)
    {
	a = str[nb %  count];
	write(1, &a, 1);
    }
    else
    {
	ft_putstr(nb / count, str);
	a = str[nb % count];
	write(1, &a, 1);
    }
}

void	ft_putnbr_base(int nbr, char *base)
{
    int a[4];

    a[0] = 0;
    a[2] = 0;
    a[3] = 1;
    while (base[a[2]])
	a[2]++;
    while (a[0] < a[2])
    {
	a[1] = a[0];
	while (++a[1] < a[2])
	{ 
	    if (base[a[0]] == base[a[1]] || base[a[1]] == '-' || base[a[1]] == ' '
	    || base[a[1]] == '+')
		a[3] = 0;
	}
	a[0]++;
    }
    if (a[3] == 1)
	ft_putstr(nbr, base);	
}
int main (void)
{
    int a = 123;
    char b[11] = "abcde ";
    ft_putnbr_base(a, b);
    return 0;
}

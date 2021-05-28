#include <unistd.h>

void	ft_putnbr(int nb)
{
    char arr[3];
    if (nb < 0)
    {
	nb = nb * -1;
	arr[0] = '-';
	write(1, &arr[0], 1);
    }
    if ((nb / 10) == 0)
    {
	arr[1] = nb % 10 + '0'; 
	write(1, &arr[1], 1);
    }
    else 
    {
	ft_putnbr(nb / 10);
	arr[2] = nb % 10 + '0';
	write(1, &arr[2], 1);
    }
}
int main(void)
{
    int a;
    
    a = (-422);
    ft_putnbr(a);
    return 0;
}

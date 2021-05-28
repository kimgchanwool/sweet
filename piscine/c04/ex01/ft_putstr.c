#include <unistd.h>

void	ft_putstr(char *str)
{
    while (*str)
    {
	write(1, str, 1);
	str++;
    }
}

int main(void)
{
    char arr[234] = "hello";
    ft_putstr(arr);
    return 0;
}

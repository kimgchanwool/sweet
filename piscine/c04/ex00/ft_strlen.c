#include <stdio.h>

int ft_strlen(char *str)
{
    int count;
    count = 0;
    while (*str)
    {
	count++;
	str++;
    }
    return count;
}
int main(void)
{
    char arr[213] = "hello, world";
    printf("%d", ft_strlen(arr));
    return 0;
}

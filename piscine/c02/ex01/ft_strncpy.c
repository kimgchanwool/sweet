#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int a;

    a = 0;
    while (a < n)
    {
	dest[a] = src[a];
	a++;
    }
    dest[a] = 0;
    return dest;
}

int main(void)
{
    char arr[10] = "hello";
    char arr1[10] = "world";
    printf("%s", ft_strncpy(arr, arr1, 10));
    return 0;
}

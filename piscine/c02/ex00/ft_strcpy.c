#include <stdio.h>

char	*ft_strcpy(char *dest, char*src)
{
    int a;

    a = 0;
    while(dest[a])
    {
	dest[a] = src[a];
	a++;
    }
    dest[a] = src[a];
    return dest;
}

int main(void)
{
    char arr[12] = "hello world";
    char arr1[5] = "test";
    printf("%s", ft_strcpy(arr, arr1));
    return 0;
}

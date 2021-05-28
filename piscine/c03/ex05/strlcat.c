include <stdio.h>
unsigned int ft_strlcat(char* dest, char* src, unsigned int size)
{
	unsigned fint a;
	unsigned int b;
	b = 0;
	a = 0;
	while (dest[a] != 0 && a < size - 2)
    	    a++;
	while (a < size - 1 && src[b] != 0)
	{
	    dest[a] = src[b];
	    a++;
	    b++;
	}
	dest[size - 1] = 0;
	return size;
}
int main(void)
{
	char arr1[20] = "hello ";
	char arr2[30] = "worldsdsdsdsd";
	printf("%d", ft_strlcat(arr1, arr2, 10));
	return 0;
}

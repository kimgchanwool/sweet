#include <stdio.h>
char* ft_strncat(char* dest, char* src, unsigned int nb)
{
	int a;
	int b;
	b = 0;
	a = 0;
	while (dest[a] != 0)
		a++;
	while (nb > 0 && src[b] != 0 )
	{
		dest[a++] = src[b++];
		nb--;
	}
	dest[a] = 0; 
	return *(&dest);
}
int main(void)
{
	char arr1[12] = "hello ";
	char arr2[6] = "world";
	printf("%s", ft_strncat(arr1, arr2, 3));
	return 0;
}

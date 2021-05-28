include <stdio.h>

char* ft_strcat(char* dest, char* src)
{
	int a;
	int b;
	b = 0;
	a = 0;
	while (dest[a] != 0)
		a++;
	while (src[b] != 0)
	{
		dest[a++] = src[b++];
	}
	return (dest);
}
int main(void)
{
	char arr1[12] = "hello";
	char arr2[6] = "world";
	printf("%s", ft_strcat(arr1, arr2));
	return 0;
}

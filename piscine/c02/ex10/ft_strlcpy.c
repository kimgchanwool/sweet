#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char arr[12] = "hello world!";
	char arr1[13] = "ddd";
	printf("%d", ft_strlcpy(arr1, arr, 5));
	return 0;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int a;
	int temp;

	temp = size - 1;
	dest[temp] = 0;
	while (--temp >= 0)	
	{
		dest[temp] = src[temp];
	}
	printf("%s\n", dest);
	temp = 0;
	while (src[temp])
	    temp++;
	if (src[size - 1] == 0)
	    return (temp - 1);
	return (size - 1);
}

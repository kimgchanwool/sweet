#include <stdio.h>

int ft_strncmp(char *s1, char *s2, int a);

int main(void)
{
	char arr1[10] = "hello";
	char arr2[13] = "hell";
	printf("%d", ft_strncmp(arr1, arr2, 6));
	return 0;
}

int ft_strncmp(char *s1, char *s2, int a)
{
	char c;
	char d;
	
	while (a-- > 0)
	{
		c = *s1++;
		d = *s2++;
		if (c != d)
			return (c < d ? -1 : 1);
			
		if (a == 0)
			break;
	}
	return 0;
}

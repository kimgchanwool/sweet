#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str[12] = "HELLO wOR!d";
	printf("%s", ft_strlowcase(str));
	return 0;
}

char *ft_strlowcase(char *str)
{
	int a;
	a = 0;
	while (str[a] != 0)
	{
		if ('A' <= str[a] && str[a] <= 'Z')
		{
			str[a] += 32;
		}
		a++; 
	}
	return (str);
}

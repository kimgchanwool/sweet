#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	char arr[10];
	printf("소문자가 %d입니다. " , ft_str_is_lowercase(arr));
	return 0;
}

int ft_str_is_lowercase(char *str)
{	
	while (*str)
	{
		if (*str > 122 || *str < 97)
		{
			return 0;
		}
		str++;
	}
	
	return 1;
}

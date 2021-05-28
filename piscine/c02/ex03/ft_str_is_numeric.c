#include <stdio.h>


int	ft_str_is_numeric(char *str);

int main(void)
{
	char arr[10];
	printf("값은 %d다.", ft_str_is_numeric(arr));
	return 0;
}

int ft_str_is_numeric(char *str)
{
	if (*str == 0)
	    return 1;
	while (*str)
	{
		if (*str < 48 || *str > 57)
		{
			return 0;
		}
		str++;
	}

	return 1;
}



#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int main(void)
{
	char *arr;
	arr = "HLLO";
	printf("대문자의 여부는 %d입니다.", ft_str_is_uppercase(arr));
	return 0;
}

int		ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 65 || *str > 90)
			return 0;
		str++;
	}
	return 1;
}

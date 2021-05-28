#include <stdio.h>

int		ft_str_is_printable(char *str);

int main(void)
{
	char *arr;
	arr = "43278049dsjoij";
	printf("출력 가능 여부는 %d 입니다.",  ft_str_is_printable(arr));
 
	return 0;
}

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if ( *str < 33 || *str > 126)
			return 0;
		str++;
	}
	
	return 1;
}

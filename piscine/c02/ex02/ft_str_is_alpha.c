#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    if (*str == 0)
	return 1;

    while (*str)
    {
	if (122  < *str || (91 < *str && *str < 97) || *str < 65 )
	  return 0;  
	str++;
    }
    

    return 1;
}
int main(void)
{
    char arr[10];
    printf("%d", ft_str_is_alpha(arr));
    return 0;
}


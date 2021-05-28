#include <stdio.h>

int ft_atoi(char *str)
{
    int arr[10];
    int a;
    int count;

    count = 0;
    a = 0;
    while (*str)
    {
	if ( *str == '-' )
	    count--;
	else if ( *str == '+' )
	    count++;
	if ( 9 <= *str && *str <= 13 || *str == 32 || *str == '+' || *str == '-' || ('0' < *str && *str <= '9'))
	    ;
	else 
	    return 0;
	while ( '0' <= *str && *str <= '9')
	{
	    if (a == 0)
		arr[a] = *str - 48;
	    else
		arr[a] = (arr[a - 1] * 10) + (*str - 48);
	    a++;
	    str++;
	}
	if (a > 0)
	    break;
	str++;
    }
    if (count < 0)
	return(-arr[a - 1]);
    else
	return (+arr[a - 1]);
}
int main(void)
{
    char arr[20] = "    ---++24239sdls";
    printf("%d", ft_atoi(arr));
    return 0;
}

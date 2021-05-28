#include <stdio.h>

int also(char str)
{
   if ( 9 <= str && str <= 13 || str == 32
       || str == '+' || str == '-' || ( '0' < str  && str <= '9' ))
       return 1;
   else
       return 0;
 }
int ft_atoi(char *str)
{
    int arr[10];
    int count[2];

    count[0] = 0;
    count[1] = 0;
    while (*str)
    {
	if ( also(*str) == 0 )
	    return 0;
	if ( *str == '-' )
	    count[0]--;
	else if ( *str == '+' )
	    count[0]++;
	while ( '0' <= *str && *str <= '9')
	{
	    if (count[1] == 0)
		arr[count[1]] = *str - 48;
	    else
		arr[count[1]] = (arr[count[1] - 1] * 10) + (*str - 48);
	    count[1]++;
	    str++;
	}
	if (count[1] > 0)
	    break;
	str++;
    }
    if (count[0] < 0)
	return(-arr[count[1] - 1]);
    else
	return (+arr[count[1] - 1]);
}

int main(void)
{
    char arr[20] = "    ---++24239sdls";
    printf("%d", ft_atoi(arr));
    return 0;
}

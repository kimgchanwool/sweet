#include <stdio.h>

int ft_atoi(char *str)
{
    int numb;
    int i;
    int sign;

    numb = 0;
    i = 0;
    sign = 1;
    while (1)
    {
	if (str[i] == 32 || 9 <= str[i] && str[i] <= 13 || str[i] == 43)
	    i++;
	else if(str[i] == 45)
	{
	    sign = sign * -1;
	    i++;
	}
	else if( '0' <= str[i] && str[i] <= '9')
	{
	    numb = numb * 10 - 48 + str[i];
	    i++;
	}
	else
	    return (sign * numb);
    }


int main(void)
{
    char arr[20] = "----+++  84219adsb";
    printf("%d", ft_atoi(arr));
    return (0);
}

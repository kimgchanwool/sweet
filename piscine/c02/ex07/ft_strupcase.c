#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char arr[14] = "hello world";
	printf("%s", ft_strupcase(arr));
	return 0;
}

char *ft_strupcase(char *str)
{

    int a;

    a = 0;
	while (str[a])
        {
	    if ( 'a' <= str[a] && str[a] <= 'z' )
		str[a] -=  32;
	    a++;
	}

	return (str);
}

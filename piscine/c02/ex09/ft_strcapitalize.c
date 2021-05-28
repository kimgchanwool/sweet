#include <stdio.h>

char	*ft_strcapialize(char *str);

int main(void)
{
	char arr[17] = "hE -l -LO W OR d";
	printf("%s", ft_strcapialize(arr));

	return 0;
}

char	*ft_strcapialize(char *str)
{
	int a;
	int b;
	a = 0;
	b = 0;

	while (str[a] != 0)
	{
		if ( ('Z' < str[a] && str[a] < 'a') || str[a] > 'z' || ('9' < str[a] && str[a] < 'A' ) 
		|| str[a] < '0')
		{
			b = 0;
		}
		else if ( b == 0 && 'a' <= str[a]  && str[a] <= 'z' )
		{
			str[a] -=32;
			b = 1;
		}
		else if ( b == 1 && 'A' <= str[a] && str[a] <= 'Z' )
		{
			str[a] += 32;
		}
		a++;
	}
	return (str);

}

#include <stdio.h>

int check(char *str, char *base)
{
    int a;
    int b;
    
    a = 0;
    if (base[0] == 0 || base[1] == 0)
	return 0;
    while (base[a])
    {
	b = a + 1;
	while (base[b])
	{
	    if (base[a] == base[b] || base[a] == '+' || base[a] == '-' || base[a] == 32)
		return 0;
	    b++;
	}
	a++;
    }
    return 1;
}

int atoi(char *str, char *base, int a)
{
    int sign;
    int i;
    int numb;

    numb = 0;
    i = 0;
    sign = 1;
    if (check(str, base) == 0)
	return 0;
    while (1)
    {
	if ( str[i] == 32 || 9 <= str[i] && str[i] <= 13 || str[i] == '+')
	    i++;
	else if ( str[i] == '-')
	{
	    sign = sign * -1;
	    i++;
	}
	else if ( '0' <= str[i] && str[i] <= (a - 1 + 48))
	    numb = (a * numb) + (str[i++] - '0');
	else
	    break;
    }
    return (sign * numb);
}

int ft_atoi_base(char *str, char *base)
{
    int a;
    int b;
    int numb;

    numb = 0;
    a = 0;
    if (check(str, base) == 0)
	return 0;
    while (str[a])
    {
	b = -1;
	while (base[++b])
	{
	    if (str[a] == base[b])
	    {
		str[a] = (b + 48);
		break;
	    }
	}
	a++;
    }
    a = 0;
    while (base[a])
	a++;
    return atoi(str, base, a);
}

int main(void)
{
    char str[10] = "--- 422b23";
    char base[10] = "0123456789";

    printf("%d", ft_atoi_base(str, base));

    return 0;
}

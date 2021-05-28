#include <stdio.h>
#include <unistd.h>

void    ft_putstr_non_printable(char* str);

int main(void)
{
    char arr[20] = "hel\n wor ld!";
    ft_putstr_non_printable(arr);
    return 0;

}

void    ft_putstr_non_printable(char* str)
{
    int a;
    char b;
    char c;
    a = 0;

    while (str[a] != 0)
    {
        if (32 <= str[a])
        {
            write(1, &str[a], 1);
        }
        else if (0 < str[a] && str[a] < 32)
        {
            write(1, "\\", 1);
            if ((str[a] % 16) > 9)
            {
                b = str[a] / 16 + '0';
                c = (str[a] % 16) + 'a' - 10;
                write(1, &b, 1);
                write(1, &c, 1);
            }
            else
            {
                c = (str[a] % 16) + '0';
		b = (str[a] / 16) + '0';
                write(1, &b, 1);
                write(1, &c, 1);
            }
        }
        else
        {
            return;
        }
        a++;
    }

}

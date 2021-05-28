#include <unistd.h>

void ft(char arr)
{
    write(1, &arr, 1);
}

void ft_print_comb(void)
{
    int a;
    int b;
    int c;
    a = '0' - 1;
        while (++a <= '7')
        {
            b = a;
            while (++b <= '8')
            {
                c = b;
                while (++c <= '9')
                {
                	ft(a);
                 	ft(b);
                	ft(c);
			if (a == 7 && b == 8 && c == 9)
			{
				break;
			}

					ft(',');
					ft(' ');
                }
            }
        }
}
int main(void)
{
    ft_print_comb();
    return 0;
}

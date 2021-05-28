#include <unistd.h>

void	adress(unsigned int count, long long adr)
{
    char *ara;
    int a;
    char c;

    ara = "0123456789abcdef";
    a = adr % 16;
    if (count == 16)
	return ;
    adress(count + 1, adr / 16);
    write(1, &a, 1);
    if (count == 0)
	write(1, ": ", 2);
}

void	content16(char arr, unsigned int *spa)
{
    char *ara;
    int temp1;
    int temp2;
    
    ara = "0123456789abcdef";
    temp1 = ara[arr / 16];
    temp2 = ara[arr % 16];
    write(1, &temp1, 1);
    write(1, &temp2, 1);
    if (*spa % 2 == 1)
	write(1, " ", 1);
    *spa += 1;
}

void content(char c)
{
    if (0 < c && c < 32)
	write(1, ".", 1);
    else
	write(1, &c, 1);
}

void *ft_print_memory(void *addr, unsigned int size)
{
    char *arr;
    unsigned int count;
    unsigned int a;
    unsigned int *spa;
    unsigned int sz;
    long long adr;

    a = 0;
    sz = size;
    *spa = 0;
    arr = (char *)addr;
    while (arr[a])
    {
	count = 0;
	if (a % 16 == 0)
	{
	    adr = (long long )addr;
	    adress(count, (long long)addr);
	}
	content16(arr[a], spa);
	if (sz == 0 && size % 16 > 0)
	{
	    while(sz % 16 != 0)
	    {
		write(1, " ", 1);
		sz--;
	    }
	}
	content(arr[a]);
	if ( a % 16 == 1 && a != 1)
	{
	    write(1, "\n", 1);
	    sz /= 16;
	}
	a++;
    }
    return addr;
}

int main(void)
{
    char arr[96] = "Bonjour les aminches...c est fou.tout.ce qu onpeut faire avec...print_memory....lol.lol. .";
    ft_print_memory(arr, 92);

    long long a;
    a = (long long)arr;
    adress(0, a);
}

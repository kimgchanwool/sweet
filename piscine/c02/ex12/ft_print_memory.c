#include <unistd.h>

void juso(long long addr, int count)
{
    char *arr;
    int temp;

    arr = "0123456789abcdef";
    if (count != 16)
    {
	if (addr / 16 == 0)
	{
	    temp = addr % 16;
	    write(1, &arr[temp], 1);
	}
	else
	{
	    temp = addr % 16;
	    write(1, &arr[temp], 1);
	}
	count += 1;
	juso(addr / 10, count);
    }
    if (count % 16 == 0 && count != 0)
	write(1, ": ", 2);
}

void content16(void *addr,  unsigned int count, unsigned int size)
{
    int a;
    unsigned int b;
    char *arr;
    char *arr2;

    arr2 = (char *)addr;
    arr = "0123456789abcdef";
    a = arr2[count] / 16;
    write(1, &arr[a], 1);
    a = arr2[count] % 16;
    write(1, &arr[a], 1);
    if ( count % 2 == 1)
	write(1, " ", 1);
    size -= 1;
    if (size == 0)
    {
	b = size % 16;
	while (size - b)
	{
	    write(1, " ", 1);
	    b++;
	}
    }
}

void content(void *addr, unsigned int count)
{
    int a;
    char *arr2;
    
    arr2 = (char *)addr;
    a = arr2[count];
    if ( 0 <= a && a < 32 || a == 127)
	write(1, &a, 1);
    else
	write(1, ".", 1);
}

void *ft_print_memory(void *addr, unsigned int size)
{
    long long home;
    int count;
    unsigned int i;

    i = 0;
    if (size <= 0)
	return 0;
    while (i < size)
    {	
	count = 0;
	if (i % 16 == 0)
	{
	     home = (long long)&addr[i];
	     juso(home, count);
	}
	content16(addr, count, size);
	content(addr, count);
	count++;
	if (i % 16 == 0 && i != 0)
	    write(1, "\n", 1);
	i++;
    }
    if (i - 1 % 16 != 0)
	write(1, "\n", 1);
    return (void *)addr;
}

int main(void)
{
    char arr[100] = "Bonjour les amainches111c est fou1tout1ce qu onpeut faire avec111print_memory1111lol1lol1 1";
    unsigned int a = 92;
    ft_print_memory(arr, a);
    return 0;
}

#include <stdio.h>

char	*test(char *arr)
{
    int a;
    int count;

    count = 0;
    a = 0;
    while (arr[a])
    {
	if (count == 0 &&  'a' <= arr[a] && arr[a] <= 'z')
	{
	    count = 1;
	    arr[a] -= 32;
	}
	else if (count == 1 && ('A' <= arr[a] && arr[a] <= 'Z'))
	    arr[a] += 32;
	else if ( ('9' < arr[a] && arr[a] < 'A') || 0 < arr[a] && arr[a] < 48
	       	|| 91 < arr[a] && arr[a] < 97 || 122 < arr[a])
	    count = 0;
	else 
	    count = 1;
	a++;
    }
    return arr;
}

int main(void)
{
    char arr[30] = "vida void 42 mo! >dsfj 2-sdk";
    printf("%s", test(arr));
    return 0;
}

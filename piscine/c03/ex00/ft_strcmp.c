#include <stdio.h>

int	vft_strcmp(char *s1, char *s2);

int main(void)
{
	char arr1[10] = "hello";
	char arr2[20] = "hepppp";
	printf("%d", vft_strcmp(arr1, arr2));
	return 0;
}	
int	vft_strcmp(char *s1, char *s2)
{
	char a;
	char b;

	while (1)
	{
		a = *s1++;
		b = *s2++;
		if (a != b)
		{
			return (a < b ? -1 : 1);
		}
		if (a == 0)
			break;
	}
	return 0;
}


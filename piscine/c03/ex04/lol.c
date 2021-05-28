#include <stdio.h>

char *ft_strstr(char* arr, char* find)
{
	int a;
	int b;
	b = 0;

	if (find == 0)
		return arr;
	while (*arr)
	{
		a = 0;
		if (arr[a] == find[a])
		{
			while ((arr[a] != 0) && (find[a] != 0) && (arr[b] = find[b]))
				a++;
			if (find[a] == 0)
				return arr;
		}
		arr++;
	}
	return (0);// 찾지 못한 경우.i
}
int main(void)
{
	char arr[12] = "helloworld";
	char find[12] = "worl";
	printf("%s", ft_strstr(arr, find));
	return 0;
}

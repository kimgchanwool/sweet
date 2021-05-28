#include <unistd.h>
#include <stdio.h>

void pt(char a)
{
	write(1, &a, 1);
}

void comb(void)
{
	char *arr;

	arr[0] = '0' - 1;
	while (++arr[0] <= '9')
	{
	arr[1] = '0' - 1;
		while (++arr[1] <= '9')
		{
			pt(arr[0]);
			pt(arr[1]);
			pt(' ');
			comb2(arr);
		}
	}
}


void comb2(char *arr)
{
	char *arr1;
	
	arr1[0] = '0' - 1;
	while (++arr1[0] <= '9')
        {
		arr1[1] = '0' - 1;
                while (++arr1[1] <= '9')
                {
			if (arr1[0] > arr[0] || (arr1[0] == arr[0] && arr1[1] < arr[1]))
                        {
				pt(arr[0]);
                       		pt(arr[1]);		
				if (arr[0] == '9' && arr[1] == '8')
                       		{		
					pt(',');
                       			pt(' ');
					break;
				}
			}
                }
        }
}

int main(void)
{
	comb();
	return 0;
}

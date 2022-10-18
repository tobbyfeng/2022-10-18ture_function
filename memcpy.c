#include <stdio.h>

void *my_memcpy(void *dest, const void *scr, size_t n )
{
	char *strr = dest;
	const char *str = scr;
	int i = 0;
	for(i=0; i<n; i++)
	{
		strr[i] = str[i];

	}
}

void show( char *str,int num )
{
	int i = 0;
	for( i=0; i<num; i++ )
	{
		printf("%d",str[i]);
	}
}

int main()
{
	char arr[] = {1,2,3,4,5,6,7,8,9};
	int n = 7;
	my_memcpy( arr+3, arr, n );
	show( arr,sizeof(arr) );
}

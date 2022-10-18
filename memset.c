#include <stdio.h>

void *my_memset( void *s, int ch, size_t n )
{
	int i = 0;
	for( i=0; i<n; i++ )
	{
		char *spr = s;
		spr[i] = ch;
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

void main()
{
	char arr[] = {1,23,4,5,6,7,8};
	int ch = 6;
	int n = 3;
	my_memset( arr, ch, n);
	show( arr,sizeof(arr) );
}

#include <stdio.h>

void my_bzero( void *s,size_t n)
{
	int i = 0;
	for(i=0; i<n; i++)
	{
		char *spr = s;
		spr[i] = 0;
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
	char arr[] = {1,2,3,4,5,6,7};
	int n = 4;
	my_bzero( arr , n );
	show( arr,sizeof(arr) );
}

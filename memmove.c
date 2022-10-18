#include <stdio.h>
#include <string.h>
#include <assert.h>

void my_memmove(void *par,const void *pbr,int n)
{
	assert(par);
	assert(pbr);

	char *parr = par;
	const char *pbrr = pbr;
	for( n-1; n>=0;n--)
	{
		parr[n] = pbrr[n];
	}
}
void show(char *parr,int size)
{
	int i = 0;
	for( i=0; i<size; i++)
	{
		printf("%d ",parr[i]);
	}
	printf("\n");
}

int main()
{
	char arr[] = {1,2,3,4,6,8,4,5,1};
	char brr[] = {2,3,6,4,8,1,7};
	my_memmove(arr+3,arr,3);
	int size = sizeof(arr);
	show(arr,size);
}


#include <stdio.h>
#include <string.h>
#include <assert.h>



char* mystrcat(char* str1, const char* str2)
{
	assert(str2 != NULL);

	char* tmp = str1;
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';

	return tmp;
}

int main()
{
	char srr[10] = { "abc" };
	char* str = mystrcat(srr, "hello");
	printf("srr = %s \n", srr);
	printf("str = %s \n", str);
	return 0;
}


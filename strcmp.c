#include <stdio.h>
#include <string.h>

int my_strcmp( const char*str1, const char *str2 )
{
	if( (*str1 == *str2) &&  (*str1 != '\0') )
	{
		str1++;
		str2++;
	}
	return *str1-*str2;
}
int main()
{
	char str1[100] = "hello";
	char *str = "healp";
	int ret = my_strcmp(str1,str);
	printf("%d \n", ret);
	return 0;
}


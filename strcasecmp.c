#include <stdio.h>
#include <string.h>

void turn( char *str1, char *str2 )//大写转小写
{
	char *strr1 = str1;
	char *strr2 = str2;
	while( *strr1 != '\0' )
	{
		if( *strr1 >= 'A' && *strr2 <= 'Z' )
		{
			*strr1 = *strr1-'A'+'a';
		}
	} 
	while( *strr2 != '\0' )
	{
		if( *strr2 >= 'A' && *strr2 <= 'Z' )
		{
			*strr2 = *strr2-'A'+'a';
		}
	} 
}

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
	char str1[100] = "Hello";
	char *str = "hello";
	turn(str1,str);
	int ret = my_strcmp(str1,str);
	printf("%d \n", ret);
	return 0;
}


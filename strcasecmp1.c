#include <stdio.h>
#include <assert.h>

int mystrcasecmp( const char *str1, const char *str2 )
{
	assert( str1 != NULL );
   	assert( str2 != NULL );
   	char tmp1 = 0;
   	char tmp2 = 0;
   	while( ( *str1 != '\0') || ( *str2 != '\0') )
   	{
   		tmp1 = *str1;
   		tmp2 = *str2;
   		if( tmp1 >= 'A' && tmp1 <= 'Z' )
		{
			tmp1 = tmp1-'A'+'a';
		}
		if( tmp2 >= 'A' && tmp2 <= 'Z' )
		{
			tmp2 = tmp2-'A'+'a';
		}
		if( tmp1 != tmp2 )
		{
			return tmp1-tmp2;
		}
		str1++;
		str2++;
   	}
}

int main()
{
	char *str1 = "HELLO";
	char *str2 = "hello";
	int ret = mystrcasecmp( str1,str2 );
	printf( "%d\n",ret );
}

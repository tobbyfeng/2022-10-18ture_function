#include <stdio.h>
//strstr strcat strtok
int cmp(const char *str,const char *s1)
{
	while(*str == *s1 && *s1 != '\0')
	{
		str++;
		s1++;
	}
	if(*s1 == '\0')
	{
		return 1;
	}
	return 0;

}
char * my_strstr(const char *str, const char *s1)
{

	while(*str)
	{
		if(cmp(str,s1))
		{
			return (char*)str;		
		}
		str++;
	}
	return NULL;

}
int main()
{
	char str[100] = {"hello"};
	char *s1 = "llo";
	my_strstr(str,s1);
	printf("%s \n", str);
	return 0;
}



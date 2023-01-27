00

#include<stdio.h>
#include<string.h>
int    main(void)
{
    char *str = "hello 42";
	char str2[] = "hello 19";
    printf("%d\n", ft_strcmp(str, str2));	
	printf("%d", strcmp(str, str2));
    return (0);
}

01

#include<stdio.h>
#include<string.h>
int    main(void)
{
    char *str = "hello 42";
	char str2[] = "hello 19";
    printf("%d\n", ft_strncmp(str, str2, 10));	
	printf("%d\n\n", strncmp(str, str2, 10));
	printf("%d\n", ft_strncmp(str, str2, 6));	
	printf("%d\n\n", strncmp(str, str2, 6));
	printf("%d\n", ft_strncmp(str, str2, 0));	
	printf("%d\n\n", strncmp(str, str2, 0));
	printf("%d\n", ft_strncmp(str, str2, -10));	
	printf("%d\n", strncmp(str, str2, -10));
    return (0);
}

02

#include <stdio.h>
#include <string.h>
int	main()
{
	char src[6] = "alive";
	char dest[10] = "I'm ";

	//printf("%s\n", strcat(dest, src));
	printf("%s\n", ft_strcat(dest, src));
}

03

#include <stdio.h>
#include <string.h>
int	main()
{
	char src[6] = "alive";
	char dest[10] = "I'm ";
	int nb = 2;

	//printf("%s\n", strncat(dest, src, nb));
	printf("%s\n", ft_strncat(dest, src, nb));
}

04

#include <stdio.h>
#include <string.h>
int	main(void)
{
	 char	*a = "to need look for a needle in a haystack";
	 char	*b = "needle";

	printf("%s\n", ft_strstr(a, b));
	printf("%s\n", strstr(a, b));
	printf("%s\n", ft_strstr("", ""));
	printf("%s\n", strstr("", ""));
	printf("%s\n", ft_strstr("a", ""));
	printf("%s\n", strstr("a", ""));
	printf("%s\n", ft_strstr("", "a"));
	printf("%s\n", strstr("", "a"));
	printf("%s\n", ft_strstr("abc", "a"));
	printf("%s\n", strstr("abc", "a"));
	printf("%s\n", ft_strstr("abc", "c"));
	printf("%s\n", strstr("abc", "c"));
	 printf("%s\n", ft_strstr("abc", "abc"));
	 printf("%s\n", strstr("abc", "abc"));
	 printf("%s\n", ft_strstr("abc", "abce"));
	 printf("%s\n", strstr("abc", "abce"));
	 printf("%s\n", ft_strstr("AbcAbcdAbcde11", "Abcd"));
	printf("%s\n", strstr("AbcAbcdAbcde", "Abcd"));
	return (0);
}





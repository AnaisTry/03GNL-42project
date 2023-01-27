00

#include<stdio.h>
int    main(void)
{
    char *src = "blabla";
    char dest[] = "       ";
	ft_strcpy(dest, src);
    printf("%s", dest);	
    return (0);
}

01

#include<stdio.h>
int    main(void)
{
    char *src = "blabla";
	int size_dest = 10;
    char dest[size_dest];
	ft_strncpy(dest, src, size_dest);
    printf("%s", dest);
    return (0);
}

#include <stdio.h>
#include <string.h>
int    main(void)
{
    char            str1[] = "123456xxxxxxxx";
    char            str2[] = "123456xxxxxxxx";
    char            *src = "abc";
    unsigned int    size = 1;

    strncpy(str1, src, size);
    printf("|%s| vs ",str1);
    ft_strncpy(str2, src, size);
    printf("|%s|\n",str2);
    return (0);
}

#include<stdio.h>
int    main(void)
{
    char *src = "blabla";
	int size_dest = 3;
	char dest[3];	
	ft_strncpy(dest, src, size_dest);
    printf("%s", dest);
    return (0);
}

02

#include<stdio.h>
int	main()
{
	char	str[] = "jeNeContiensQueDesCaracteres";
	char	str1[] = "je contiens des espaces";
	char	str2[] = "";
	char	str3[] = "lowercase";
	char	str4[] = "number5";
	char	str5[] = "UPPERCASE";

	printf("str retourne %d\n", ft_str_is_alpha(str));
	printf("str1 retourne %d\n", ft_str_is_alpha(str1));
	printf("str2 retourne %d\n", ft_str_is_alpha(str2));
	printf("str3 retourne %d\n", ft_str_is_alpha(str3));
	printf("str4 retourne %d\n", ft_str_is_alpha(str4));
	printf("str5 retourne %d\n", ft_str_is_alpha(str5));
}

03

#include<stdio.h>
int	main()
{
	char	str[] = "15644879";
	char	str1[] = "1 2 3 4";
	char	str2[] = "";
	char	str3[] = "1nombre";
	

	printf("str retourne %d\n", ft_str_is_numeric(str));
	printf("str1 retourne %d\n", ft_str_is_numeric(str1));
	printf("str2 retourne %d\n", ft_str_is_numeric(str2));
	printf("str3 retourne %d\n", ft_str_is_numeric(str3));
}

04

#include<stdio.h>
int	main()
{
	char	str[] = "jeNeContiensQueDesCaracteres";
	char	str1[] = "je contiens des espaces";
	char	str2[] = "";
	char	str3[] = "lowercase";
	char	str4[] = "number5";
	char	str5[] = "UPPERCASE";

	printf("str retourne %d\n", ft_str_is_lowercase(str));
	printf("str1 retourne %d\n", ft_str_is_lowercase(str1));
	printf("str2 retourne %d\n", ft_str_is_lowercase(str2));
	printf("str3 retourne %d\n", ft_str_is_lowercase(str3));
	printf("str4 retourne %d\n", ft_str_is_lowercase(str4));
	printf("str5 retourne %d\n", ft_str_is_lowercase(str5));
}

05

#include<stdio.h>
int	main()
{
	char	str[] = "jeNeContiensQueDesCaracteres";
	char	str1[] = "je contiens des espaces";
	char	str2[] = "";
	char	str3[] = "lowercase";
	char	str4[] = "number5";
	char	str5[] = "UPPERCASE";

	printf("str retourne %d\n", ft_str_is_uppercase(str));
	printf("str1 retourne %d\n", ft_str_is_uppercase(str1));
	printf("str2 retourne %d\n", ft_str_is_uppercase(str2));
	printf("str3 retourne %d\n", ft_str_is_uppercase(str3));
	printf("str4 retourne %d\n", ft_str_is_uppercase(str4));
	printf("str5 retourne %d\n", ft_str_is_uppercase(str5));
}

06

#include<stdio.h>
int	main()
{
	char	str[] = "1 5644 879";
	char	str1[] = "1Nombre";
	char	str2[] = "Un espace \n";
	char	str3[] = "0dcbsidwhiu";
	char	str4[] = "";
	char	str5[] = "\n\t\a\v\r\f\b\n";
	

	printf("str retourne %d\n", ft_str_is_printable(str));
	printf("str1 retourne %d\n", ft_str_is_printable(str1));
	printf("str2 retourne %d\n", ft_str_is_printable(str2));
	printf("str3 retourne %d\n", ft_str_is_printable(str3));
	printf("str4 retourne %d\n", ft_str_is_printable(str4));
	printf("str5 retourne %d\n", ft_str_is_printable(str5));
}

07
#include<stdio.h>
int	main()
{
	char	str[] = "jeNeContiensQueDesCaracteres";
	char	str1[] = "je contiens des espaces";
	char	str2[] = "";
	char	str3[] = "lowercase";
	char	str4[] = "number5";
	char	str5[] = "UPPERCASE";

	printf("str retourne %s\n", ft_strupcase(str));
	printf("str1 retourne %s\n", ft_strupcase(str1));
	printf("str2 retourne %s\n", ft_strupcase(str2));
	printf("str3 retourne %s\n", ft_strupcase(str3));
	printf("str4 retourne %s\n", ft_strupcase(str4));
	printf("str5 retourne %s\n", ft_strupcase(str5));
}

08
#include<stdio.h>
int	main()
{
	char	str[] = "jeNeContiensQueDesCaracteres";
	char	str1[] = "je contiens des espaces";
	char	str2[] = "";
	char	str3[] = "lowercase";
	char	str4[] = "number5";
	char	str5[] = "UPPERCASE";

	printf("str retourne %s\n", ft_strlowcase(str));
	printf("str1 retourne %s\n", ft_strlowcase(str1));
	printf("str2 retourne %s\n", ft_strlowcase(str2));
	printf("str3 retourne %s\n", ft_strlowcase(str3));
	printf("str4 retourne %s\n", ft_strlowcase(str4));
	printf("str5 retourne %s\n", ft_strlowcase(str5));
}

09

#include<stdio.h>
int	main()
{
	char	str[] = "jeNeContiensQueDesCaracteres";
	char	str1[] = "je contiens des espaces";
	char	str2[] = "";
	char	str3[] = "lowercase";
	char	str4[] = "number5";
	char	str5[] = "UPPERCASE is the best";
	char	str6[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("str %s\n", ft_strcapitalize(str));
	printf("str1 %s\n", ft_strcapitalize(str1));
	printf("str2 %s\n", ft_strcapitalize(str2));
	printf("str3 %s\n", ft_strcapitalize(str3));
	printf("str4 %s\n", ft_strcapitalize(str4));
	printf("str5 %s\n", ft_strcapitalize(str5));
	printf("str6 %s\n", ft_strcapitalize(str6));
}

10

#include <string.h>
#include<stdio.h>
int    main(void)
{
    char *src = "exact";
	char *src1 = "shrt";
	char *src2 = "a very long sentence";
	int size_dest = 6;
    char dest[6];

    printf("copied '%s', src is %d characters long\n", dest, ft_strlcpy(dest, src, size_dest));
	printf("copied '%s', src is %d characters long\n", dest, ft_strlcpy(dest, src1, size_dest));
	printf("copied '%s', src is %d characters long\n", dest, ft_strlcpy(dest, src2, size_dest));
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:19:48 by angassin          #+#    #+#             */
/*   Updated: 2021/09/17 18:19:53 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
The  strstr()  function  finds the first occurrence 
of the substring to_find in the string str. 
The terminating null bytes ('\0') are not compared.
*/
char    *ft_strstr(char *str, char *to_find)
{
    int    i;
    int    j;

    i = 0;
    j = 0;
    if (!(*to_find))
    {
        return (str);
    }
    while (*str)
    {
        while (str[i] == to_find[j])
        {
            j++;
            if (!(to_find[j]))
            {
                return (str + (i - (j - 1)));
            }
        }
        else
            j = 0;
        //if (str[i] != to_find[j])
		i++;
            
    }
    return (NULL);
}
#include <stdio.h>
#include <string.h>
int	main(void)
{
	 char	a[] = "hello";
	 char	b[] = "llo";

	printf("%s\n", ft_strstr(a, b));
	//printf("%s\n", strstr(a, b));
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
	return (0);
}

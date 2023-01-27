/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 10:14:34 by angassin          #+#    #+#             */
/*   Updated: 2022/04/14 14:28:21 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	take the full size of the buffer (not just the length) 
	and guarantee to NUL-terminate the result (as long as size is larger than 0)
	src must be NUL-terminated
	copies up to size - 1 characters from the NUL-terminated string src to dst, 
	NUL-terminating the result.
	return the total length of src (without \0)
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while ((i < size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

#include <string.h>
#include<stdio.h>
int    main(void)
{
    char *src = "exact";
	char *src1 = "shrt";
	char *src2 = "a very long sentence";
	int size_dest = 21;
    char dest[21];

	printf("copied '%s', src is %d characters long\n", dest, strlcpy(dest, src, size_dest));
    printf("copied '%s', src is %d characters long\n", dest, ft_strlcpy(dest, src, size_dest));
	printf("copied '%s', src is %d characters long\n", dest, ft_strlcpy(dest, src1, size_dest));
	printf("copied '%s', src is %d characters long\n", dest, ft_strlcpy(dest, src2, size_dest));
    return (0);
}
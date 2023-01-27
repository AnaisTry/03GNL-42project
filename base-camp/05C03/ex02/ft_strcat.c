/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:26:17 by angassin          #+#    #+#             */
/*   Updated: 2021/09/16 14:26:34 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Appends the src string to the dest string, 
	overwriting the terminating null byte ('\0') at the end of dest, 
	and then adds a terminating null byte.  
	The strings may not overlap, 
	and the dest string must have enough space for the  result.   
	If  dest  is  not large enough, program behavior is unpredictable.
*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

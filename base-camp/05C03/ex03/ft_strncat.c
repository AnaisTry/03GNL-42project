/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 09:44:42 by angassin          #+#    #+#             */
/*   Updated: 2021/09/17 09:44:47 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Appends the src string to the dest string,
	overwriting the terminating null byte ('\0') at the end of dest,
	and then adds a terminating null byte.
	The strings may not overlap,
	and the dest string must have enough space for the  result.
	If dest is not large enough, program behavior is unpredictable.
	will use at most n bytes from src
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len_s;

	i = 0;
	len_s = 0;
	while (dest[i])
		i++;
	while (src[len_s] && (len_s < nb))
	{
		dest[i + len_s] = src[len_s];
		len_s++;
	}
	dest[i + len_s] = '\0';
	return (dest);
}

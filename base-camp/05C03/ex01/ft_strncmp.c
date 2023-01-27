/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:08:44 by angassin          #+#    #+#             */
/*   Updated: 2021/09/16 09:08:47 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strncmp() function return an integer less than, equal to, 
or greater than zero if the first n  bytes of s1 are
found, respectively, to be less than, to match, or be greater than s2.
It compares only the first (at most) n bytes of s1 and s2.
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && (s1[i] == s2[i]))
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

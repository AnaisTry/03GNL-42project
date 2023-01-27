/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:42:04 by angassin          #+#    #+#             */
/*   Updated: 2021/09/15 17:42:08 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   The  strcmp() function compares the two strings s1 and s2.  
   It returns an integer less than, equal to, 
   or greater than zero if s1 is found,
   respectively, to be less than, to match, or be greater than s2.
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}


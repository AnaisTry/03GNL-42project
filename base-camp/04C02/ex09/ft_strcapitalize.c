/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 05:48:34 by angassin          #+#    #+#             */
/*   Updated: 2021/09/15 05:48:41 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char str);
int	ft_is_alphanum(char str);

/*
Capitalize first letter of words :
	put everything in lowercase
	if at the beggining of the line and alpha, capitalize
	if alpha put the first letter of the words in uppercase :
		if alpha and previous is not alphanum, capitalize
*/
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	if (ft_is_alpha(str[0]))
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		if ((ft_is_alpha(str[i])) && !(ft_is_alphanum(str[i - 1])))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int	ft_is_alphanum(char c)
{
	if (!((c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z')
			|| (c >= '0' && c <= '9')))
	{
		return (0);
	}
	return (1);
}

int	ft_is_alpha(char c)
{
	if (!((c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z')))
	{
		return (0);
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:57:08 by angassin          #+#    #+#             */
/*   Updated: 2021/09/12 21:57:13 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

// #include<stdio.h>
// int main()
// {
// 	char *s = "awesome";

// 	printf("%s has %i characters", s, ft_strlen(s));
// }
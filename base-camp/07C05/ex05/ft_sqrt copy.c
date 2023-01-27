/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:53:28 by angassin          #+#    #+#             */
/*   Updated: 2021/09/21 17:53:31 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns the square root of a number (if it exists), 
or 0 if the square root is an irrational number.
*/
int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 1)
		return (0);
	sqrt = 1;
	while (sqrt < 46341 && sqrt * sqrt <= nb)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	int n;

// 	n = 6461764;
// 	printf("the sqrt of %d is %d", n, ft_sqrt(n));
// }
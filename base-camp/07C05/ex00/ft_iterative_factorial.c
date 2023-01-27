/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 08:47:58 by angassin          #+#    #+#             */
/*   Updated: 2021/09/21 08:48:02 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns a number that is the result of the factorial 
	of the number given as parameter.
	Invalid argument returns 0.	
*/

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i > 0)
	{
		nb *= i;
		i--;
	}
	return (nb);
}

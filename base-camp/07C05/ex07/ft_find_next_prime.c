/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 09:34:08 by angassin          #+#    #+#             */
/*   Updated: 2021/09/22 09:34:11 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	returns the next prime number greater or equal to the number
	given as argument 
*/

int	ft_sqrt(int nb);
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (nb > 2147483629)
		return (2147483647);
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	check;
	int	sqrt;

	if (nb < 2)
		return (0);
	check = 2;
	sqrt = ft_sqrt(nb);
	while (check < sqrt)
	{
		if (nb % check == 0)
			return (0);
		check++;
	}
	return (1);
}

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	n;

	if (nb == 0 || nb == 1)
		return (nb);
	sqrt = 1;
	n = 1;
	while (n <= nb)
	{
		sqrt++;
		n = sqrt * sqrt;
	}
	return (sqrt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:48:19 by angassin          #+#    #+#             */
/*   Updated: 2021/09/21 19:48:25 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_is_prime(int nb)
{
	int	check;

	if (nb < 2)
		return (0);
	check = 2;
	while (check < ft_sqrt(nb))
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:55:11 by angassin          #+#    #+#             */
/*   Updated: 2021/09/21 12:55:17 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  Returns the value of a power applied to a number.
  A power lower than 0 returns 0. Overflows must not be handled.
  0 power 0 returns 1.
*/
int	ft_iterative_power(int nb, int power)
{
	int	ret;

	ret = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		ret *= nb;
		power--;
	}
	return (ret);
}

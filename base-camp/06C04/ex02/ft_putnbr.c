/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:07:13 by angassin          #+#    #+#             */
/*   Updated: 2021/09/08 21:07:18 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

//recursive function
void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -(unsigned int)nb;
	}
	else
	{
		n = nb;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int	main()
// {
// 	int n = -42;
// 	ft_putnbr(n);
// }
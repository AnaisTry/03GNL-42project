/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:27:35 by angassin          #+#    #+#             */
/*   Updated: 2021/09/08 10:27:48 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void)
{
	char	nbr0;
	char	nbr1;
	char	nbr2;

	nbr0 = 47;
	while (nbr0++ < '7')
	{	
		nbr1 = nbr0;
		while (nbr1++ < '8')
		{
			nbr2 = nbr1;
			while (nbr2++ < '9')
			{
				write(1, &nbr0, 1);
				write(1, &nbr1, 1);
				write(1, &nbr2, 1);
				if (nbr0 != '7')
				{
					write(1, ", ", 2);
				}
			}
		}		
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// }
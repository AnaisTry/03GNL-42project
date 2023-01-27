/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:51:08 by angassin          #+#    #+#             */
/*   Updated: 2021/09/08 16:51:15 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);
void	print(int x, int y);

//increase the two digits nb x and two digits nb y
void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			print (x, y);
			y++;
		}
		x++;
	}	
}

void	print(int x, int y)
{
	ft_putchar('0' + x / 10);
	ft_putchar('0' + x % 10);
	ft_putchar(' ');
	ft_putchar('0' + y / 10);
	ft_putchar('0' + y % 10);
	if (x != 98)
		write(1, ", ", 2);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int		main(void)
// {
// 	ft_print_comb2();
// }
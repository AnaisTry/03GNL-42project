/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdc <jdc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:02:45 by jdc               #+#    #+#             */
/*   Updated: 2021/09/12 21:53:33 by jdc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	display(int x, int y, int column, int line);

void	rush(int x, int y)
{
	int	column;
	int	line;

	column = 1;
	line = 1;
	while (line <= y)
	{
		while (column <= x)
		{
			display(x, y, column, line);
			column++;
		}
		column = 1;
		line++;
		ft_putchar('\n');
	}
}

void	display(int x, int y, int column, int line)
{
	if (column == 1 && line == 1)
	{
		ft_putchar('A');
	}
	else if ((column == x && line == 1) || (column == 1 && line == y))
	{
		ft_putchar('C');
	}
	else if (column == x && line == y)
	{
		ft_putchar('A');
	}
	else if ((column == 1 || column == x) || (line == 1 || line == y))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
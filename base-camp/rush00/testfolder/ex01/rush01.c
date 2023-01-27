/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdc <jdc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:32:39 by angassin          #+#    #+#             */
/*   Updated: 2021/09/12 21:39:21 by jdc              ###   ########.fr       */
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
		ft_putchar('/');
	}
	else if ((column == x && line == 1) || (column == 1 && line == y))
	{
		ft_putchar(92);
	}
	else if (column == x && line == y)
	{
		ft_putchar('/');
	}
	else if ((column == 1 || column == x) || (line == 1 || line == y))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

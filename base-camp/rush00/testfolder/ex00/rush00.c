/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:56:05 by angassin          #+#    #+#             */
/*   Updated: 2021/09/11 17:56:11 by angassin         ###   ########.fr       */
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
	if ((column == 1 && line == 1) || (column == x && line == y)
		|| (column == 1 && line == y) || (column == x && line == 1))
	{
		ft_putchar('o');
	}		
	else if ((column == 1) || (column == x))
	{
		ft_putchar('|');
	}
	else if (line == 1 || line == y)
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}
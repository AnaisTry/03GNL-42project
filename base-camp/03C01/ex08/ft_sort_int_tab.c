/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 09:34:16 by angassin          #+#    #+#             */
/*   Updated: 2021/09/13 09:34:20 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

/*
Selection sort
For i from 0 to size–1
    Find smallest item between i'th item and last item
    Swap smallest item with i'th item
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	next;
	int	cursor;

	i = 0;
	while (i < size - 1)
	{
		next = i + 1;
		cursor = i;
		while (next < size)
		{
			if (tab[cursor] > tab[next])
			{
				cursor = next;
			}
			next++;
		}
		ft_swap(&tab[cursor], &tab[i]);
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

// #include<stdio.h>

// int	main (void)
// {
// 	int		size;
// 	int 	*tab;
// 	int 	i;	
// 	i = 0;
// 	size = 5;
// 	tab = (int[]){8, 6, -2, 100, 5};
// 	ft_sort_int_tab(tab, size);
// 	while(i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
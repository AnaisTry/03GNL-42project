/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 22:17:38 by angassin          #+#    #+#             */
/*   Updated: 2021/09/12 22:17:51 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}

// #include<stdio.h>
// int	main()
// {
// 	int tab[] = {0, 1, 2, 3};
// 	int size = 4;
// 	int i = 0;
// 	ft_rev_int_tab(tab, size);
// 	while(i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
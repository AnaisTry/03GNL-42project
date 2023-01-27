/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:17:33 by angassin          #+#    #+#             */
/*   Updated: 2021/09/09 20:17:39 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

/*
#include<stdio.h>
int	main()
{
	int x = 0;
	int y = 1;

	int *px = &x;
	int	*py = &y;

	ft_swap(px, py);
	printf("x = %d\n", x);
	printf("y = %d\n", y);
}
*/
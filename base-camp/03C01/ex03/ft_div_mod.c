/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 21:04:54 by angassin          #+#    #+#             */
/*   Updated: 2021/09/09 21:04:59 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include<stdio.h>
int main()
{
	int x = 5;
	int y = 2;
	int res_div;
	int res_mod;
	int	*pdiv = &res_div;
	int *pmod = &res_mod;
	
	ft_div_mod(x, y, pdiv, pmod);
	printf("%d divided by %d = %d\n", x, y, res_div);
	printf("the remainder of the division is %d\n", res_mod);
}
*/
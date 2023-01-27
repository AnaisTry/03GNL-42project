/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 09:36:50 by angassin          #+#    #+#             */
/*   Updated: 2021/09/12 09:37:00 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

// #include<stdio.h>
// int main()
// {
// 	int x = 42;
// 	int y = 19;
// 	printf("%d divided by %d", x, y);
// 	ft_ultimate_div_mod(&x, &y);
// 	printf(" = %d\n", x);
// 	printf("the remainder of the division is %d\n", y);
// 	return (0);
// }
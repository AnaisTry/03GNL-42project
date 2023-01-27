/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:48:19 by angassin          #+#    #+#             */
/*   Updated: 2021/09/21 19:48:25 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	check;

	if (nb < 2)
		return (0);
	check = 2;
	while (check <= nb / 2)
	{
		if (nb % check == 0)
			return (0);
		check++;
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {
// 	int n;
// 	n = 103;
// 	for (int i = 0; i <= n; i++)
// 	{
// 		if (ft_is_prime(i))
// 			printf("%d, is prime\n", i);
// 		else
// 			printf("%d, is not prime\n", i);
// 	}
// }
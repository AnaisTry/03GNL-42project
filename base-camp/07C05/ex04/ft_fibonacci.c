/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:00:34 by angassin          #+#    #+#             */
/*   Updated: 2021/09/21 17:00:38 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns the n-th element of the Fibonacci sequence, 
the first element being at the 0 index.
Returns -1 when the index is less than 0.
*/
int	ft_fibonacci(int index)
{	
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci (index - 2));
}

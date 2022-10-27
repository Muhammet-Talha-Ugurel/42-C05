/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:58:35 by mugurel           #+#    #+#             */
/*   Updated: 2022/10/24 07:16:24 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci_rec(int index, int n1, int n2)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (n2);
	if (index > 1)
		return (ft_fibonacci_rec(index - 1, n2, n1 + n2));
	return (-1);
}

int	ft_fibonacci(int index)
{
	return (ft_fibonacci_rec(index, 0, 1));
}

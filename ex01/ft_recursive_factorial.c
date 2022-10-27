/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:55:34 by mugurel           #+#    #+#             */
/*   Updated: 2022/10/23 23:56:30 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial_recur(int i, int n)
{
	if (i == 0)
		return (n);
	if (i >= 0)
		return (ft_recursive_factorial_recur(i - 1, n * i));
	return (0);
}

int	ft_recursive_factorial(int nb)
{
	return (ft_recursive_factorial_recur(nb, 1));
}

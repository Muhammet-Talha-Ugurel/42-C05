/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:38:40 by mugurel           #+#    #+#             */
/*   Updated: 2022/10/23 22:46:52 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = nb;
	n = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	while (i != 0)
	{
		n = n * i;
		i--;
	}
	return (n);
}

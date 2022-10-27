/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:30:43 by mugurel           #+#    #+#             */
/*   Updated: 2022/10/23 23:40:58 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	p;
	int	n;

	n = nb;
	p = power;
	if (nb == 0 && power == 0)
		return (1);
	while (p-- != 1)
	{
		n = n * nb;
	}
	return (n);
}

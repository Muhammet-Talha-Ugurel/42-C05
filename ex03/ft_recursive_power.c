/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:43:11 by mugurel           #+#    #+#             */
/*   Updated: 2022/10/23 23:54:53 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power_rev(int nb, int power, int n)
{	
	if (nb == 0 && power == 0)
		return (1);
	if (power == 1)
		return (n);
	if (power >= 0)
		return (ft_recursive_power_rev(nb, power -1, n * nb));
	return (0);
}

int	ft_recursive_power(int nb, int power)
{
	return (ft_recursive_power_rev(nb, power, nb));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:37:36 by mugurel           #+#    #+#             */
/*   Updated: 2022/10/24 22:18:29 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (nb % i != 0)
	{
		if (i > nb)
			break ;
		i++;
	}
	if (nb == i)
	{
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	n;

	n = nb;
	while (ft_is_prime(n) != 1)
	{
		n++;
	}
	return (n);
}

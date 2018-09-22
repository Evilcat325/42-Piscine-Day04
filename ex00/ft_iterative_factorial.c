/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 00:44:57 by seli              #+#    #+#             */
/*   Updated: 2018/09/22 01:23:22 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	result = ft_iterative_factorial(nb - 1);
	if (result * nb < result)
		return (0);
	return (nb * nb);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 01:54:34 by seli              #+#    #+#             */
/*   Updated: 2018/09/22 02:11:28 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int result;
	int prev_result;

	if (nb == 1)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	prev_result = ft_recursive_power(nb, power - 1);
	if (prev_result == -1)
		return (-1);
	result = prev_result * nb;
	if (result / nb != prev_result)
		return (-1);
	return (result);
}

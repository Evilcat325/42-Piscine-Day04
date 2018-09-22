/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 01:54:34 by seli              #+#    #+#             */
/*   Updated: 2018/09/22 02:37:56 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_with_prev_result(int nb, int power, int result)
{
	int prev_result;

	if (nb == 1)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	prev_result = result;
	result *= nb;
	if (result / nb != prev_result)
		return (-1);
	prev_result = ft_with_prev_result(nb, power - 1, result);
	if (prev_result == -1)
		return (-1);
	return (prev_result * nb);
}

int	ft_recursive_power(int nb, int power)
{
	return (ft_with_prev_result(nb, power, 1));
}

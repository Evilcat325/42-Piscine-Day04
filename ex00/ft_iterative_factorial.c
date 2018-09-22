/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 00:44:57 by seli              #+#    #+#             */
/*   Updated: 2018/09/22 01:30:12 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;
	int next_result;

	if (nb == 1 || nb <= 0)
		return (1);
	result = ft_iterative_factorial(nb - 1);
	next_result = result * nb;
	if (next_result / nb < result)
		return (0);
	return (next_result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 00:44:57 by seli              #+#    #+#             */
/*   Updated: 2018/09/22 21:11:49 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;
	int next_result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 1)
	{
		result *= nb;
		nb--;
		next_result = result * nb;
		if (next_result / nb != result)
			return (0);
	}
	return (next_result);
}

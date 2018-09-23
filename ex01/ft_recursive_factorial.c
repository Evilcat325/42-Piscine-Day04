/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 01:34:01 by seli              #+#    #+#             */
/*   Updated: 2018/09/22 21:37:17 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int result;
	int next_result;

	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	result = ft_recursive_factorial(nb - 1);
	next_result = result * nb;
	if (next_result / nb != result)
		return (0);
	return (next_result);
}

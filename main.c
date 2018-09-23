/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 02:15:28 by seli              #+#    #+#             */
/*   Updated: 2018/09/22 02:18:05 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 1));
	printf("%d\n", ft_recursive_power(2, 4));
	printf("%d\n", ft_recursive_power(2, 8));
	printf("%d\n", ft_recursive_power(2, 16));
	printf("%d\n", ft_recursive_power(2, 31));
	printf("%d\n", ft_recursive_power(2, 64));
	printf("%d\n", ft_recursive_power(2, 100));
	printf("%d\n", ft_recursive_power(2, 1000));
	printf("%d\n", ft_recursive_power(2, 10000000));
	return (0);
}

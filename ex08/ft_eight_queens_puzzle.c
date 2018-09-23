/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 22:00:22 by seli              #+#    #+#             */
/*   Updated: 2018/09/22 23:02:20 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_find_position(int column);
int		ft_queen_meet(int column, int position);

int	g_count;
int	g_p[8];

int		ft_eight_queens_puzzle(void)
{
	g_count = 0;
	ft_find_position(0);
	return g_count;
}

void	ft_find_position(int column)
{
	int	position;

	position = 0;
	while (position < 8)
	{
		if (ft_queen_meet(column, position))
			position++;
		else
		{
			g_p[column] = position++;
			if (column == 7) g_count++;
			ft_find_position(column + 1);
		}
	}
}

int		ft_queen_meet(int column, int position)
{
	int	index;

	index = 0;
	while (index < column)
	{
		if (g_p[index] == position)
			return (1);
		if (g_p[index] - (column - index) == position)
			return (1);
		if (g_p[index] + (column - index) == position)
			return (1);
		index++;
	}
	return (0);
}
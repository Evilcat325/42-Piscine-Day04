/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 22:55:07 by seli              #+#    #+#             */
/*   Updated: 2018/09/22 23:02:13 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 22:00:22 by seli              #+#    #+#             */
/*   Updated: 2018/09/22 22:48:19 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_find_position(int column);
void	ft_putchar(char c);
void	ft_print(void);
int		ft_queen_meet(int column, int position);

int	g_p[8];

void	ft_eight_queens_puzzle_2(void)
{
	ft_find_position(0);
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
			if (column == 7) ft_print();
			ft_find_position(column + 1);
		}
	}
}

void	ft_print(void)
{
	int index;

	index = 0;
	while (index < 8)
	{
		ft_putchar(g_p[index] + 1 + '0');
		index++;
	}
	ft_putchar('\n');
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
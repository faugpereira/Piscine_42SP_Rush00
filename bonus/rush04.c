/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:28:08 by aprotoce          #+#    #+#             */
/*   Updated: 2021/04/04 08:06:32 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	int row;
	int col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (row == 1 && col == 1)
				ft_putchar('A');
			else if ((row == y && col == 1) || (row == 1 && col == x))
				ft_putchar('C');
			else if (row == y && col == x)
				ft_putchar('A');
			else if ((row > 1 && row < y) && (col > 1 && col < x))
				ft_putchar(' ');
			else
				ft_putchar('B');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

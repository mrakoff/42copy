/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:26:15 by markmull          #+#    #+#             */
/*   Updated: 2025/01/22 00:06:25 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	draw_line(int x);


int main(void)
{
	rush(5, 5);
}

void	draw_line(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('A');
		}
		else if (i == x -1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
	ft_putchar('\n');
}

void	draw_middle(int x, int y)
{
	int	j;
	int	i;

	j = 1;
	while (j < y - 1)
	{
		i = 0;
		while (i < x)
		{
			if (i == 0 || i == x - 1)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		if (x <= 0)
			write(1, "Error: no x-axis!\n", 18);
		if (y <= 0)
			write(1, "Error: no y-axis!\n", 18);
		return ;
	}
	draw_line(x);
	draw_middle(x, y);
	if (y > 1)
		draw_line(x);
}

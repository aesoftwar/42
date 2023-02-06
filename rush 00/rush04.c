/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibyildiz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:55:59 by ibyildiz          #+#    #+#             */
/*   Updated: 2023/02/05 22:38:16 by ibyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	loop(int p, int r, int x, int y)
{
	r = 1;
	while (r <= y && x > 0)
	{
		p = 1;
		while (p <= x)
		{
			if ((p == 1 && r == 1) || (p == x && r == y && p != 1 && r != 1))
				ft_putchar('A');
			else if ((p == x && r == 1) || (p == 1 && r == y))
				ft_putchar('C');
			else if ((p == 1) || (p == x) || (r == 1) || (r == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			p++;
		}
		ft_putchar('\n');
		r++;
	}
}

void	rush(int x, int y)
{
	int	p;
	int	r;

	r = 0;
	p = 0;
	if (x <= 0 || y <= 0)
	{
		write(1, "birden baslayarak pazitif bir deger giriniz", 50);
	}
	else
	{
		loop(p, r, x, y);
	}
}

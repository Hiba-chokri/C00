/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichokri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:46:12 by hichokri          #+#    #+#             */
/*   Updated: 2023/09/13 21:40:46 by hichokri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = -1;
	while (++a <= 7)
	{
		b = a;
		while (++b <= 8)
		{
			c = b;
			while (++c <= 9)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
				if (a != 7)
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}

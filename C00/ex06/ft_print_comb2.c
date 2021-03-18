/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunmich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:20:06 by hyunmich          #+#    #+#             */
/*   Updated: 2021/03/11 19:16:26 by hyunmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	reset(char *a1, char *a2, char *b1, char *b2)
{
	*a1 = '0';
	*a2 = '0';
	*b1 = '0';
	*b2 = '1';
}

void	ft_print_if(char *a1, char *a2, char *b1, char *b2)
{
	if (*b2 == '9' + 1)
	{
		(*b1)++;
		*b2 = '0';
		if (*b1 == '9' + 1)
		{
			(*a2)++;
			*b1 = *a1;
			*b2 = *a2 + 1;
			if (*b2 == '9' + 1)
			{
				(*b1)++;
				*b2 = '0';
			}
			if (*a2 == '9' + 1)
			{
				(*a1)++;
				*a2 = '0';
				*b1 = *a1;
				*b2 = *a2 + 1;
			}
		}
	}
}

void	ft_print_comb2(void)
{
	char a1;
	char a2;
	char b1;
	char b2;

	reset(&a1, &a2, &b1, &b2);
	while (a1 <= '9' && a2 <= '9' && b1 <= '9' && b2 <= '9')
	{
		write(1, &a1, 1);
		write(1, &a2, 1);
		write(1, " ", 1);
		write(1, &b1, 1);
		write(1, &b2, 1);
		if (a1 == '9' && a2 == '8' && b1 == '9' && b2 == '9')
			break ;
		write(1, ",", 1);
		write(1, " ", 1);
		b2++;
		ft_print_if(&a1, &a2, &b1, &b2);
	}
}

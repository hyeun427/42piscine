/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunmich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:47:21 by hyunmich          #+#    #+#             */
/*   Updated: 2021/03/11 17:14:28 by hyunmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char numarr[3];
	char remain[2];

	numarr[0] = '0';
	remain[0] = ',';
	remain[1] = ' ';
	while (numarr[0] <= '7')
	{
		numarr[1] = numarr[0] + 1;
		while (numarr[1] <= '8')
		{
			numarr[2] = numarr[1] + 1;
			while (numarr[2] <= '9')
			{
				write(1, numarr, 3);
				if (numarr[0] != '7' || numarr[1] != '8' || numarr[2] != '9')
				{
					write(1, remain, 2);
				}
				++numarr[2];
			}
			++numarr[1];
		}
		++numarr[0];
	}
}

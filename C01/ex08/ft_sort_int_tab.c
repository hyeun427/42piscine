/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunmich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:36:41 by hyunmich          #+#    #+#             */
/*   Updated: 2021/03/14 18:40:10 by hyunmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int j;

	j = 0;
	while (j < size - 1)
	{
		if (tab[j] > tab[j + 1])
		{
			temp = tab[j + 1];
			tab[j + 1] = tab[j];
			tab[j] = temp;
			j = 0;
		}
		else
			j++;
	}
}

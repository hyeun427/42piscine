/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunmich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 06:01:35 by hyunmich          #+#    #+#             */
/*   Updated: 2021/03/18 14:38:14 by hyunmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		number(char c)
{
	return (c >= '0' && c <= '9');
}

int		lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (upper(str[i]))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!i && lower(str[i]))
			str[0] = str[0] - 32;
		if (!number(str[i]) && !(lower(str[i]) || upper(str[i])))
			if (lower(str[i + 1]))
				str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}

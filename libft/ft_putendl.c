/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brel-baz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 08:40:33 by brel-baz          #+#    #+#             */
/*   Updated: 2016/11/26 23:34:57 by brel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(1, s + i, 1);
			i++;
		}
		write(1, "\n", 1);
	}
}

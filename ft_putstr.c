/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtissari <mtissari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:14:02 by mtissari          #+#    #+#             */
/*   Updated: 2021/11/30 14:46:58 by mtissari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int	x;

	x = 0;
	if (!s)
		return ;
	while (s[x] != '\0')
	{
		ft_putchar (s[x]);
		x++;
	}
}

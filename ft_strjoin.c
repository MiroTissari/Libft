/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtissari <mtissari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:38:26 by mtissari          #+#    #+#             */
/*   Updated: 2021/12/01 15:15:17 by mtissari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	int		y;
	int		len;
	char	*str;

	x = -1;
	y = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len));
	if (str == NULL)
		return (NULL);
	if (x < len)
	{
		while (s1[++x] != '\0')
			str[x] = s1[x];
		while (s2[y] != '\0')
			str[x++] = s2[y++];
	}
	str[x] = '\0';
	return (str);
}

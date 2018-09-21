/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:20:11 by dmoetana          #+#    #+#             */
/*   Updated: 2018/06/11 11:21:30 by dmoetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *sc)
{
	size_t		i;
	char		*str;

	i = 0;
	if (!(str = (char*)malloc(sizeof(*str) * (ft_strlen(sc) + 1))))
		return (NULL);
	while (i < ft_strlen(sc))
	{
		str[i] = sc[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

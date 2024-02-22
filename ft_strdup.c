/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:36:19 by hlachhab          #+#    #+#             */
/*   Updated: 2024/01/05 19:39:04 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	len;
	char	*cpy;

	len = 0;
	while (str[len])
		len++;
	cpy = malloc((len + 1));
	if (!cpy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

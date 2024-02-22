/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:05:10 by hlachhab          #+#    #+#             */
/*   Updated: 2024/02/22 20:14:47 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	size_t	len;

	if (!s || !set)
		return (NULL);
	i = 0;
	while (s[i] && ft_strchr(set, s[i]))
		i++;
	len = ft_strlen(s);
	while (len > 0 && ft_strrchr(set, s[len]))
		len--;
	return (ft_substr(s, i, len - i + 1));
}

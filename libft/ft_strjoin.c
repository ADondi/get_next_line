/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adondera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 12:00:49 by adondera          #+#    #+#             */
/*   Updated: 2017/12/12 18:14:08 by adondera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	index;
	size_t	len_1;
	size_t	len_2;

	index = 0;
	if (!s1 && !s2)
		return (NULL);
	s1 == NULL ? (len_1 = 0) : (len_1 = ft_strlen(s1));
	s2 == NULL ? (len_2 = 0) : (len_2 = ft_strlen(s2));
	if (!(new_str = ft_strnew(len_1 + len_2)))
		return (NULL);
	while (index < len_1)
	{
		*new_str++ = *s1++;
		index++;
	}
	while (index < len_2 + len_1)
	{
		*new_str++ = *s2++;
		index++;
	}
	*new_str = '\0';
	new_str = new_str - len_1 - len_2;
	return (new_str);
}

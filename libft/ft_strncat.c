/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciehdr <luciehdr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:57:42 by luciehdr          #+#    #+#             */
/*   Updated: 2020/11/18 20:48:36 by luciehdr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	j;
	size_t	size;

	size = ft_strlen(dest);
	j = 0;
	while (src[j] && j < n)
	{
		dest[size + j] = src[j];
		j++;
	}
	dest[size + j] = '\0';
	return (dest);
}

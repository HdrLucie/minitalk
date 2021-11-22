/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlucie <hlucie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:47:29 by hlucie            #+#    #+#             */
/*   Updated: 2021/09/06 11:47:35 by hlucie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	tab = NULL;
	tab = malloc(nmemb * size);
	if (!(tab))
		return (NULL);
	ft_memset(tab, 0, (size * nmemb));
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciehdr <luciehdr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:58:23 by luciehdr          #+#    #+#             */
/*   Updated: 2020/11/16 17:58:24 by luciehdr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *meule_de_foin, const char *aiguille)
{
	int		i;

	i = 0;
	if (aiguille[i] == '\0')
		return ((char *)meule_de_foin);
	while (meule_de_foin[i])
	{
		if (!ft_strncmp(&meule_de_foin[i], aiguille, ft_strlen(aiguille)))
			return ((char *)&(meule_de_foin[i]));
		i++;
	}
	return (NULL);
}

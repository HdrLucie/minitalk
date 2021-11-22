/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_ternaire.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlucie <hlucie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:50:57 by hlucie            #+#    #+#             */
/*   Updated: 2021/09/13 13:52:40 by hlucie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_ternaire(int condition, int first_value, int second_value)
{
	if (condition)
		return (first_value);
	else
		return (second_value);
}

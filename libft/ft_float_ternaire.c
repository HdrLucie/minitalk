/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_ternaire.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlucie <hlucie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:48:40 by hlucie            #+#    #+#             */
/*   Updated: 2021/09/06 11:48:41 by hlucie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_float_ternaire(int condition, float first_value, float second_value)
{
	if (condition)
		return (first_value);
	else
		return (second_value);
}

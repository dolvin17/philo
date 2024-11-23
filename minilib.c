/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minilib.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:56:09 by ghuertas          #+#    #+#             */
/*   Updated: 2024/11/23 18:47:37 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

long	ft_atol(const char *str)
{
	long	nbr;

	nbr = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	checking((*str == '-'), "Only positive values\n");
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + (*str - '0');
		checking(nbr > INT_MAX, "too long input\n");
		str++;
	}
	return (nbr);
}

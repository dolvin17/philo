/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:14:29 by dolvin17          #+#    #+#             */
/*   Updated: 2024/11/22 18:29:22 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	message_error(char *error)
{
	printf("%s\n", error);
	exit(EXIT_FAILURE);
}

void	checking(bool if_error, char *error)
{
	if (if_error)
	{
		write(1, error, 7);
		exit(EXIT_FAILURE);
	}
}

 

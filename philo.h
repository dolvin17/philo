/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:44:39 by dolvin17          #+#    #+#             */
/*   Updated: 2024/11/22 19:21:51 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/time.h>
# include <limits.h>
# include <errno.h>

typedef struct s_table	t_table;

typedef struct s_fork
{
	pthread_mutex_t	mutex;
	int				fork_id;
}	t_fork;

typedef struct s_philo
{
	long		meals_count;
	long		last_meal;
	bool		full;
	long		last_meal_time;
	int			id;
	t_fork		*left_fork;
	t_fork		*right_fork;
	pthread_t	thread_id;
	t_table		*table;
}	t_philo;

struct s_table
{
	long	philo_nbr;
	long	time_to_die;
	long	time_to_eat;
	long	time_to_sleep;
	long	nbr_imit_meals;
	long	start_simulation;
	bool	end_simulation;
	t_fork	*forks;
	t_philo	*philos;
};

void	message_error(char *error);
long		ft_atol(const char *str);
void	checking(bool if_error, char *error);
void	parse_input(t_table *table, char **argv);
size_t	ft_strlen(const char *str);



#endif

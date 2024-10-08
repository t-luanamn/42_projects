/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tluanamn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:50:16 by tluanamn          #+#    #+#             */
/*   Updated: 2024/02/04 13:42:24 by tluanamn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	error_exit(const char *msg)
{
	printf(R"%s\n"RST, msg);
	exit(EXIT_FAILURE);
}

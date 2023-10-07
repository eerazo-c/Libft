/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerazo-c <eerazo-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:13:19 by eerazo-c          #+#    #+#             */
/*   Updated: 2023/09/18 14:19:11 by eerazo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

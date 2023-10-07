/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerazo-c <eerazo-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:50:11 by eerazo-c          #+#    #+#             */
/*   Updated: 2023/09/18 21:21:13 by eerazo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int caracter)
{
	if (caracter >= 'A' && caracter <= 'Z')
		caracter += 32;
	return (caracter);
}

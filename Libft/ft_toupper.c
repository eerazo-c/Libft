/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerazo-c <eerazo-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:50:09 by eerazo-c          #+#    #+#             */
/*   Updated: 2023/09/18 14:46:18 by eerazo-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int caracter)
{
	if (caracter >= 'a' && caracter <= 'z')
		caracter -= 32;
	return (caracter);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:45:41 by ftothmur          #+#    #+#             */
/*   Updated: 2019/07/18 14:45:42 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	This is a special case of the function ft_putchar_fd, for which the file
** descriptor parameter is fixed in the state STDOUT == 1.
*/

void	ft_putchar(char c)
{
	ft_putchar_fd(c, STDOUT);
	return ;
}

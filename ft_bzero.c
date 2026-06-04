/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 10:34:27 by jordanmoret       #+#    #+#             */
/*   Updated: 2026/06/04 10:40:06 by jordanmoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    char    *tmp;

    i = 0;
    tmp = (char *)s;
    while (i < n)
    {
        tmp[i] = 0;
        i++,
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 10:55:22 by jordanmoret       #+#    #+#             */
/*   Updated: 2026/06/04 11:11:04 by jordanmoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *res;

    if (nmemb == 0 || size == 0)
        return (malloc(0));
    if (nmemb > (size_t)-1 / size)
        return (NULL);
    res = malloc(nmemb * size);
    if (!res)
        return (NULL);
    ft_bzero(res, nmemb * size);
    return (res);
}
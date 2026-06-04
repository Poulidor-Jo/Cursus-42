/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordanmoret <jordanmoret@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:07:54 by jordanmoret       #+#    #+#             */
/*   Updated: 2026/06/04 17:27:51 by jordanmoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int lenin(int n)
{
	int count;

	count = 0;
	if(n == 0)
		count++;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}
char *ft_itoa(int n)
{
	char	*str;
	int		size;
	long 	nb;

	size = lenin(n);
	nb = n;
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	str[size--] = '\0';
	while (nb)
	{
		str[size] = (nb % 10) + 48;
		nb /= 10;
		size--;
	}
	return (str);
}
/*
int	main(int arc, char **arv)
{
	(void)arc;
	(void)arv;

	printf("resultat : %s\n", ft_itoa(atoi(arv[1])));
	return(0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 17:40:04 by mabril            #+#    #+#             */
/*   Updated: 2018/04/27 13:25:09 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *r;

	r = (char*)malloc(sizeof(*r) * size);
	if (r == NULL)
		return (NULL);
	ft_memset(r, (int)'\0', size + 1);
	return (r);
}
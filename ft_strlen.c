/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymohamed <ymohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:03:35 by ymohamed          #+#    #+#             */
/*   Updated: 2022/07/19 11:41:16 by ymohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	char	*ptr;
	int		c;

	ptr = (char *)s;
	c = 0;
	while (ptr[c] != '\0')
	{
		c++;
	}
	return (c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yekyaw <yekyaw@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 01:28:48 by yekyaw            #+#    #+#             */
/*   Updated: 2025/09/10 07:14:34 by yekyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*temp;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	temp = (unsigned char *)malloc(n * sizeof(*s));
	ft_memcpy(temp, s, n);
	ft_bzero(d, n);
	ft_memcpy(d, temp, n);
	free(temp);
	return (dest);
}

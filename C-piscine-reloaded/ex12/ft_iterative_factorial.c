/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yekyaw <yekyaw@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 01:32:59 by yekyaw            #+#    #+#             */
/*   Updated: 2025/08/27 14:39:46 by yekyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	while (i > 1)
	{
		nb *= i - 1;
		i--;
	}
	return (nb);
}
/*
int	main(void)
{
	int	i = 12;
	printf("%d\n",ft_iterative_factorial(i));
}*/
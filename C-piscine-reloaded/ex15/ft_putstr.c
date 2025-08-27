/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yekyaw <yekyaw@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 02:04:38 by yekyaw            #+#    #+#             */
/*   Updated: 2025/08/27 14:57:42 by yekyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
}
int	main(void)
{
	char	*str= "hello world";

	ft_putstr(str);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:51:11 by ohaker            #+#    #+#             */
/*   Updated: 2024/11/10 16:02:20 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;

	if (nb <= 0)
		return (0);
	res = 1;
	while (res * res < nb)
		res++;
	if (res * res == nb)
		return (res);
	return (0);
}

// int	main(void)
// {
// 	int	nbr = 2;

// 	printf("%i", ft_sqrt(nbr));
// 	return (0);
// }
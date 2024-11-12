/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:18:29 by ohaker            #+#    #+#             */
/*   Updated: 2024/11/06 13:13:30 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	count;

	count = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb >= 2)
	{
		count *= nb;
		nb--;
	}
	return (count);
}

// int	main()
// {
// 	int	nbr = 5;

// 	printf("%i", ft_iterative_factorial(nbr));
// 	return (0);
// }

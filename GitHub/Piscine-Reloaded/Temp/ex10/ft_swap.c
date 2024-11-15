/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:20:58 by ohaker            #+#    #+#             */
/*   Updated: 2024/11/10 13:48:40 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	slot;

	slot = *b;
	*b = *a;
	*a = slot;
}

// int main()
// {
//     int a = 3;
//     int b = 5;

//     ft_swap(&a, &b);
//     printf("%i", a);
//     printf("%i", b);
//     return(0);
// }
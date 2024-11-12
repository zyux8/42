/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:42:34 by ohaker            #+#    #+#             */
/*   Updated: 2024/11/05 17:18:04 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main()
// {
// 	int	a = 5;
// 	int	b = 2;
// 	int	div;
// 	int	mod;

// 	ft_div_mod(a, b, *div, *mod);
// 	printf("Div: %d", *div);
// 	printf("Mod: %d", *mod);
// }
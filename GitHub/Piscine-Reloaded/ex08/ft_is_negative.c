/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:41:19 by ohaker            #+#    #+#             */
/*   Updated: 2024/11/09 21:23:08 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

// int main()
// {
//     int n;

//     n = 23;
//     ft_is_negative(n);
//     return(0);
// }
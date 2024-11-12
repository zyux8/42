/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:38:35 by ohaker            #+#    #+#             */
/*   Updated: 2024/11/10 14:33:41 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}

// int main(void)
// {
//     ft_print_numbers();
//     return(0);
// }
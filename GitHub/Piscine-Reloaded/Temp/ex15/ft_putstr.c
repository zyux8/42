/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:28:09 by ohaker            #+#    #+#             */
/*   Updated: 2024/11/10 16:20:36 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c);
// {
// 	write(STDOUT_FILENO, &c, 1);
// }

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

// int	main(void)
// {
// 	char	*str = "Penis";

// 	ft_putstr(str);
// 	return (0);
// }
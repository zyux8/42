/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:53:02 by ohaker            #+#    #+#             */
/*   Updated: 2024/11/10 14:52:03 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
// {
// 	write(STDOUT_FILENO, &c, 1);
// }

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_swap(char **av, int y)
{
	char	*slot;

	slot = av[y];
	av[y] = av[y + 1];
	av[y + 1] = slot;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0' && s1[x] == s2[x])
		x++;
	return (s1[x] - s2[x]);
}

void	ft_sort(int ac, char **av)
{
	int	x;
	int	y;

	x = 1;
	while (x < ac - 1)
	{
		y = 1;
		while (y < ac - 1)
		{
			if (ft_strcmp(av[y], av[y + 1]) > 0)
				ft_swap(av, y);
			y++;
		}
		x++;
	}
}

int	main(int ac, char **av)
{
	int	x;
	int	y;

	x = 1;
	if (ac == 1)
		return (0);
	else if (ac > 2)
		ft_sort(ac, av);
	y = 1;
	while (y < ac)
	{
		ft_putstr(av[y]);
		y++;
	}
	return (0);
}

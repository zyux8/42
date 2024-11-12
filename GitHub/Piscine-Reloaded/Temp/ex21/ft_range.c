/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:02:22 by ohaker            #+#    #+#             */
/*   Updated: 2024/11/09 14:40:01 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	x;
	int	*str;

	x = 0;
	if (min >= max)
		return (NULL);
	str = (int *)malloc((max - min + 1) * sizeof(int));
	while (min != max)
		str[x++] = min++;
	return (str);
}

// int	main(void)
// {
// 	int	*x = ft_range(3, 9);

// 	for(int i=0;i<6;++i)
// 	{
// 		printf("%d ", x[i]);
// 	}

// 	return (0);
// }

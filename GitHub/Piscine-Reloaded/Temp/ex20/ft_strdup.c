/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:36:24 by ohaker            #+#    #+#             */
/*   Updated: 2024/11/10 14:53:13 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		x;

	str = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	x = 0;
	while (src[x] != '\0')
	{
		str[x] = src[x];
		x++;
	}
	return (str);
}

// int	main(void)
// {
// 	char *str = "string";
// 	char *str2 = ft_strdup(str);

// 	printf("1: %s\n", str);
// 	printf("2: %s\n", str2);
// 	return (0);
// }
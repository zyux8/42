/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaker <ohaker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:11:13 by ohaker            #+#    #+#             */
/*   Updated: 2024/11/09 15:36:51 by ohaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FT_POINT_H)
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void	set_point(t_point *point);
#endif

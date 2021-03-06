/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarapon <afarapon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 22:15:03 by vkozlov           #+#    #+#             */
/*   Updated: 2018/03/17 18:55:28 by afarapon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

typedef float	t_vector __attribute__((vector_size(sizeof(float)*3)));

t_vector			v_normalize(t_vector v);
t_vector			v_mult_d(t_vector v, double d);
t_vector			v_cross(t_vector a, t_vector b);
double				v_length(t_vector v);
double				v_dot(t_vector v1, t_vector v2);
short				v_is_eq(t_vector v1, t_vector v2);
#endif

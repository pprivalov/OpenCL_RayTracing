/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozlov <vkozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 20:06:14 by vkozlov           #+#    #+#             */
/*   Updated: 2017/11/11 11:42:41 by vkozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	if (*s == c)
		return ((char *)s);
	while (*s)
	{
		s++;
		if (*s == (char)c)
			return ((char *)s);
	}
	return (0);
}

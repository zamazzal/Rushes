/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:08:23 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 19:08:26 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		test_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

char	*test_strcat(char *s1, const char *s2)
{
	size_t x;
	size_t y;

	x = ft_strlen(s1);
	y = 0;
	while (s2[y] != '\0')
		s1[x++] = s2[y++];
	s1[x] = '\0';
	return (s1);
}

char	*test_strchr(const char *s, int c)
{
	size_t		x;
	char		f;

	x = 0;
	f = (char)c;
	while (s[x])
	{
		if (s[x] == f)
			return ((char*)s + x);
		x++;
	}
	if (s[x] == f)
		return ((char*)s + x);
	return (NULL);
}

int		test_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	int		rzlt;

	rzlt = 0;
	i = 0;
	while (rzlt == 0)
	{
		if (s1[i] != s2[i])
			rzlt = (unsigned char)s1[i] - (unsigned char)s2[i];
		else if ((s1[i] == '\0') && (s2[i] == '\0'))
			return (0);
		i++;
	}
	return (rzlt);
}

char	*test_strcpy(char *dst, const char *src)
{
	size_t i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

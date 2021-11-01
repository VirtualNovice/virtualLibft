/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@42ABUDHABI.AE>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:17:26 by oumali            #+#    #+#             */
/*   Updated: 2021/11/01 21:31:51 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strbeg(char const *s1, char const *set)
{
	size_t	a;
	size_t	b;
	char	*str2;
	char	*str;

	str = (char *)s1;
	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (set[b] != '\0')
		{
			if (set[b] == str[a])
				break ;
			else if (set[b + 1] == '\0')
			{
				str2 = ft_strdup(str + a);
				return (str2);
			}
			b++;
		}
		a++;
	}
	return (0);
}

size_t	strend(char const *s1, char const *set)
{
	size_t	b;
	char	*str;
	int		flag;
	size_t	c;

	str = (char *)s1;
	flag = 0;
	if (s1 == 0)
		return (0);
	c = ft_strlen(s1) - 1;
	while (flag == 0)
	{
		b = 0;
		while (set[b] != '\0')
		{
			if (set[b] == str[c])
				break ;
			else if (set[b + 1] == '\0')
				flag = 1;
			b++;
		}
		c--;
	}
	c += 2;
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str3;
	char	*str4;
	size_t	size;

	size = 0;
	if (s1 == NULL)
		return (NULL);
	if (*set == '\0')
		set = " ";
	str3 = strbeg(s1, set);
	size = strend(str3, set);
	str4 = (char *)malloc(size + 1 * sizeof(char));
	if (str4 == NULL)
		return (NULL);
	ft_memmove(str4, str3, size);
	str4[size] = '\0';
	free(str3);
	return (str4);
}

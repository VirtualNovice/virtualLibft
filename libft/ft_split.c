/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:48:09 by oumali            #+#    #+#             */
/*   Updated: 2021/11/01 23:36:14 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_strcount(char const *s, char c)
{
	int	a;
	int	count;
	int	flag;

	a = 0;
	count = 0;
	flag = 0;
	while (s[a] != '\0')
    {
		while (s[a] != c && s[a] != '\0')
		{
			flag = 1;
			a++;
		}
		if (flag == 1)
		{
			count++;
			flag = 0;
			continue ;
		}
		a++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		a;
	char	**split;
	int		strtstring;
	int		strsize;
    int		strcount;

	a = 0;
	strtstring = 0;
	strcount = 0;
	if (s == NULL)
		return (NULL);
	split = (char **)malloc((ft_strcount(s, c) + 1) * sizeof(char*));
	if (split == NULL)
	   	return (NULL);
	while (s[a] != '\0')
	{
		strsize = 0;
		while (s[a] == c)
			a++;
		if (s[a] != c && s[a] != '\0')
		{
			strtstring = a;
			strcount++;
			while (s[a] != c && s[a] != '\0')
			{
				strsize++;
				a++;
			}
			split[strcount - 1] = ft_substr(s, strtstring, strsize);
		}
	}
	split[strcount] = NULL;
	return (split);
}

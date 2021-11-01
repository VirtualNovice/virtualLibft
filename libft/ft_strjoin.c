/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@42ABUDHABI.AE>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:34:24 by oumali            #+#    #+#             */
/*   Updated: 2021/11/01 21:34:26 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t a;
	size_t b;
	char *str;

	a = 0;
	b = ft_strlen(s1);
	if (s1 == NULL || s2 == NULL)
		return NULL;
	str = (char *)malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1)* sizeof(char));
	if(str == NULL)
		return NULL;
	ft_memcpy(str,s1,b);
	while(s2[a] != '\0')
	{
		str[b + a] = s2[a];
		a++;
	}
	str[b + a] = '\0';
	return (str);	
}

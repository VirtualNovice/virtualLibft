/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:20:04 by oumali            #+#    #+#             */
/*   Updated: 2021/10/18 22:21:51 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a = 0;
    size_t	b = 0;
	char	*sub;
    
    
    if(s == NULL) 
        return NULL;
    if(start >= ft_strlen(s))
		return (ft_strdup(""));
	if(len > ft_strlen(s))
		len = ft_strlen(s) - start;	
    sub = (char *)malloc(len + 1 * sizeof(char));
    if(sub == NULL) 
        return NULL;
    while(s[a] != '\0')
    {
        if(a == start)
        {
            while(b != len)     
            {
                sub[b] = s[a];
                b++;
                a++;
            }
        sub[b] = '\0';
        return (sub);
        }
        a++;
    }
    return NULL;
}

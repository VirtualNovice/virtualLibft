#include "libft.h"

void ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int a;
	
	a = 0;
	if(s == NULL)
		return ;
	while(s[a] != '\0')
	{
		f(a, s + a);
		a++;
	}
}

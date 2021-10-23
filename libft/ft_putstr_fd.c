#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int a;
	
	if(s == 0)
		return ;
	a = 0;
	while(s[a] != '\0')
	{
		ft_putchar_fd(s[a],fd);
		a++;
	}
}

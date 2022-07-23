
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	l;
	unsigned int	i;

	l = ft_strlen(s);
	i = 0;
	while (i < l)
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
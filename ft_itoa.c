
#include "libft.h"

void	pnum(char *r, long int nb, long int digs)
{
	if (nb == 0)
		r[0] = '0';
	if (nb < 0)
	{
		r[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		r[digs - 1] = (nb % 10) + '0';
		nb = nb / 10;
		digs--;
	}
}

char	*ft_itoa(int n)
{
	char		*r;
	long int	digs;
	long int	i;
	long int	num;

	digs = 1;
	i = n;
	num = n;
	while (i /= 10)
		digs++;
	if (n < 0)
		digs++;
	r = malloc(sizeof(char) * (digs + 1));
	if (r == 0)
		return (0);
	pnum(r, num, digs);
	r[digs] = '\0';
	return (r);
}

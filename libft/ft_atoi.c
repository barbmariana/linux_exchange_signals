
#include "libft.h"

int	ft_checkerr(int sign);

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	long	total;
	long	prev;

	i = 0;
	sign = 1;
	total = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		prev = total;
		total = total * 10 + (str[i] - '0');
		if (total < prev)
			return (ft_checkerr(sign));
		i++;
	}
	return (total * sign);
}

int	ft_checkerr(int sign)
{
	if (sign > 0)
		return (-1);
	else
		return (0);
}

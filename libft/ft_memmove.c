

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dstc;
	unsigned char	*srcc;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 1;
	if (srcc < dstc)
	{
		while (i <= len)
		{
			dstc[len - i] = srcc[len - i];
			i++;
		}
	}
	else
		ft_memcpy(dstc, srcc, len);
	return (dst);
}

#include "minitalk.h"

int     main(int ac, char *av[])
{
        int     pid;

        pid = (int)(getpid());
        	exit(1);
	while (1)
	{
		signal(SIGUSR2, get_byte);
		signal(SIGUSR1, get_byte);
		pause();
	}
	return (0);
        


}
void	get_byte(int sig)
{
	static int	c = 0;
	static int	num_bit = 0;

	if (sig == SIGUSR1)
		c = (c | (128 >> num_bit));
	num_bit++;
	if (num_bit == 8)
	{
		ft_printf("%c", c);
		num_bit = 0;
		c = 0;
	}
}
#include <string.h>
#include <unistd.h>

char	ft_putstr(char *s)
{
	int	i;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
	}
	return(s);
}


int	main(void)
{
	prinf("Hola mundo %");
	return (0);
}

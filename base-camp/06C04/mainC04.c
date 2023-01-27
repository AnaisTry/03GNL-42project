00
#include<stdio.h>
int main()
{
	char *s = "awesome";

	printf("%s has %i characters", s, ft_strlen(s));
}

01
#include<stdio.h>
int	main(void)
{
	char *s = "hello 19";	
	ft_putstr(s);
}

02
#include<stdio.h>
int	main()
{
	int n = -42;
	ft_putnbr(n);
}

03

#include <stdio.h>
int	main()
{
	printf("ft_atoi: %d\n", ft_atoi(" -5"));
	printf("ft_atoi: %d\n", ft_atoi(" ---+--+1234ab567")); 
	return 0;
}
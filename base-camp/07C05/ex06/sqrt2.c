int	ft_sqrt(int nb)
{
	int	sqrt;
	int n;

	if (nb == 0 || nb == 1)
		return (nb);
	sqrt = 1;
	n = 1;
	while (n <= nb)
	{
		sqrt++;
		n = sqrt * sqrt;
	}
	return (sqrt);
}

#include <stdio.h>
int	main()
{
	int n;

	n = 50;
	for (int i = 0; i <= n; i++)
	{
		printf("the sqrt of %d is %d\n", i, ft_sqrt(i));
	}
}
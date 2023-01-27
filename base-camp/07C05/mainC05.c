00
#include <stdio.h>
int	main()
{
	int n;

	n = 3;
	printf("the factorial of %d is %d", n, ft_iterative_factorial(n));
}

01
#include <stdio.h>
int	main()
{
	int n;

	n = -5;
	printf("the factorial of %d is %d", n, ft_recursive_factorial(n));
}

02
#include <stdio.h>
int	main()
{
	int n;
	int	p;

	n = -5;
	p = 5;
	printf(" %d power %d is %d", n, p, ft_iterative_power(n, p));
}

03
#include <stdio.h>
int	main()
{
	int n;
	int	p;

	n = 0;
	p = 0;
	printf(" %d power %d is %d", n, p, ft_recursive_power(n, p));
}

04
#include <stdio.h>
int	main()
{
	int n;

	n = 29;
	for( int i = 0; i < n; i++)
		printf("the  element %d of the fibonacci sequence is %d\n", i, ft_fibonacci(i));
}

05
#include <stdio.h>
int	main()
{
	int n;

	n = -5;
	printf("the sqrt of %d is %d", n, ft_sqrt(n));
}

06

#include <stdio.h> 
int main()
{
	int n;
	n = 6089;
	for (int i = 0; i <= n; i++)
	{
		if (ft_is_prime(i))
			printf("%d, is prime\n", i);
		else
			printf("%d, is not prime\n", i);
	}
}

07

#include <stdio.h>
int    main(void)
{
    int i = 2147483600; 
	//int i = 16500000;
    while (i < 2147483647)
	//while (i < 16502000)
    {
    i++;
    printf("%d : %d\n", i, ft_find_next_prime(i));
    }
}
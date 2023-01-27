#include <stdio.h>

void static_func(void)
{
	static int	x;
//	The default value of a static variable is 0

	printf("x = %d\n", x);
	x = x + 1;
}
int main(void)
{
	int i;

	i = 0;
	while (i <= 10)
	{
		static_func();
		i++;
	}
	return (0);
} //	It is only here, at the end of the program, 
//	that the static variable ceases to exist
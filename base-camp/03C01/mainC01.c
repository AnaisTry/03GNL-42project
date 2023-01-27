00
#include<stdio.h>
int main()
{
	int		nb;
	//int		*p;
	//nb = 'x';
	//p = &nb;
	ft_ft(&nb);
	printf ("%d", nb);
}

01
#include<stdio.h>
int main()
{	
	int		nb = 'x';
	int 	*p0 = &nb;
	int 	**p1 = &p0;
	int 	***p2 = &p1;
	int 	****p3 = &p2;
	int 	*****p4 = &p3;
	int 	******p5 = &p4;
	int 	*******p6 = &p5;
	int 	********p7 = &p6;
	int 	*********p8 = &p7;

	ft_ultimate_ft(p8);
	printf ("%d", nb);
}


02
#include<stdio.h>
int	main()
{
	int x = 0;
	int y = 1;

	int *px = &x;
	int	*py = &y;

	ft_swap(px, py);
	printf("x = %d\n", x);
	printf("y = %d\n", y);
}


03
#include<stdio.h>
int main()
{
	int x = 5;
	int y = 2;
	int res_div;
	int res_mod;
	int	*pdiv = &res_div;
	int *pmod = &res_mod;
	
	ft_div_mod(x, y, pdiv, pmod);
	printf("%d divided by %d = %d\n", x, y, res_div);
	printf("the remainder of the division is %d\n", res_mod);
}

04
#include<stdio.h>
int main()
{
	int x = 42;
	int y = 19;
	printf("%d divided by %d", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf(" = %d\n", x);
	printf("the remainder of the division is %d\n", y);
	return (0);
}

05

int 	main(void)
{
	char *s = "hello 19";	
	ft_putstr(s);
}

06

#include<stdio.h>
int main()
{
	char *s = "awesome";

	printf("%s has %i characters", s, ft_strlen(s));
}

07

#include<stdio.h>
int	main()
{
	int tab[] = {0, 1, 2, 3, 4};
	int size = 5;
	int i = 0;
	ft_rev_int_tab(tab, size);
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}

08

#include<stdio.h>

int	main (void)
{
	int		size;
	int 	*tab;
	int 	i;	
	i = 0;
	size = 5;
	tab = (int[]){8, 6, -2, 100, 5};
	ft_sort_int_tab(tab, size);
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}


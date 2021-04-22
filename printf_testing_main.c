

#include "libft.h"
#include <stdio.h>


int		main(int ac, char **av)
{
	int		ret1;
	int		ret2;
	int		a;
	int		imin;
	int		imax;
	char	*str;
	int		b;
	long	m;
	long long		c;
	long long		llmax;
	long long		llmin;
	unsigned long long	ullmax;

	ret1 = 0;
	ret2 = 0;
	llmax = 0;
	llmin = 0;
	ullmax = 0;

//	ullmax = 18446744073709551614;
	llmax = 9223372036854775807;
//	llmin = -9223372036854775808;
	imin = -2147483648;
	imax = 2147483647;
	a = 0;
	b = 1234;
	m = 9384;
	c = 8273464519982314;
//	c = -9223372036854775808;
	if (ac < 0)
		return (0);

	if (ac == 2)
		str = av[1];


//	ft_putstr("im here\n");

//	printf("my itoa: |%s|\n", ft_itoa(54321));
//	printf("my atoi: |%d|\n", ft_atoi("54321"));
//	printf("my atoi: |%d|\n", ft_fstrlen("54321"));

	ft_printf("my number: |%d|\n", 9);



//	printf("pf return: %d\n", printf("OG number: |%.0d|\n", a));

//	ft_printf("my number: |%hd|\n", m);
//	ft_printf("my number: |%hhd|\n", m);


//	printf("the results: a:%d, b:%d\n", a, b);
//	printf("O: |%n| and another |%n|\n", &a, &b);
//	printf("the results: a:%d, b:%d\n", a, b);
//	ft_printf("unsigned: |%lu|\n", (long)c);
//	printf("OG unsigned: |%lu|\n", (long)c);

/*
	printf("n: |%n| and another |%d|\n", &a, a);
	ft_printf("N: |%N| and another |%N|\n");
	ft_printf("my nums: |%#8.5x|\n", b);

	ft_printf("cool cool: |%p|\n", &a);
	ft_printf("no idea what this is: |%p|\n", &b);

	ft_printf("reg: |%d|\n", a);		
	ft_printf("hex: |%x|\n", a);
	ft_printf("HEX: |%X|\n", a);
	ft_printf("oct: |%o|\n", a);
	ft_printf("bin: |%b|\n", a);
	printf("OG hex: |%x|\n", a);
	printf("OG HEX: |%X|\n", a);
	printf("OG oct: |%o|\n", a);
*/

	char	*line = "Hi there";
//	char	let = 'h';
//	char 	*line2;
/*	wchar_t	*wct;

	wct = ft_memalloc(sizeof(wchar_t) * 4);
	wct[0] = 'h';
	wct[1] = 'e';
	wct[2] = 'l';
	wct[3] = '\0';
*/	

//	if (!(line2 = malloc(sizeof(char) * 3)))
//		return (-1);

//	line2 = ft_strdup("hi again");

//	ft_printf("my test: |%s|\n", line2);
//	printf("OG test: |%s|\n", line2);
	
//	line2 = ft_strdup("hi again again");
	

	(void)line;
//	(void)let;

//	printf("OG test: a was: %d, |%n|\n", a, &a);
//	printf("number in int: %d\n", a);
//	ft_printf("my test: |%p|\n",&line);
//	printf("OG test: |%p|\n",&line);
//	ft_printf("my test: |%4.0s|\n", line);
//	printf("OG test: |%4.0s|\n", line);
	
//	printf("OG test: |%s|\n", line);
//	ft_printf("my test: |%N|, a num: %d |%n|\n", a, &a);
//	ft_printf("num: %d\n", a);
	




//	ft_printf("%-05\n");

//	printf("|%c%c%c%c%c%c%c%c%c%c%c%c%c|\n", 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52);
//	ft_printf("|%c%c%c%c%c%c%c%c%c%c%c%c%c|\n", 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52);

//	printf("%-*.5u%1.5s%-5.0X%-18d%0.3X%-c%-ca4wRrX6zy\n", 1, -2147483647, "", -2147483647, -2147483647, -1696667795, 'g', 'd');
//	ft_printf("%-*.5u%1.5s%-5.0X%-18d%0.3X%-c%-ca4wRrX6zy\n", 1, -2147483647, "", -2147483647, -2147483647, -1696667795, 'g', 'd');

//	ft_putnbr(printf("kXF%-.0u%-X%-*s%0.*x", -2147483647, 0, 10, NULL, -2, -2091222346));
//	ft_putchar('\n');
//	ft_putnbr(ft_printf("kXF%-.0u%-X%-*s%0.*x", -2147483647, 0, 10, NULL, -2, -2091222346));

//	printf("OG testing c: |%-5c|\n", 0);
//	ft_printf("testing c: |%-5c|\n", 0);
	

//	printf("%0.*x%sf9%15.*u%.5x\n", 9, 2147483647, "", -9, 0, -2147483647);
//	ft_printf("%0.*x%sf9%15.*u%.5x\n", 9, 2147483647, "", -9, 0, -2147483647);

//	printf("%0*.3X", -1, 0);
//	printf("\n");
//	ft_printf("%0*.3X", -1, 0);
//	printf("\n");

//	printf("OG testing c: |%05s|\n", "hi");
//	ft_printf("testing c: |%05c|\n", 53);
//	printf("OG testing c: |%c|\n", 48);
//	ft_printf("testing c: |%c|\n", 48);


//	printf("OG: |%s|\n", "hi there");
//	ft_printf("OG: |%s|\n", "hi there");
//	printf("OG: |%.s|\n", "hi there");
//	ft_printf("OG: |%.s|\n", "hi there");


//	printf("OG: |%-*.*s|\n", -7, -3, "ahey");
//	ft_printf("mine: |%-*.*s|\n", -7, -9, "ahey");


//	ft_printf("The weird case: |%-5c|\n", 0);		// figure this weird case out later, still leaks


	// Tested:
//	ft_printf("%s|\n", NULL);
//	ft_printf("short prec string|%.5s|\n", "hi there");
//	ft_printf("modulo: |%%|, |%5%|, |%-5%|\n");

//	ft_printf("a simple long long: %lld\n", LLONG_MIN);
//	printf("a simple long long: %lld\n", LLONG_MIN);

//	ft_printf("%cSEIUF", 'D');
//	printf("%cSEIUF", 'D');

//	printf("int min: %.12d\n", b);
//	ft_printf("int min: %.12d\n", b);
	
//	printf("int : %.d\n", 0);
//	ft_printf("int : %.d\n", 0);

//	ft_printf("left justify: |%-5d|\n", a);
//	ft_printf("test poin: |%-20p|\n", &b);
//	ft_printf("test unsi: |%u|\n", b);
//	ft_printf("test octa: |%o|\n", b);
//	ft_printf("test octa: |%#o|\n", b);
//	ft_printf("test hexs: |%#10x|\n", b);

//	ft_printf("test base: |%B|\n", "0123456789abcdef", b);

//	ft_printf("test n: |%N| again |%N|\n");
//	printf("test n: |%N| again |%N|\n");

//	printf("|%lx|\n", 4294967295);
//	ft_printf("|%x|\n", 4294967295);
	


//	system("leaks test");
	return (0);
}


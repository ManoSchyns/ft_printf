#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int a = ft_printf("  ok%", 't', "test" , 87);
	printf("\n");
	int b = printf("  ok%", 't', "test" , 87);
	ft_printf("Excpected : %d, yours: %d\n", b, a);
}
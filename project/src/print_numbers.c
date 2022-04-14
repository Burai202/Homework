#include <stdio.h>

#include "print_numbers.h"

void print_numbers(int n) {
	if(n > 1)
		print_numbers(n-1);
	if(n < 1)
		print_numbers(n+1);
	if(n == 1)
		printf("%d", n);
	else
		printf(" ""%d", n);
	}

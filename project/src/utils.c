#include "utils.h"


size_t timer_from(unsigned char from) {
	size_t counter=0;
    for (unsigned char i = from;  ; --i) {
        ++counter;
        printf("%d\n",i);
    }
    return counter;
}

// TODO: Implement `power of` function

int custom_pow(int base, int power) {
	int k=1;
	for (int i=0;i<power;i++)
	{k*=base;}
    return k;
}

#include "utils.h"


int timer_from(int from) {
	int counter = 0;
    for (int i = from; i >=0; --i) {
        ++counter;
	if(i == 0) {printf("%d\n", i);}
	if(i != 0) {printf("%d ", i);}
    }
    return counter;
}

// TODO(Burai202): Implement `power of` function.

int custom_pow(int base, int power) {
	int k = 1;
	for (int i = 0; i < power; i++) {k*=base;}
    return k;
}


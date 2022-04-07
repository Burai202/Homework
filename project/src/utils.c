#include "utils.h"

int timer_from(int from) {
	int counter = 0;
	for (int i = from; i >=0; --i) {
        ++counter;
	if(i == 0) {
		printf("%d\n", i);
	} else {
	       	printf("%d ", i);
	}
    }
    return counter;
}
int custom_pow(int base, int power) {
	int res = 1;
	for (int i = 0; i < power; i++)
		res*=base;
    return res;
}

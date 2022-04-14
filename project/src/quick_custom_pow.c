#include "quick_custom_pow.h"

int quick_custom_pow(int base, int pow) {
	int res = 1;
	while(pow) {
		if(pow % 2 == 1)
			res *= base;
		if(pow != 1)
			base *= base;
		pow /= 2;
	}
	return res;
}

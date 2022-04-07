#include "primality_test.h"

int primality_test(int number) {
	int res = 1;
	if(number < 2) {
		res = 0;
		return res;
	}
	for (int i = 2; i * i < number; i++) {
		if(number % i == 0) {
			res = 0;
			break;
		}
	}
	return res;
}

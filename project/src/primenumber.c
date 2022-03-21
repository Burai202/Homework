

#include "primenumber.h"

int prime_number(int number) {
	int res = 1;
	for (int i = 1; i < number; i++) {
		if(number % i == 0 && i != 1) {
			res = 0;
			break;
		}
	}
	if(number < 2) {res = 0;}
	return res;
}








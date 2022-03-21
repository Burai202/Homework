
#include <stdio.h>
#include "rec.h"


int i = 1;
int k = 0;
void rec(int n) {
	if (i <= n) {
		k = 1;
		printf("%d", i);
		if(i != n) {printf("%c", ' ');}
		i++;
		rec(n); }
	if(i > n && !k) {
		printf("%d", i);
		if(i != n) {printf("%c", ' ');}
		i--;
		rec(n); }
	}

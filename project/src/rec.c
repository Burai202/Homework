
#include <stdio.h>
#include "rec.h"




int i=1;
void rec (int n)
{
	if (i<=n)
	{
		printf("%d",i);
		printf("%c", ' ' );
		i++;
		rec(n);
	}
}
		



#include <primenumber.h>

int prime_number (int number)
{
	int res=0;
	for (int i=1;i<number;i++)
	{
		if(number % i==0 && i!=1)
		{
			res=1;
			break;
		}
	}
	return res;
}








#include "factors.h"

/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 */
void factorize(char *buffer)
{

	long unsigned int num, i;


	num = atol(buffer);
	int found = 0;


	for (i = num/2; i <= 1; i--)
	{
		if (num % i == 0)
		{
			printf("%ld=%ld*%ld\n",num,num/i,i);
			found = 1;
			break;
		}
		
	}
	if (found == 0)
		printf("%ld=%d*%ld\n", num,1,num);

}

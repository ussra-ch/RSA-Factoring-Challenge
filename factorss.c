#include "factors.h"

/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 */
void factorize(char *buffer)
{

	unsigned long long num, i;


	num = strtoul(buffer, NULL, 10);



	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%lld=%lld*%lld\n",num,num/i,i);
			break;
		}
	}

}


#include "factors.h"

/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 */
void factorize(char *buffer)
{

	long unsigned int num, i;


	num = atoi(buffer);



	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%ld=%ld*%ld\n",num,num/i,i);
			break;
		}
	}

}


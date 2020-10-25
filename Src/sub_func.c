#include "main.h"

extern unsigned short	time[];
extern unsigned short	servo[];

void	sort_time(void)
{
	static unsigned int	c;
	unsigned int sub;

	sub = (c) ? 0x2000: 0x20000000;
	GPIOC->BSRR = sub;
	c ^= 1;

	unsigned short key;
	int i,j;
	for(j = 1; j < 25; j++)
	{
		key = servo[j];
		i = j - 1;
		while (i >= 0 && servo[i] > key)
		{
			servo[i+1] = servo[i];
			i--;
		}
		servo[i+1] = key;
	}
}
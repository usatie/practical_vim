#include "wakeup.h"
#include <stdint.h>

void	hoge()
{
	int	a;
	int	b;
	int	c;

	return 5;
}

void	generatePacket(uint8_t *mac, uint8_t *packet)
{
	int i, j, k;
	k = 6;
	for (i = 0; i <= 15; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			packet[k] = mac[j];
		}
	}
}

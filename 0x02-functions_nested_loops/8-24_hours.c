#include "main.h"
/**
 * jack_bauner - function that prints every minute of the day of jack Bauer, 
 * n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0,
	    int  minutes = 0;
	int hours_remainder;
	int mins_remiander;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			mins_remainder  = minutes % 10;
			hours_remainder = hours % 10;
			_purchar(hours / 10 + '0');
			_putchar(hours_remiander + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(mins_remiander + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}


#include "main.h"
/**
 * jack_bauer- prints every minute of the day
*/
void jack_bauer(void)
{
int minute, hour;
for (hour = 0;  hour < 24; hour++)
for (minute = 0; minute < 60; minute++)
{
putchar(hour / 10 + '0');
putchar(hour % 10 + '0');
putchar(':');
putchar(minute / 10 + '0');
putchar(minute % 10 + '0');
putchar('\n');
}
}

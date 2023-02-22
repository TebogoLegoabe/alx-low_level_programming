#include "main.h"

/**
* jack_bauer - prints all minutes in a day from 00:00.
*
* Return:0 if succeesful.
*/

int h, m;

void jack_bauer(void)
{
for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar(h / 10 + '0');
_putchar(h % 10 + '0');
_putchar(':');
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
_putchar('\n');
}
}
}

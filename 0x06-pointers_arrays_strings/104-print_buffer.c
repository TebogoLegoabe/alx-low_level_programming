#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer in hex and ASCII
 * @b: the buffer to print
 * @size: the size of the buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
int i, j, offset;

offset = 0;

if (size <= 0) {
printf("\n");
return;
}

while (offset < size) {
j = (size - offset) < 10 ? (size - offset) : 10;
printf("%08x: ", offset);

for (i = 0; i < 10; i++) {
if (i < j) {
printf("%02x", b[offset + i]);
} else {
printf("  ");
}
if (i % 2) {
printf(" ");
}
}

for (i = 0; i < j; i++) {
int c = b[offset + i];

if (c < 32 || c > 132) {
c = '.';
}

printf("%c", c);
}

printf("\n");
offset += 10;
}
}

#include <stdio.h>

void first(void);
void init(void) __attribute__((constructor));

void init(void)
{
	first();
}
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

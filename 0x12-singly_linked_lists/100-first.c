#include <stdio.h>

/**
 * first - Prints a string before the main function is called
 *
 * This function is called by the init function before
 * the main function is called.
 *
 * Return: 0 (Success)
 */

void first(void);

/**
 * init - Initializes the program by calling the first function.
 *
 * This function is marked with the constructor attribute
 * which causes it to be executed
 * before the main function is called.
 * It calls the first function to print a message to the console.
 */

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

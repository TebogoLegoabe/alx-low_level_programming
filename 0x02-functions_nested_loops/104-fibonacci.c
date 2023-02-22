#include <stdio.h>

/**
* print_fibonacci_sequence - Prints a sequence of Fibonacci numbers
*
* @sequence: Pointer to an array to store the sequence
* @length: Length of the sequence
*
* Description: This function generates a sequence of Fibonacci numbers
*
*/
void print_fibonacci_sequence(int *sequence, int length)
{
int i;

sequence[0] = 0;
sequence[1] = 1;
for (i = 2; i < length; i++)
{
sequence[i] = sequence[i - 1] + sequence[i - 2];
}
printf("Fibonacci sequence:\n");
for (i = 0; i < length; i++)
{
printf("%d ", sequence[i]);
}
printf("\n");
}
/**
* main - Entry point
*
* Description: This program generates a sequence of Fibonacci numbers
*
* Return: Always 0 (success)
*/
int main(void)
{
const int FIB_SEQUENCE_LENGTH = 10;
int sequence[FIB_SEQUENCE_LENGTH];
print_fibonacci_sequence(sequence, FIB_SEQUENCE_LENGTH);
return (0);
}

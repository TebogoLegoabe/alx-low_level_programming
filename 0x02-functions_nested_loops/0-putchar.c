#include <stdio.h>

/**
 * main - print _putchar
 *
 * Return:0 (Success)
 *
 */
int main(void)
{
	void _putchar() 
	{
		const char* str = "_putchar\n";
		int i;
		for(i =0; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}

	return (0);
}

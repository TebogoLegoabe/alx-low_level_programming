#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 *
 * Return: 0 (Success)
 */
char *rot13(char *str) {
char *ptr = str;
int i, j;

for (i = 0; str[i]; i++) {
if (str[i] >= 'a' && str[i] <= 'z') {
for (j = 0; j < 13; j++) {
if (str[i] == 'z') {
str[i] = 'a';
} else {
str[i]++;
}
}
} else if (str[i] >= 'A' && str[i] <= 'Z') {
for (j = 0; j < 13; j++) {
if (str[i] == 'Z') {
str[i] = 'A';
} else {
str[i]++;
}
}
}
}

return (ptr);
}

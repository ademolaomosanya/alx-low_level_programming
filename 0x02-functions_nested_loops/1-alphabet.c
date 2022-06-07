/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0
 */
void print_alphabet(void)
#include "main.h"
{
char alpha;
alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}

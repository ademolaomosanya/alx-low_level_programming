#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 **/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *x;
if (size == 0)
return (NULL);
x = malloc(size * sizeof(char));
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
x[i] = c;
}
return (x);
}

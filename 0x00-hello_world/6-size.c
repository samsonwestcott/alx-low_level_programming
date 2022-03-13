#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %ld byte(s)\n", (unsigned long int)sizeof(c));
printf("Size of an int: %ld byte(s)\n", (unsigned long int)sizeof(i));
printf("Size of a long int: %ld byte(s)\n",
(unsigned long int)sizeof(li));
printf("Size of a long long int: %ld byte(s)\n", (unsigned long int)sizeof(lli));
printf("Size of a float: %ld byte(s)\n", (unsigned long int)sizeof(f));
return (0);
}

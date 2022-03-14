#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;

for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
if(ch <= '8')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}


#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'd'; ch++)
{
putchar(ch);
}

for (ch = 'f'; ch <= 'p'; ch++)
{
putchar(ch);
}
for (ch = 'r'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}

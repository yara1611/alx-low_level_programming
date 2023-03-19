#include <stdio.h>
/**
* main - program that prints all the numbers of base 16 in lowercase, followed
* by a new line.
* Return: 0 (Success)
*/
int main(void)
{
int x;
char c;
for(x = 0; x < 10; x++)
putchar(x);
for(c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}

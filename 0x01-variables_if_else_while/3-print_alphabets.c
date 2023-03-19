#include <stdio.h>
/**
*main - a program that prints the alphabet in lower case then in uppercase
*followed a by a new line.
*Return: 0 (success)
*/
int main(void)
{
char x = 'a';
char y = 'A';
while (x <= 'z')
{
putchar(x);
x++;
}
while (y <= 'Z')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}


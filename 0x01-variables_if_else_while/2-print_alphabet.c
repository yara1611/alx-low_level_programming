#include <stdio.h>
/**
*main - a program that prints the alphabet in lower case followed bya new line.
*Return: 0 (success)
*/
int main(void)
{
char x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}

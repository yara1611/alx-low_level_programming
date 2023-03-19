#include <stdio.h>
/**
*main - program that prints the alphabet in lowercase except q and e,
*followed by a new line.
* Return: 0 (success)
*/
int main(void)
{
char x = 'a';
while (x <= 'z')
{
if (x == 'e' || x == 'q')
x++;
putchar(x);
x++;
}
putchar('\n');
return (0);
}

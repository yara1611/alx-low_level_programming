File Edit Options Buffers Tools C Help                                       
#include <stdio.h>
/**
*main - a program that prints the alphabet in lower case then in uppercase
*followed a by a new line.
*Return: 0 (success)
*/
int main(void)
{
char x = 'a';
while (x <= 'Z')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}


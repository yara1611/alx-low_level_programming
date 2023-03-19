#include <stdio.h>
/**
* main - program that prints all possible combinations of single-digit numbers
* Return: 0 (Success)
*/
int main(void)
{
char x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

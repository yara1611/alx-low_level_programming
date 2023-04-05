#include <unistd.h>
/**
* _putchar - a program that prints _putchar, followed by a new line.
* @c: the character to print
* Return: 0 (Success)
* Return: -1 (Error)
*/
int _putchar(char c)
{
 return (write(0,&c,1));
}

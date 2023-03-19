#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* main: program when assigned a random number returns whether it is negative positive or zero
* Return: 0 (Success)
*/
int main(void)
{
 int n;
 srand(time(0));
 n = rand() - RAND_MAX / 2;
if (n > 0)
  printf("%d is positive", n);
else if (n < 0)
  printf("%d is negative", n);
else
  printf("%d is zero", n);
return (0);
}

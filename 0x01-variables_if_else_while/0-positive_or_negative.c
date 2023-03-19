#!/bin/bash
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* main: program when assigned a random number returns whether it is negative positive or zero*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	  printf("is positive");
	else if(n<0)
	  printf("is negative");
	else
	  printf("is zero");
	return (0);
}

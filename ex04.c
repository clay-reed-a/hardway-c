#include <stdio.h>

/* Why are strange values inserted 
upon execution into %d when a 
is removed from printf call? Why is 
the value 0 used when a has no value? 
We will use this program to read 
the outputs from Valgrind. */ 

int main()
{
	int a = 10; 
	int h; 

	printf("I am %d years old.\n");
	printf("I am %d inches tall.\n", h);

	return 0;
}
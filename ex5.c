#include <stdio.h>

/* argc: a count of the args, an int 
argv: an array of chars, the args */
int main(int argc, char *argv[])
{
	int d = 1000000; 

	// You are 1000000 miles away. 
	printf("You are %d miles away.\n", d);

	return 0; // UNIX exit value 
}
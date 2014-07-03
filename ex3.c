#include <stdio.h>

int main()
{
	int a = 10; 
	int h = 72;

	/* print some format strings */ 
	printf("I am %d years old.\n", a);
	printf("I am %d inches tall.\n", h);

	return 0; 
}


/* 
task: remove initial value from a
saw: a w/o a value interpreted as 0

task: remove a from printf call
saw: upon call, %d replaced w/ 
weird values, such as -461942152, 
-506479992 or 1687693144 */      
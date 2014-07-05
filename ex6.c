#include <stdio.h>

int main(int argc, char *argv[])
{
	int d = 1000000;
	float p = 2.345f;
	double sup_p = 56789.4532;
	char mid[] = "Reed";
	char first[] = "Clay";
	char last = 'A';

	printf("You are %d miles away.\n", d);
	printf("You have %f levels of power.\n", p);
	printf("You have %f awesome super powers.\n", sup_p);
	printf("I have a name %s.\n", mid);
	printf("I have a name %s.\n", first);
	printf("I have a name %c.\n", last);
	printf("I have a name %s %s %c.\n",
		first, mid, last); 

	return 0; 
}
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = argc-1  
	while (i > 1) 
	{
		printf("They are fighting: %s\n", 
			argv[i]);
		i--; 
	}
}
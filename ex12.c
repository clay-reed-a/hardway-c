#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0; 

	if(argc == 2) 
	{
		printf("You have only 1 arg. You suck.\n");
	}
	else if(argc > 2 && argc < 6)
	{
		printf("Here's your args:\n");

		for(i = 1; i < argc; i++)
		{
			printf("%s ", 
				argv[i]);
		}
		printf("\n");
	}
	else 
	{
		printf("You have too many args. You suck.\n");
	}

	return 0; 
}
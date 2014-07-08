#include <stdio.h>

int main(int argc, char *argv[])
{
	// print out each argument passed
	int i = 0;

	// argv[0] is program name  
	for(i = 1; i < argc; i++) 
	{
		printf("arg %d: %s\n",
			i, argv[i]);
	}

	// iterate through arr of strs literal 
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};

	int num_states = 4;

	for(i = 1; i < num_states; i++) 
	{
		printf("state %d: %s\n", 
			i, states[i]);
	}

	return 0; 
}
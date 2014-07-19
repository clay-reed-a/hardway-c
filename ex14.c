#include <stdio.h>
#include <ctype.h> // isalpha & isblank 

// forward declarations: or  
// declaring functions w/o 
// defining them... 
int can_print_it(char ch);
void print_letters(char arg[]); /* because 
I might need or want to use a function
before I've defined it */

void print_arguments(int argc, char *argv[])
{
	int i = 1;
	for(i = 1; i < argc; i++)
	{
		print_letters(argv[i]);
	}
}

void print_letters(char arg[])
{
	int i = 0; 
	for(i = 0; arg[i] != '\0'; i++)
	{
		char ch = arg[i]; 

		printf("\033[1;37m'\033[1;31;45m%c\033[0m\033[1;37m' == \033[0;36m%x\033[0m \n", 
				ch, ch);
		
	}

	printf("\n");
}


/* int can_print_it(char ch)
{
	return isalpha(ch) || isblank(ch); 
} */ 

int main(int argc, char *argv[])
{
	printf("\n"); // blank line 
	print_arguments(argc, argv);
	return 0;
}
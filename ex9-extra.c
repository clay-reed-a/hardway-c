#include <stdio.h>

/* 
A four-byte array of chars 
as an int 
*/

int main(int argc, char *argv[])
{	
	/* Q: what compiler warnings?
	A: none for me */  

	// int numbers[4] = {'0', 0, '\0', 'z'};
					// prints 48  0  0  122
	// int numbers[4] = {'c', 'l', 'a', 'y', '\0'};
					// prints 99 108 97 121 0 

	int number = {'c', 'l', 'a', 'y'};
	
	/* 					  
	printf("each char in int array: %d %d %d %d %d\n", 
		numbers[0], numbers[1],  
		numbers[2], numbers[3], numbers[4]); */ 

	printf("four-byte arr of chars\n as an int: %d\n", 
		number);



	// segmentation fault 
	// int four_byte_int = 7; 
	// printf("four_byte_int: %d\n", four_byte_int);
	return 0; 
} 

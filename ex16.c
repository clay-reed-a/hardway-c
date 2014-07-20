#include <stdio.h>
#include <assert.h> // http://en.wikipedia.org/wiki/Assert.h
					// for assert(something): "unless true,
					// typically aborts" ?? 

#include <stdlib.h> // probly for malloc: "memory allocate,
					// allocate bytes in memory" 

#include <string.h> // http://en.wikipedia.org/wiki/String.h
					// for NULL: "macro expanding to 
					// the null pointer constant,
					// a pointer value garanteed NOT 
					// to be a valid address in memory" 
					// & strdup: "string duplicate"
struct Person {
	char *name;
	int age;
	int height;
	int weight; 
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);

	// initialize the struct fields 
	who->name = strdup(name); // "this struct actually
	who->age = age;			  //  owns it" -Zed 
	who->height = height;
	who->weight = weight;

	return who;
}

void Person_destroy(struct Person *who)
{
	assert(who != NULL);

	free(who->name); // strdup malloc'd name 
	free(who); // the struct 
	// memory leak 
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[])
{
	// make two people structures 
	struct Person *alex = Person_create(
		"Alex Alexandra Alexanders", 32, 64, 140);

	struct Person *frank = Person_create(
		"Frank Blank", 20, 72, 180);

	// print them out & where they are in memory 
	printf("Alex is at memory location %p:\n", alex);
	Person_print(alex);

	printf("Frank is at memory location %p:\n", frank);
	Person_print(frank);

	// make everyone age 20 years & print them again 
	alex->age += 20; 
	alex->height -= 2;
	alex->weight += 40;
	Person_print(alex);

	frank->age += 20;
	frank->weight += 20;
	Person_print(frank);

	// clean up 
	Person_destroy(alex);
	Person_destroy(frank);

	return 0;
}
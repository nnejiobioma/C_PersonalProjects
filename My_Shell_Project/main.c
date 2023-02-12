#include "main.h"

int main(int ac, char **argv)
{
	char *prompt = "(reactJav1) $ "; // Creates the initial prompt
	char *lineptr;					 // store the address of the buffer holding whatever was typed.
	size_t n = 0;					 // to store the allocated size in bytes

	/* declaring void varriables*/
	(void)ac;
	(void)argv;

	printf("%s", prompt);		  // prins out prompt created
	getline(&lineptr, &n, stdin); // Allocates memory dynamicaly
	printf("%s\n", lineptr);	  // printing out what was typed

	free(lineptr); // free up assigned memory
	return (0);
}

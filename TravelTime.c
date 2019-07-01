#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{ 
	int blocks; 
	char choice[5];
	int runtime = 1; 
	int jogtime = 2; 
	int walktime = 4; 
	int r; 
	int j; 
	int w;  
	

	printf("How many blocks would you like to go today?: ");
	scanf("%d", &blocks);

	printf ("You are going %d blocks\n", blocks); 


	if (blocks > 0) {
		printf ("Will you walk, jog, or run today?: ");
		scanf ("%s", choice); 

		printf("You have chosen to %s today\n", choice);
		if (strcmp(choice, "run") == 0) {
			r = blocks * runtime;
			printf("It will take you %d minutes to go %d blocks\n", r, blocks); 
		} else if (strcmp(choice, "jog") == 0) {
			j = blocks * jogtime; 
			printf("It will take you %d minutes to go %d blocks\n", j, blocks);
		} else if (strcmp(choice, "walk") == 0) { 
			w = blocks * walktime; 
			printf("It will take you %d minutes to go %d blocks\n", w, blocks);
		} else {
			printf ("Please enter either run, walk, or jog in all lowercase letters\n");
		}  
	} else {
		printf ("Please enter a distance that is greater than 0\n"); 
	}
	return 0; 
}



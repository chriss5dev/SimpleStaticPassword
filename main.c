#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define password "vw6rC3HPCGJvMPPZ7VbR8TsvwU58pcjV"


char input[64];

int main()
{
	printf("Enter the password: ");
	scanf("%s", input);
	
	if(strcmp(input, password) == 0)
	{
		printf("Correct password!\n");
		return 0;
	}
	
	printf("Incorrect password!\n");
	return 1;
}

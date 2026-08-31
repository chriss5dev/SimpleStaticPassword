#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define password "k(0mFVK,8p<r2h'Fv$24o-S9kzS{|G2B4:]vzV>£BuCU9rh'@o"


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